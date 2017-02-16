#include "branch.h"


branch::branch(){
    
}

//--------------------------------------------------------------
void branch::setup(ofVec3f center, ofVec3f direction){
  
    centerBranch=center;
    directionBranch=direction;
    counter=0;
    maxParticles=100;
    
    particles newP;
    float startRadius=12;
    newP.setup(centerBranch,startRadius);
    
    p.push_back(newP);
    
    
}

void branch::grow(int index){

    ofVec3f lastPos=p[p.size()-1].getPos();
    
    ofVec3f direction=directionBranch-lastPos;
    //ofVec3f direction=directionBranch-centerBranch;
    direction*=0.05;
    
    float lastRadius=p[p.size()-1].getRadius();
    
    particles newP;
    newP.setup(lastPos+direction, lastRadius*0.95);
    
    p.push_back(newP);
    
}

void branch::draw(){

    for(int i=0;i<p.size();i++){
        p[i].drawDebug();
    }
    
}

