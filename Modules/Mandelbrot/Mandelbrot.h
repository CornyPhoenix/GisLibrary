///////////////////////////////////////////////////////////
//                                                       //
//                         SAGA                          //
//                                                       //
//      System for Automated Geoscientific Analyses      //
//                                                       //
//                    Module Library:                    //
//                        M�llers                        //
//                                                       //
//-------------------------------------------------------//
//                                                       //
//                     Mandelbrot.h                      //
//                                                       //
//                 Copyright (C) 2013 by                 //
//            Konstantin Simon Maria M�llers             //
//                                                       //
//-------------------------------------------------------//
//                                                       //
// This file is part of 'SAGA - System for Automated     //
// Geoscientific Analyses'. SAGA is free software; you   //
// can redistribute it and/or modify it under the terms  //
// of the GNU General Public License as published by the //
// Free Software Foundation; version 2 of the License.   //
//                                                       //
// SAGA is distributed in the hope that it will be       //
// useful, but WITHOUT ANY WARRANTY; without even the    //
// implied warranty of MERCHANTABILITY or FITNESS FOR A  //
// PARTICULAR PURPOSE. See the GNU General Public        //
// License for more details.                             //
//                                                       //
// You should have received a copy of the GNU General    //
// Public License along with this program; if not,       //
// write to the Free Software Foundation, Inc.,          //
// 59 Temple Place - Suite 330, Boston, MA 02111-1307,   //
// USA.                                                  //
//                                                       //
//-------------------------------------------------------//
//                                                       //
//    e-mail:     oconrad@saga-gis.de                    //
//                                                       //
//    contact:    Olaf Conrad                            //
//                Institute of Geography                 //
//                University of Hamburg                  //
//                Germany                                //
//                                                       //
///////////////////////////////////////////////////////////

//---------------------------------------------------------
#ifndef HEADER_INCLUDED__Mandelbrot_H
#define HEADER_INCLUDED__Mandelbrot_H

//---------------------------------------------------------
#include "../../Library/MLB_Interface.h"

//---------------------------------------------------------
// The Template Module class.
//---------------------------------------------------------
class CMandelbrot : public CSG_Module_Grid
{
public:
	CMandelbrot(void);

protected:
	virtual bool On_Execute(void);

private:
	void Init_Meta_Info(void);
	void Init_Parameters(void);
	void Draw_Mandelbrot(CSG_Grid *grid);
	bool In_Circle(double re, int im);
};

//---------------------------------------------------------
#endif // #ifndef HEADER_INCLUDED__Mandelbrot_H
