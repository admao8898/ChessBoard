#include <opencv2\opencv.hpp>
using namespace cv; 

int main(int, char**)
{
	VideoCapture cap(0); // For video capture 

	if (!cap.isOpened())
		return -1; 

	while (1)
	{
		Mat frame; // Frame for viewing the camera
		cap.read(frame);  //reading from camera and displaying it on the frame 
		imshow("Camera", frame); //Showing the frame in a window. 

		if (waitKey(30) == 's')
		{
			break; 
		}
	}
	return 0; 
}