#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

class Circle {
	public:
		void setup();
		ofParameterGroup params;
		ofParameter<ofVec3f> colors;
		ofParameter<int> x;
		ofParameter<int> y;
	};

#endif