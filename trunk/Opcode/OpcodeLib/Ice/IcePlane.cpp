///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains code for planes.
 *	\file		IcePlane.cpp
 *	\author		Pierre Terdiman
 *	\date		April, 4, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	IcePlane class.
 *	\class		IcePlane
 *	\author		Pierre Terdiman
 *	\version	1.0
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Precompiled Header
#include "Stdafx.h"

using namespace IceMaths;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Computes the plane equation from 3 points.
 *	\param		p0	[in] first point
 *	\param		p1	[in] second point
 *	\param		p2	[in] third point
 *	\return		Self-reference
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
IcePlane& IcePlane::Set(const IcePoint& p0, const IcePoint& p1, const IcePoint& p2)
{
	IcePoint Edge0 = p1 - p0;
	IcePoint Edge1 = p2 - p0;

	n = Edge0 ^ Edge1;
	n.Normalize();

	d = -(p0 | n);

	return	*this;
}