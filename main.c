#include <stdio.h>
#include <stdlib.h>
#include "imlib.h"
#include <stdbool.h>

int main() {
    // 读取前后帧图像信息
    image_t img0, img1;
    // 读取图像并将其赋值给img0和img1

    // 设置感兴趣区域（可选）
    rectangle_t roi0, roi1;
    // 设置roi0和roi1的值

    // 定义其他变量
    bool logpolar = false;              // 是否使用对数极坐标
    bool fix_rotation_scale = false;    // 是否修正旋转和缩放
    float x_translation, y_translation, rotation, scale, response;

    // // 调用imlib_phasecorrelate()函数计算光流的平移结果
    // imlib_phasecorrelate(&img0, &img1, &roi0, &roi1, logpolar, fix_rotation_scale,
    //                      &x_translation, &y_translation, &rotation, &scale, &response);

    // 输出结果 
    printf("OK");
    printf("Translation (x, y): (%f, %f)\n", x_translation, y_translation);

    return 0;
}