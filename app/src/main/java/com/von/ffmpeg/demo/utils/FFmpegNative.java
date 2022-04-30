package com.von.ffmpeg.demo.utils;

public class FFmpegNative {
    static {
        System.loadLibrary("learn-ffmpeg");
    }

    public native static String getFFmpegVersion();
}
