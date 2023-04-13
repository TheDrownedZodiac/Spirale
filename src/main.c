/*
 * E89 Pedagogical & Technical Lab
 * project:     tp cercle
 * created on:  2023-01-12 - 09:50 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: main
 */

#include "fonction.h"

int main (void)
{
    t_bunny_window *win;
    t_bunny_position origin;
    t_bunny_pixelarray *px;
    int x;
    int y;
    int radius;
    int loops;

    win = bunny_start(1920, 1080, false, "fl: Draw_circle");
    px = bunny_new_pixelarray(1920, 1080);
    origin.x = 0;
    origin.y = 0;
    radius = 10;
    loops = 200;
    x = 480;
    y = 540;
    clear_pixelarray(px, BLACK);
    stu_set_circle(px, x, y, radius);
    stu_set_spiral(px, x, y, radius, loops);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep(1e7);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
