#include "CompressorListener.h"

#include <Compressor.h>

#include "../RobotMap.h"

CompressorListener::CompressorListener() {

}

CompressorListener::~CompressorListener() {
	delete compressor;
}

void CompressorListener::init(Environment* environment){
	compressor = new Compressor(COMPRESSOR_PRESSURE, COMPRESSOR_RELAY);
	compressor->Start();
}

bool CompressorListener::shouldExecute(){
	return true;
}

void CompressorListener::execute(){

}

