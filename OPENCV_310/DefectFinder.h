#pragma once

#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/highgui.h>
#include <opencv2/opencv.hpp>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <vector>
#include <iostream>
#include <sstream>
#include "stdio.h"
#include "time.h"
#include <cmath>
#include <windows.h>
#include <direct.h>
#include <string>
#include <thread>

#define	cVersion "1.00"
#define	nonMouse "Non MouseEvent"
#define useMouse "Mouse Event"


//#define PRINT_DEBUG
#define DEBUG_MODE

using namespace cv;
using namespace cv::ml;
using namespace std;

extern double dft_radius;
extern double dft_thresh;
extern double dft_thresh_min;
extern double dft_thresh_max;
extern double adap_th1;
extern double adap_th2;
extern double canny_th1;
extern double canny_th2;
extern double back_th;


extern double black_adap_th1;
extern double black_adap_th2;
extern double black_canny_th1;
extern double black_canny_th2;

extern double black_invisible_adap_th1;
extern double black_invisible_adap_th2;
extern double black_invisible_canny_th1;
extern double black_invisible_canny_th2;

extern double invisible_adap_th1;
extern double invisible_adap_th2;
extern double invisible_canny_th1;
extern double invisible_canny_th2;

extern double white_invisible_adap_th1;
extern double white_invisible_adap_th2;
extern double white_invisible_canny_th1;
extern double white_invisible_canny_th2;

extern double white_adap_th1;
extern double white_adap_th2;
extern double white_canny_th1;
extern double white_canny_th2;

extern double ledoff_adap_th1;
extern double ledoff_adap_th2;
extern double ledoff_canny_th1;
extern double ledoff_canny_th2;

extern double log_DV;
extern double log_EV;
extern double log_SV;
extern double log_RV;
extern double log_BF;


//void bitwise_mask(const Mat src, const Mat mask, Mat &dst);
//void dft_background_remove(Mat src, Mat &dst, double radius_ratio, double thresh_ratio);
void find_defect(vector<Mat> &src, vector<Mat> &dst, string FolderPath, int *best_focus_idx, string *defect_class, Mat idx_mat);