#include<iostream>
using namespace std;

int detectEye();
void trackEye(); 

int main()
{
    cv::VideoCapture cap(0);

    cv::Mat frame; 
    cv::Mat eye_tpl;  // The eye template
    cv::Rect eye_bb;  // The eye bounding box

    while(cv::waitKey(15) != 'q') 
    {
        cap >> frame;
        cv::Mat gray;
        cv::cvtColor(frame, gray, CV_BGR2GRAY);

        if (eye_bb.width == 0 && eye_bb.height == 0) 
            detectEye(gray, eye_tpl, eye_bb);
        else 
        {
            trackEye(gray, eye_tpl, eye_bb);
            cv::rectangle(frame, eye_bb, CV_RGB(0,255,0));
        }
        cv::imshow("video", frame);
    }
    return 0;
}








int detectEye(cv::Mat& im, cv::Mat& tpl, cv::Rect& rect)
{
    std::vector<cv::Rect> faces, eyes;
    face_cascade.detectMultiScale(im, faces, 1.1, 2, 
                                  CV_HAAR_SCALE_IMAGE, cv::Size(30,30));

    for (int i = 0; i < faces.size(); i++)
    {
        cv::Mat face = im(faces[i]);
        eye_cascade.detectMultiScale(face, eyes, 1.1, 2, 
                                     CV_HAAR_SCALE_IMAGE, cv::Size(20,20));
        if (eyes.size())
        {
            rect = eyes[0] + cv::Point(faces[i].x, faces[i].y);
            tpl  = im(rect);
        }
    }

    return eyes.size();
}








/
void trackEye(cv::Mat& im, cv::Mat& tpl, cv::Rect& rect)
{
    cv::Size size(rect.width * 2, rect.height * 2);
    cv::Rect window(rect + size - cv::Point(size.width/2, size.height/2));

    window &= cv::Rect(0, 0, im.cols, im.rows);

    cv::Mat dst(window.width - tpl.rows + 1, window.height - tpl.cols + 1, CV_32FC1);
    cv::matchTemplate(im(window), tpl, dst, CV_TM_SQDIFF_NORMED);

    double minval, maxval;
    cv::Point minloc, maxloc;
    cv::minMaxLoc(dst, &minval, &maxval, &minloc, &maxloc);

    if (minval <= 0.2)
    {
        rect.x = window.x + minloc.x;
        rect.y = window.y + minloc.y;
    }
    else
        rect.x = rect.y = rect.width = rect.height = 0;
}











