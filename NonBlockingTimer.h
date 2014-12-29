/*
 Copyright (c) 2013-2014 softWEB Production All Right Reserved, https://swp.pt
 This source is subject to the softWEB Production Licensing models.
 All other rights reserved.
 
 THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 PARTICULAR PURPOSE.
 
 
 Title:		NonBlockingTimer
 Descript.  Non blocking Timer Class
 Version:	1.0
 Company:	softWEB Production
 Author:	Isaias Lourenco
 Copyright: softWEB Production © Moerbius, 2014
 License:   MIT
 Website:	https://swp.pt
 
 */


#ifndef NonBlockingTimer_h
#define NonBlockingTimer_h

#include <Arduino.h>

class NonBlockingTimer {
    
public:
    NonBlockingTimer(uint16_t ms);
    bool isTime();
private:
    uint16_t _ms;
    uint16_t _lastmillis;
    uint16_t _currentmillis;
    bool _isTime;
};




#endif
