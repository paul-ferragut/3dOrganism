#include "particles.h"


particles::particles(){
    
}

//--------------------------------------------------------------
void particles::setup(ofVec3f centerPos, float rad){
    pos=centerPos;
    radius=rad;
}

//--------------------------------------------------------------
void particles::updatePos(ofVec3f nPos){
    pos=nPos;
}

//--------------------------------------------------------------
void particles::updateRadius(float nRadius){
    radius=nRadius;
}

//--------------------------------------------------------------
ofVec3f particles::getPos(){
    return pos;
}

//--------------------------------------------------------------
float particles::getRadius(){
    return radius;
}

//--------------------------------------------------------------
void particles::drawDebug(){
    
    ofDrawBox(pos, radius, radius, radius);
    
}

//--------------------------------------------------------------
