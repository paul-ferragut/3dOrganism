#pragma once

#include "ofMain.h"
#include "particles.h"

class branch{

	public:
    
    
    branch();
    ~branch(){};
    
    void setup(ofVec3f center, ofVec3f direction);
    void grow(int index);
    void draw();
    
    
    int maxParticles;
    int counter;
    
    vector<particles>p;
    
    ofVec3f centerBranch;
    ofVec3f directionBranch;
    
};
