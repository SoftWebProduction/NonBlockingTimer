/*
 Copyright (c) 2013-2014 softWEB Production All Right Reserved, https://swp.pt
 This source is subject to the softWEB Production Licensing models.
 All other rights reserved.
 
 THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 PARTICULAR PURPOSE.
 
 
 Title:		NonBlockingTimer
 Description    Non blocking Timer Class example
 Version:	1.0
 Company:	softWEB Production
 Author:	Isaias Lourenco
 Copyright:     softWEB Production © Moerbius, 2014
 License:       MIT
 Website:	https://swp.pt
 
 */

#include <NonBlockingTimer.h>

NonBlockingTimer ledTimer(500);
int ledState;

void setup() {
    pinMode(13, OUTPUT);
    ledState = 0;
}

void loop() {
    
    if(ledTimer.isTime()) {
        digitalWrite(13, ledState);
        ledState = !ledState;
    }
    
}