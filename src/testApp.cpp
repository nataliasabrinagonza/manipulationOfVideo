#include "testApp.h"

/*  manipulationOfVideo
  *
  * Copyright 2012 Natalia sabrina Gonza
  * Todos los derechos reservados.
  *
  * La redistribución y uso , con o sin modificación, están permitidas siempre que se
  * cumpla el siguiente requisito:
  *   La redistribución del código fuente deben conservar el derecho de autor
  *
  *               * -------------------------- *
  *
  * Copyright 2012 Natalia sabrina Gonza
  * All rights reserved.
  *
  * Redistribution and use, with or without modification, are permitted provided that it
  * meets the following requirement:
  *    Redistributions of source code must retain copyright
  *
  **/

//--------------------------------------------------------------
void testApp::setup(){

	camWidth 		= 320;
	camHeight 		= 240;

	vidGrabber.initGrabber(camWidth,camHeight);

	canPixel        = 3;
	tamanio         = 0.9;
}

//--------------------------------------------------------------
void testApp::update(){
	ofBackground(255);
	vidGrabber.grabFrame();
}

//--------------------------------------------------------------
void testApp::draw(){


	float diameter = 2;

	unsigned char* pixels = vidGrabber.getPixels();

	    for (int i = 4; i < camWidth; i+=canPixel){
        for (int j = 4; j < camHeight; j+=canPixel){
            unsigned char r = pixels[(j * camWidth + i)*3];
            float val = 1 - ((float)r / 255.0f);
            int p = j * camWidth + i;
            ofSetColor(pixels[p * 3 + 0], pixels[p * 3 + 1], pixels[p * 3 + 2]);
            //ofDrawBitmapString("g", 318 + i * diameter,(j-2) * diameter );
            ofCircle(318 + i * diameter,(j-2) * diameter, tamanio + val * diameter);
        }
    }

	ofSetColor(255);
	vidGrabber.draw(0,0);

    ofSetColor(0);
	ofDrawBitmapString("Natalia Sabrina Gonza",140, ofGetHeight()-10 );

    //ofSetHexColor(0xff0033);

	ofDrawBitmapString("• Key Press: 1 , 2 , 3 , 4 , 5 , 6 ",5, ofGetHeight()-220 );
	ofDrawBitmapString("• Key Press: - (- diámetro)",5, ofGetHeight()-200 );
	ofDrawBitmapString("• Key Press: + (+ diámetro)",5, ofGetHeight()-180 );

	//ofDrawBitmapString("Diametro:" + tamanio +";",5, ofGetHeight()-140 );
	ofDrawBitmapString("-------------------------------------",5, ofGetHeight()-150 );
	ofDrawBitmapString(" Press: " + ofToString(canPixel,2), 5, ofGetHeight()-140 );
	ofDrawBitmapString(" Diámetro: " + ofToString(tamanio,2), 5, ofGetHeight()-120 );
	ofDrawBitmapString("-------------------------------------",5, ofGetHeight()-110 );

}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){

    switch (key){
        case '1':
			canPixel = 1;
			break;
		case '2':
            canPixel = 2;
			break;
        case '3':
			canPixel = 3;
			break;
		case '4':
            canPixel = 4;
			break;
        case '5':
			canPixel = 5;
			break;
		case '6':
            canPixel = 6;
			break;

        case '+':
			tamanio = tamanio + 0.1;
			break;
		case '-':
            tamanio = tamanio - 0.1;
			break;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
