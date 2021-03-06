/*
**
** Copyright (C) 2009 0xlab.org - http://0xlab.org/
** Copyright 2008, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef CONVERTER_H
#define CONVERTER_H

void y422_to_yuv420(unsigned char *bufsrc, unsigned char *bufdest, int width, int height);
void yuyv422_to_yuv420(unsigned char *bufsrc, unsigned char *bufdest, int width, int height);
void yuyv422_to_yuv420sp(unsigned char *bufsrc, unsigned char *bufdest, int width, int height);
void yuyv422_to_yuv422sp(unsigned char *bufsrc, unsigned char *bufdest, int width, int height);

void convertYUYVtoRGB565(unsigned char *buf, unsigned char *rgb, int width, int height);
static void yuv_to_rgb16(unsigned char y, unsigned char u, unsigned char v, unsigned char *rgb);

#endif
