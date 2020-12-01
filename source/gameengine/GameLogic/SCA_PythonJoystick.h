/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor(s): Mitchell Stokes.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file SCA_PythonJoystick.h
 *  \ingroup gamelogic
 */

#ifndef __SCA_PYTHONJOYSTICK_H__
#define __SCA_PYTHONJOYSTICK_H__

#include "EXP_Value.h"

class SCA_PythonJoystick : public CValue {
  Py_Header private : class DEV_Joystick *m_joystick;
  int m_joyindex;

 public:
  SCA_PythonJoystick(class DEV_Joystick *joystick, int joyindex);
  virtual ~SCA_PythonJoystick();

  virtual std::string GetName();

#ifdef WITH_PYTHON
  static PyObject *pyattr_get_num_x(PyObjectPlus *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
  static PyObject *pyattr_get_active_buttons(PyObjectPlus *self_v,
                                             const KX_PYATTRIBUTE_DEF *attrdef);
  static PyObject *pyattr_get_hat_values(PyObjectPlus *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
  static PyObject *pyattr_get_axis_values(PyObjectPlus *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
  static PyObject *pyattr_get_name(PyObjectPlus *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
#endif
};

#endif  //__SCA_PYTHONJOYSTICK_H__
