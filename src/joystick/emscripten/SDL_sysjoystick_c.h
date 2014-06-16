/*
 Simple DirectMedia Layer
 Copyright (C) 1997-2014 Sam Lantinga <slouken@libsdl.org>

 This software is provided 'as-is', without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.

 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely, subject to the following restrictions:

 1. The origin of this software must not be misrepresented; you must not
 claim that you wrote the original software. If you use this software
 in a product, an acknowledgment in the product documentation would be
 appreciated but is not required.
 2. Altered source versions must be plainly marked as such, and must not be
 misrepresented as being the original software.
 3. This notice may not be removed or altered from any source distribution.
 */

#include "SDL_config.h"

#ifdef SDL_JOYSTICK_EMSCRIPTEN
#include "../SDL_sysjoystick.h"

typedef enum
{
    EMSCRIPTEN_CONTROLLER_BUTTON_INVALID = -1,
    EMSCRIPTEN_CONTROLLER_BUTTON_A,
    EMSCRIPTEN_CONTROLLER_BUTTON_B,
    EMSCRIPTEN_CONTROLLER_BUTTON_X,
    EMSCRIPTEN_CONTROLLER_BUTTON_Y,
    EMSCRIPTEN_CONTROLLER_BUTTON_L1,
    EMSCRIPTEN_CONTROLLER_BUTTON_R1,
    EMSCRIPTEN_CONTROLLER_BUTTON_L2,
    EMSCRIPTEN_CONTROLLER_BUTTON_R2,
    EMSCRIPTEN_CONTROLLER_BUTTON_BACK,
    EMSCRIPTEN_CONTROLLER_BUTTON_START,
    EMSCRIPTEN_CONTROLLER_BUTTON_LEFTSTICK,
    EMSCRIPTEN_CONTROLLER_BUTTON_RIGHTSTICK,
    EMSCRIPTEN_CONTROLLER_BUTTON_DPAD_UP,
    EMSCRIPTEN_CONTROLLER_BUTTON_DPAD_DOWN,
    EMSCRIPTEN_CONTROLLER_BUTTON_DPAD_LEFT,
    EMSCRIPTEN_CONTROLLER_BUTTON_DPAD_RIGHT,
    EMSCRIPTEN_CONTROLLER_BUTTON_GUIDE,
} Emscripten_GameControllerButton;

static int EMSCRIPTEN_MAX_NBUTTONS = 18;

/* A linked list of available joysticks */
typedef struct SDL_joylist_item
{
  int index;
  EM_UTF8 id[64];
  EM_UTF8 mapping[64];
  SDL_Joystick *joystick;
  int nbuttons, naxes;

  struct SDL_joylist_item *next;
} SDL_joylist_item;

typedef SDL_joylist_item joystick_hwdata;

#endif /* SDL_JOYSTICK_EMSCRIPTEN */

/* vi: set ts=4 sw=4 expandtab: */
