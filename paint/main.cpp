#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Point pt(400,300);
	cv::Point pt1(10, 10);
	cv::Point pt2(400, 300);
	cv::Mat dispMat = Mat::zeros(Size(800, 600), CV_8UC3);
	cv::Rect rect;
	rect.x = 300;
	rect.y = 250;
	rect.width = 200;
	rect.height = 100;
	circle(dispMat, pt, 100, CV_RGB(255, 0, 0), 1, 8, 0);
	line(dispMat, pt1, pt2, CV_RGB(0, 255, 0), 1, 8, 0);
	rectangle(dispMat, rect, CV_RGB(0, 0, 255), 1, 8, 0);
	imshow("disp", dispMat);
	waitKey(0);
	return 0;
}