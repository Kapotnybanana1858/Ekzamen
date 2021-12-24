#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>

using namespace cv;
using namespace std;
int main()
{
	
	int height = 1080;
	int width = 1920;
	Mat img = imread("C:/Users/Администратор/Desktop/ConsoleApplication1/cruzak200.jpg");
	Point textOrg(100, img.rows / 2);
	int fontFace = FONT_HERSHEY_SIMPLEX;
	double fontScale = 3;
	Scalar color(9, 0, 255);
	putText(img, "hello world", textOrg, fontFace, fontScale, color);
	imshow("hello world", img);
	waitKey(0);
	return 0;

}
