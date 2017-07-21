#include<iostream>
#include<fstream>
#include<opencv2\opencv.hpp>
#include<zbar.h>

/*ライブラリのリンク*/
#ifdef _DEBUG//debugモード
#pragma comment(lib, "c:\\dev\\opencv-3.2.0\\build\\x64\\vc14\\lib\\opencv_world320d.lib")
#else
#pragma comment(lib, "c:\\dev\\opencv-3.2.0\\build\\x64\\vc14\\lib\\opencv_world320.lib")
#endif
#pragma comment(lib, "C:\dev\ZBar\lib\libzbar-0.lib")

using namespace std;
using namespace cv;
using namespace zbar;

int main(void) {

	VideoCapture cap(0);

	if (!cap.isOpened()) {//カメラが開けない
		return -1;
	}

	while (true) {

		
	}

	return 0;
}