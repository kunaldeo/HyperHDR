#pragma once

#include <effectengine/AnimationBaseMusic.h>

#define AMUSIC_WAVESPULSEFAST "Music: pulse waves for LED strip (MULTI COLOR FAST)"

class Animation4Music_WavesPulseFast : public AnimationBaseMusic
{
public:

	Animation4Music_WavesPulseFast();

	bool Play(HyperImage& painter) override;

	static EffectDefinition getDefinition();

	bool hasOwnImage() override;
	bool getImage(Image<ColorRgb>& image) override;
private:
	uint32_t _internalIndex;
	int		 _oldMulti;
	QList<ColorRgb> _buffer;
};
