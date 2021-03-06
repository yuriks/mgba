/* Copyright (c) 2013-2015 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef PSP2_CONTEXT_H
#define PSP2_CONTEXT_H

#include "psp2-common.h"

struct GBAGUIRunner;
void GBAPSP2Setup(struct GBAGUIRunner* runner);
void GBAPSP2Teardown(struct GBAGUIRunner* runner);

void GBAPSP2LoadROM(struct GBAGUIRunner* runner);
void GBAPSP2UnloadROM(struct GBAGUIRunner* runner);
void GBAPSP2PrepareForFrame(struct GBAGUIRunner* runner);
void GBAPSP2Draw(struct GBAGUIRunner* runner, bool faded);
uint16_t GBAPSP2PollInput(struct GBAGUIRunner* runner);

#endif
