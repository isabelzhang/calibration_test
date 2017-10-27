#include <stdio.h>
#include <string.h>
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
// #include <opencv2/videoio.hpp>

using namespace cv;
using namespace std;


int main(int argc, char** argv) {
	printf("Hello World\n");
	// Mat image;
	// image = imread(argv[1], CV_LOAD_IMAGE_COLOR);

	// if (!image.data) {
	// 	// cout << "No such file";
	// 	return -1;
	// }

	// namedWindow("Display", WINDOW_AUTOSIZE);
	// imshow("DISPLAY WINDOW", image);
	// waitKey(0);


	VideoCapture stream1(0);

	while (true) {
		Mat cameraFrame;
		stream1.read(cameraFrame);
		imshow("Camera Output", cameraFrame);
		if (waitKey(30) >= 0) {
			break;
		}
	}
	return 0;
}