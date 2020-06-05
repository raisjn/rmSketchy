#ifndef DEFINES_H
#define DEFINES_H

#define WHITE 0xFFFFFFFF
#define BLACK 0

#define WAVEFORM_MODE_DU 0x1
#define TEMP_USE_REMARKABLE_DRAW 0x0018
#define EPDC_FLAG_EXP1 0x270ce20


#define WACOMWIDTH 15725.0
#define WACOMHEIGHT 20967.0
#define DISPLAYWIDTH 704.0
#define DISPLAYHEIGHT 1872.0

#define WACOM_X_SCALAR (float(DISPLAYWIDTH) / float(WACOMWIDTH));
#define WACOM_Y_SCALAR (float(DISPLAYHEIGHT) / float(WACOMHEIGHT));

#endif