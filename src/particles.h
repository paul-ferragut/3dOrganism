#pragma once

#include "ofMain.h"


class particles{

	public:
    
    
    particles();
    ~particles(){};
    
		void setup(ofVec3f centerPos, float rad);
		void updatePos(ofVec3f nPos);
        void updateRadius(float nRadius);
        ofVec3f getPos();
        float getRadius();
		void drawDebug();
    
    
    private:
    ofVec3f pos;
    float radius;
    
};
