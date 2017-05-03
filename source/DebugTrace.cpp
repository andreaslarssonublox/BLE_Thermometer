/*
* DebugTrace. Allows dumping debug messages/values to serial or
* to file.
*
* Copyright (C) <2009> Petras Saduikis <petras@petras.co.uk>
*
* This file is part of DebugTrace.
*
* DebugTrace is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* DebugTrace is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with DebugTrace.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "DebugTrace.h"
#include <mbed.h>
#include <stdarg.h>
#include <string.h>



DebugTrace::DebugTrace(eLog on, eLogTarget mode, const char* fileName, int maxSize) :
    enabled(on), logMode(mode), maxFileSize(maxSize), currentFileSize(0),
    logFileStatus(0)
{

}

DebugTrace::~DebugTrace()
{

}

void DebugTrace::clear()
{

}

void DebugTrace::backupLog()
{

}

void DebugTrace::traceOut(const char* fmt, ...)
{

}
