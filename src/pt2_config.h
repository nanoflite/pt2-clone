#pragma once

#include <stdint.h>
#include <stdbool.h>

enum
{
	PIXELFILTER_NEAREST = 0,
	PIXELFILTER_LINEAR = 1,
	PIXELFILTER_BEST = 2
};

typedef struct config_t
{
	char *defModulesDir, *defSamplesDir;
	bool waveformCenterLine, pattDots, compoMode, autoCloseDiskOp, hideDiskOpDates, hwMouse;
	bool transDel, fullScreenStretch, vsyncOff, modDot, blankZeroFlag, realVuMeters, rememberPlayMode;
	bool startInFullscreen, integerScaling;
	int8_t stereoSeparation, videoScaleFactor, accidental;
	uint8_t pixelFilter, filterModel;
	uint16_t quantizeValue;
	uint32_t soundFrequency, soundBufferSize, audioInputFrequency;
} config_t;

extern config_t config; // pt2_config.c

void loadConfig(void);
