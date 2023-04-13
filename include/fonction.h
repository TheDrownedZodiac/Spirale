/*
 * E89 Pedagogical & Technical Lab
 * project:     tp circle
 * created on:  2022-11-18 - 12:18 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: fonction
 */

#include <lapin.h>

#ifndef STU_H_

#define STU_H_

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);

void stu_set_pixel(t_bunny_pixelarray *pxa,
                   t_bunny_position *pos,
                   unsigned int color);

double deg_to_rads(int degrees);

void stu_set_circle(t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius);

void stu_set_spiral(t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius,
                    int loops);

#endif
