/*
    Copyright (C) 2013 Soroush Falahati - soroush@falahati.net

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
	*/

#include <stdio.h>
#include "Array.cpp"
#include "OpenNI.h"
#include "NiTE.h"
using namespace nite;

extern "C"
{
	__declspec(dllexport) PoseType PoseData_getType(PoseData* pd)
	{
		 return pd->getType();
	}

	__declspec(dllexport) bool PoseData_isEntered(PoseData* pd)
	{
		 return pd->isEntered();
	}

	__declspec(dllexport) bool PoseData_isExited(PoseData* pd)
	{
		 return pd->isExited();
	}

	__declspec(dllexport) bool PoseData_isHeld(PoseData* pd)
	{
		 return pd->isHeld();
	}
};