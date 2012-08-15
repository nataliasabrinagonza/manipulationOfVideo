#pragma once

#include "ofMain.h"

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


class testApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


		ofVideoGrabber 		vidGrabber;
		int 				camWidth;
		int 				camHeight;
		int                 canPixel;
		float               tamanio;

		ofImage             circulo;
};

