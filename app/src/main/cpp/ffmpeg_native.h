//
// Created by Von on 2022/4/5.
//

#ifndef FFMPEG_NATIVE_H
#define FFMPEG_NATIVE_H

#include <cstdio>
#include <cstring>
#include "jni.h"

#ifdef __cplusplus
extern "C" {
#endif


//由于 FFmpeg 库是 C 语言实现的，告诉编译器按照 C 的规则进行编译
#include <libavcodec/version.h>
#include <libavcodec/avcodec.h>
#include <libavformat/version.h>
#include <libavutil/version.h>
#include <libavfilter/version.h>
#include <libswresample/version.h>
#include <libswscale/version.h>

#ifdef __cplusplus
}
#endif

#endif //FFMPEG_NATIVE_H
