/*
Copyright (C) 2016  The AlterPCB team
Contact: Maarten Baert <maarten-baert@hotmail.com>

This file is part of AlterPCB.

AlterPCB is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

AlterPCB is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this AlterPCB.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "FemMatrix.h"

#include "MiscMath.h"

// The following code was generated by the 'fem-matrix-generator.py' Python script in the 'misc' directory.

void FemMatrix_EMPot_Rect(SparseMatrixC<complex_t> matrix[3], size_t vars[12], real_t delta_x, real_t delta_y,
		complex_t permittivity_x, complex_t permittivity_y, complex_t permittivity_z,
		complex_t permeability_ref, real_t omega) {
	constexpr complex_t I(0.0, 1.0);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[0], vars[0], (1.0/3.0)*delta_x*permittivity_y/delta_y + (1.0/3.0)*delta_y*permittivity_x/delta_x);
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[0], vars[1], (1.0/6.0)*delta_x*permittivity_y/delta_y - 1.0/3.0*delta_y*permittivity_x/delta_x);
	if(vars[0] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[0], vars[2], -1.0/3.0*delta_x*permittivity_y/delta_y + (1.0/6.0)*delta_y*permittivity_x/delta_x);
	if(vars[0] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[0], vars[3], -1.0/6.0*delta_x*permittivity_y/delta_y - 1.0/6.0*delta_y*permittivity_x/delta_x);
	if(vars[0] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[0], vars[8], -1.0/3.0*I*delta_y*omega*permittivity_x);
	if(vars[0] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[0], vars[9], -1.0/6.0*I*delta_y*omega*permittivity_x);
	if(vars[0] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[0], vars[10], -1.0/3.0*I*delta_x*omega*permittivity_y);
	if(vars[0] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[0], vars[11], -1.0/6.0*I*delta_x*omega*permittivity_y);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[1], vars[0], (1.0/6.0)*delta_x*permittivity_y/delta_y - 1.0/3.0*delta_y*permittivity_x/delta_x);
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[1], vars[1], (1.0/3.0)*delta_x*permittivity_y/delta_y + (1.0/3.0)*delta_y*permittivity_x/delta_x);
	if(vars[1] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[1], vars[2], -1.0/6.0*delta_x*permittivity_y/delta_y - 1.0/6.0*delta_y*permittivity_x/delta_x);
	if(vars[1] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[1], vars[3], -1.0/3.0*delta_x*permittivity_y/delta_y + (1.0/6.0)*delta_y*permittivity_x/delta_x);
	if(vars[1] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[1], vars[8], (1.0/3.0)*I*delta_y*omega*permittivity_x);
	if(vars[1] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[1], vars[9], (1.0/6.0)*I*delta_y*omega*permittivity_x);
	if(vars[1] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[1], vars[10], -1.0/6.0*I*delta_x*omega*permittivity_y);
	if(vars[1] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[1], vars[11], -1.0/3.0*I*delta_x*omega*permittivity_y);
	if(vars[2] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[2], vars[0], -1.0/3.0*delta_x*permittivity_y/delta_y + (1.0/6.0)*delta_y*permittivity_x/delta_x);
	if(vars[2] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[2], vars[1], -1.0/6.0*delta_x*permittivity_y/delta_y - 1.0/6.0*delta_y*permittivity_x/delta_x);
	if(vars[2] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[2], vars[2], (1.0/3.0)*delta_x*permittivity_y/delta_y + (1.0/3.0)*delta_y*permittivity_x/delta_x);
	if(vars[2] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[2], vars[3], (1.0/6.0)*delta_x*permittivity_y/delta_y - 1.0/3.0*delta_y*permittivity_x/delta_x);
	if(vars[2] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[2], vars[8], -1.0/6.0*I*delta_y*omega*permittivity_x);
	if(vars[2] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[2], vars[9], -1.0/3.0*I*delta_y*omega*permittivity_x);
	if(vars[2] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[2], vars[10], (1.0/3.0)*I*delta_x*omega*permittivity_y);
	if(vars[2] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[2], vars[11], (1.0/6.0)*I*delta_x*omega*permittivity_y);
	if(vars[3] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[3], vars[0], -1.0/6.0*delta_x*permittivity_y/delta_y - 1.0/6.0*delta_y*permittivity_x/delta_x);
	if(vars[3] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[3], vars[1], -1.0/3.0*delta_x*permittivity_y/delta_y + (1.0/6.0)*delta_y*permittivity_x/delta_x);
	if(vars[3] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[3], vars[2], (1.0/6.0)*delta_x*permittivity_y/delta_y - 1.0/3.0*delta_y*permittivity_x/delta_x);
	if(vars[3] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[3], vars[3], (1.0/3.0)*delta_x*permittivity_y/delta_y + (1.0/3.0)*delta_y*permittivity_x/delta_x);
	if(vars[3] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[3], vars[8], (1.0/6.0)*I*delta_y*omega*permittivity_x);
	if(vars[3] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[3], vars[9], (1.0/3.0)*I*delta_y*omega*permittivity_x);
	if(vars[3] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[3], vars[10], (1.0/6.0)*I*delta_x*omega*permittivity_y);
	if(vars[3] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[3], vars[11], (1.0/3.0)*I*delta_x*omega*permittivity_y);
	if(vars[4] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[4], vars[4], -1.0/9.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/3.0)*delta_x/(delta_y*permeability_ref) + (1.0/3.0)*delta_y/(delta_x*permeability_ref));
	if(vars[4] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[0].Insert(vars[4], vars[5], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/6.0)*delta_x/(delta_y*permeability_ref) - 1.0/3.0*delta_y/(delta_x*permeability_ref));
	if(vars[4] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[0].Insert(vars[4], vars[6], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/3.0*delta_x/(delta_y*permeability_ref) + (1.0/6.0)*delta_y/(delta_x*permeability_ref));
	if(vars[4] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[0].Insert(vars[4], vars[7], -1.0/36.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/6.0*delta_x/(delta_y*permeability_ref) - 1.0/6.0*delta_y/(delta_x*permeability_ref));
	if(vars[5] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[5], vars[4], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/6.0)*delta_x/(delta_y*permeability_ref) - 1.0/3.0*delta_y/(delta_x*permeability_ref));
	if(vars[5] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[0].Insert(vars[5], vars[5], -1.0/9.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/3.0)*delta_x/(delta_y*permeability_ref) + (1.0/3.0)*delta_y/(delta_x*permeability_ref));
	if(vars[5] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[0].Insert(vars[5], vars[6], -1.0/36.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/6.0*delta_x/(delta_y*permeability_ref) - 1.0/6.0*delta_y/(delta_x*permeability_ref));
	if(vars[5] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[0].Insert(vars[5], vars[7], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/3.0*delta_x/(delta_y*permeability_ref) + (1.0/6.0)*delta_y/(delta_x*permeability_ref));
	if(vars[6] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[6], vars[4], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/3.0*delta_x/(delta_y*permeability_ref) + (1.0/6.0)*delta_y/(delta_x*permeability_ref));
	if(vars[6] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[0].Insert(vars[6], vars[5], -1.0/36.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/6.0*delta_x/(delta_y*permeability_ref) - 1.0/6.0*delta_y/(delta_x*permeability_ref));
	if(vars[6] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[0].Insert(vars[6], vars[6], -1.0/9.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/3.0)*delta_x/(delta_y*permeability_ref) + (1.0/3.0)*delta_y/(delta_x*permeability_ref));
	if(vars[6] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[0].Insert(vars[6], vars[7], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/6.0)*delta_x/(delta_y*permeability_ref) - 1.0/3.0*delta_y/(delta_x*permeability_ref));
	if(vars[7] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[7], vars[4], -1.0/36.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/6.0*delta_x/(delta_y*permeability_ref) - 1.0/6.0*delta_y/(delta_x*permeability_ref));
	if(vars[7] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[0].Insert(vars[7], vars[5], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z - 1.0/3.0*delta_x/(delta_y*permeability_ref) + (1.0/6.0)*delta_y/(delta_x*permeability_ref));
	if(vars[7] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[0].Insert(vars[7], vars[6], -1.0/18.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/6.0)*delta_x/(delta_y*permeability_ref) - 1.0/3.0*delta_y/(delta_x*permeability_ref));
	if(vars[7] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[0].Insert(vars[7], vars[7], -1.0/9.0*delta_x*delta_y*square(omega)*permittivity_z + (1.0/3.0)*delta_x/(delta_y*permeability_ref) + (1.0/3.0)*delta_y/(delta_x*permeability_ref));
	if(vars[8] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[8], vars[0], -1.0/3.0*I*delta_y*omega*permittivity_x);
	if(vars[8] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[8], vars[1], (1.0/3.0)*I*delta_y*omega*permittivity_x);
	if(vars[8] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[8], vars[2], -1.0/6.0*I*delta_y*omega*permittivity_x);
	if(vars[8] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[8], vars[3], (1.0/6.0)*I*delta_y*omega*permittivity_x);
	if(vars[8] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[8], vars[8], -1.0/3.0*delta_x*delta_y*square(omega)*permittivity_x + delta_x/(delta_y*permeability_ref));
	if(vars[8] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[8], vars[9], -1.0/6.0*delta_x*delta_y*square(omega)*permittivity_x - delta_x/(delta_y*permeability_ref));
	if(vars[8] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[8], vars[10], -1.0/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[8], vars[11], 1.0/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[9], vars[0], -1.0/6.0*I*delta_y*omega*permittivity_x);
	if(vars[9] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[9], vars[1], (1.0/6.0)*I*delta_y*omega*permittivity_x);
	if(vars[9] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[9], vars[2], -1.0/3.0*I*delta_y*omega*permittivity_x);
	if(vars[9] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[9], vars[3], (1.0/3.0)*I*delta_y*omega*permittivity_x);
	if(vars[9] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[9], vars[8], -1.0/6.0*delta_x*delta_y*square(omega)*permittivity_x - delta_x/(delta_y*permeability_ref));
	if(vars[9] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[9], vars[9], -1.0/3.0*delta_x*delta_y*square(omega)*permittivity_x + delta_x/(delta_y*permeability_ref));
	if(vars[9] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[9], vars[10], 1.0/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[9], vars[11], -1.0/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[10], vars[0], -1.0/3.0*I*delta_x*omega*permittivity_y);
	if(vars[10] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[10], vars[1], -1.0/6.0*I*delta_x*omega*permittivity_y);
	if(vars[10] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[10], vars[2], (1.0/3.0)*I*delta_x*omega*permittivity_y);
	if(vars[10] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[10], vars[3], (1.0/6.0)*I*delta_x*omega*permittivity_y);
	if(vars[10] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[10], vars[8], -1.0/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[10], vars[9], 1.0/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[10], vars[10], -1.0/3.0*delta_x*delta_y*square(omega)*permittivity_y + delta_y/(delta_x*permeability_ref));
	if(vars[10] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[10], vars[11], -1.0/6.0*delta_x*delta_y*square(omega)*permittivity_y - delta_y/(delta_x*permeability_ref));
	if(vars[11] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[11], vars[0], -1.0/6.0*I*delta_x*omega*permittivity_y);
	if(vars[11] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[11], vars[1], -1.0/3.0*I*delta_x*omega*permittivity_y);
	if(vars[11] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[11], vars[2], (1.0/6.0)*I*delta_x*omega*permittivity_y);
	if(vars[11] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[11], vars[3], (1.0/3.0)*I*delta_x*omega*permittivity_y);
	if(vars[11] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[0].Insert(vars[11], vars[8], 1.0/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[0].Insert(vars[11], vars[9], -1.0/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[0].Insert(vars[11], vars[10], -1.0/6.0*delta_x*delta_y*square(omega)*permittivity_y - delta_y/(delta_x*permeability_ref));
	if(vars[11] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[0].Insert(vars[11], vars[11], -1.0/3.0*delta_x*delta_y*square(omega)*permittivity_y + delta_y/(delta_x*permeability_ref));
	if(vars[0] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[0], vars[4], (1.0/9.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[0], vars[5], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[0], vars[6], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[0], vars[7], (1.0/36.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[1], vars[4], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[1], vars[5], (1.0/9.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[1], vars[6], (1.0/36.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[1], vars[7], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[2], vars[4], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[2], vars[5], (1.0/36.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[2], vars[6], (1.0/9.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[2], vars[7], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[3], vars[4], (1.0/36.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[3], vars[5], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[3], vars[6], (1.0/18.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[3], vars[7], (1.0/9.0)*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[4] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[4], vars[0], -1.0/9.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[4] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[4], vars[1], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[4] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[4], vars[2], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[4] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[4], vars[3], -1.0/36.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[4] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[1].Insert(vars[4], vars[8], -1.0/3.0*delta_y/permeability_ref);
	if(vars[4] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[1].Insert(vars[4], vars[9], -1.0/6.0*delta_y/permeability_ref);
	if(vars[4] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[1].Insert(vars[4], vars[10], -1.0/3.0*delta_x/permeability_ref);
	if(vars[4] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[1].Insert(vars[4], vars[11], -1.0/6.0*delta_x/permeability_ref);
	if(vars[5] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[5], vars[0], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[5] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[5], vars[1], -1.0/9.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[5] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[5], vars[2], -1.0/36.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[5] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[5], vars[3], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[5] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[1].Insert(vars[5], vars[8], (1.0/3.0)*delta_y/permeability_ref);
	if(vars[5] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[1].Insert(vars[5], vars[9], (1.0/6.0)*delta_y/permeability_ref);
	if(vars[5] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[1].Insert(vars[5], vars[10], -1.0/6.0*delta_x/permeability_ref);
	if(vars[5] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[1].Insert(vars[5], vars[11], -1.0/3.0*delta_x/permeability_ref);
	if(vars[6] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[6], vars[0], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[6] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[6], vars[1], -1.0/36.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[6] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[6], vars[2], -1.0/9.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[6] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[6], vars[3], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[6] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[1].Insert(vars[6], vars[8], -1.0/6.0*delta_y/permeability_ref);
	if(vars[6] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[1].Insert(vars[6], vars[9], -1.0/3.0*delta_y/permeability_ref);
	if(vars[6] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[1].Insert(vars[6], vars[10], (1.0/3.0)*delta_x/permeability_ref);
	if(vars[6] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[1].Insert(vars[6], vars[11], (1.0/6.0)*delta_x/permeability_ref);
	if(vars[7] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[7], vars[0], -1.0/36.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[7] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[7], vars[1], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[7] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[7], vars[2], -1.0/18.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[7] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[7], vars[3], -1.0/9.0*I*delta_x*delta_y*omega*permittivity_z);
	if(vars[7] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[1].Insert(vars[7], vars[8], (1.0/6.0)*delta_y/permeability_ref);
	if(vars[7] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[1].Insert(vars[7], vars[9], (1.0/3.0)*delta_y/permeability_ref);
	if(vars[7] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[1].Insert(vars[7], vars[10], (1.0/6.0)*delta_x/permeability_ref);
	if(vars[7] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[1].Insert(vars[7], vars[11], (1.0/3.0)*delta_x/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[8], vars[4], (1.0/3.0)*delta_y/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[8], vars[5], -1.0/3.0*delta_y/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[8], vars[6], (1.0/6.0)*delta_y/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[8], vars[7], -1.0/6.0*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[9], vars[4], (1.0/6.0)*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[9], vars[5], -1.0/6.0*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[9], vars[6], (1.0/3.0)*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[9], vars[7], -1.0/3.0*delta_y/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[10], vars[4], (1.0/3.0)*delta_x/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[10], vars[5], (1.0/6.0)*delta_x/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[10], vars[6], -1.0/3.0*delta_x/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[10], vars[7], -1.0/6.0*delta_x/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[1].Insert(vars[11], vars[4], (1.0/6.0)*delta_x/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[5] != INDEX_NONE) matrix[1].Insert(vars[11], vars[5], (1.0/3.0)*delta_x/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[6] != INDEX_NONE) matrix[1].Insert(vars[11], vars[6], -1.0/6.0*delta_x/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[7] != INDEX_NONE) matrix[1].Insert(vars[11], vars[7], -1.0/3.0*delta_x/permeability_ref);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[0], vars[0], -1.0/9.0*delta_x*delta_y*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[0], vars[1], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[2].Insert(vars[0], vars[2], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[0] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[2].Insert(vars[0], vars[3], -1.0/36.0*delta_x*delta_y*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[1], vars[0], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[1], vars[1], -1.0/9.0*delta_x*delta_y*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[2].Insert(vars[1], vars[2], -1.0/36.0*delta_x*delta_y*permittivity_z);
	if(vars[1] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[2].Insert(vars[1], vars[3], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[2], vars[0], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[2], vars[1], -1.0/36.0*delta_x*delta_y*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[2].Insert(vars[2], vars[2], -1.0/9.0*delta_x*delta_y*permittivity_z);
	if(vars[2] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[2].Insert(vars[2], vars[3], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[3], vars[0], -1.0/36.0*delta_x*delta_y*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[3], vars[1], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[2].Insert(vars[3], vars[2], -1.0/18.0*delta_x*delta_y*permittivity_z);
	if(vars[3] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[2].Insert(vars[3], vars[3], -1.0/9.0*delta_x*delta_y*permittivity_z);
	if(vars[8] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[2].Insert(vars[8], vars[8], -1.0/3.0*delta_x*delta_y/permeability_ref);
	if(vars[8] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[2].Insert(vars[8], vars[9], -1.0/6.0*delta_x*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[8] != INDEX_NONE) matrix[2].Insert(vars[9], vars[8], -1.0/6.0*delta_x*delta_y/permeability_ref);
	if(vars[9] != INDEX_NONE && vars[9] != INDEX_NONE) matrix[2].Insert(vars[9], vars[9], -1.0/3.0*delta_x*delta_y/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[2].Insert(vars[10], vars[10], -1.0/3.0*delta_x*delta_y/permeability_ref);
	if(vars[10] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[2].Insert(vars[10], vars[11], -1.0/6.0*delta_x*delta_y/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[10] != INDEX_NONE) matrix[2].Insert(vars[11], vars[10], -1.0/6.0*delta_x*delta_y/permeability_ref);
	if(vars[11] != INDEX_NONE && vars[11] != INDEX_NONE) matrix[2].Insert(vars[11], vars[11], -1.0/3.0*delta_x*delta_y/permeability_ref);
}

void FemMatrix_EMPot_XLine(SparseMatrixC<complex_t> matrix[3], size_t vars[5], real_t delta_x,
		real_t conductivity_x, real_t conductivity_z, real_t omega) {
	constexpr complex_t I(0.0, 1.0);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[0], vars[0], -I*conductivity_x/(delta_x*omega));
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[0], vars[1], I*conductivity_x/(delta_x*omega));
	if(vars[0] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[0], vars[4], -conductivity_x);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[1], vars[0], I*conductivity_x/(delta_x*omega));
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[1], vars[1], -I*conductivity_x/(delta_x*omega));
	if(vars[1] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[1], vars[4], conductivity_x);
	if(vars[2] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[2], vars[2], (1.0/3.0)*I*conductivity_z*delta_x*omega);
	if(vars[2] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[2], vars[3], (1.0/6.0)*I*conductivity_z*delta_x*omega);
	if(vars[3] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[3], vars[2], (1.0/6.0)*I*conductivity_z*delta_x*omega);
	if(vars[3] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[3], vars[3], (1.0/3.0)*I*conductivity_z*delta_x*omega);
	if(vars[4] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[4], vars[0], -conductivity_x);
	if(vars[4] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[4], vars[1], conductivity_x);
	if(vars[4] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[4], vars[4], I*conductivity_x*delta_x*omega);
	if(vars[0] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[0], vars[2], (1.0/3.0)*conductivity_z*delta_x);
	if(vars[0] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[0], vars[3], (1.0/6.0)*conductivity_z*delta_x);
	if(vars[1] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[1], vars[2], (1.0/6.0)*conductivity_z*delta_x);
	if(vars[1] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[1], vars[3], (1.0/3.0)*conductivity_z*delta_x);
	if(vars[2] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[2], vars[0], -1.0/3.0*conductivity_z*delta_x);
	if(vars[2] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[2], vars[1], -1.0/6.0*conductivity_z*delta_x);
	if(vars[3] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[3], vars[0], -1.0/6.0*conductivity_z*delta_x);
	if(vars[3] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[3], vars[1], -1.0/3.0*conductivity_z*delta_x);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[0], vars[0], (1.0/3.0)*I*conductivity_z*delta_x/omega);
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[0], vars[1], (1.0/6.0)*I*conductivity_z*delta_x/omega);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[1], vars[0], (1.0/6.0)*I*conductivity_z*delta_x/omega);
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[1], vars[1], (1.0/3.0)*I*conductivity_z*delta_x/omega);
}

void FemMatrix_EMPot_YLine(SparseMatrixC<complex_t> matrix[3], size_t vars[5], real_t delta_y,
		real_t conductivity_y, real_t conductivity_z, real_t omega) {
	constexpr complex_t I(0.0, 1.0);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[0], vars[0], -I*conductivity_y/(delta_y*omega));
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[0], vars[1], I*conductivity_y/(delta_y*omega));
	if(vars[0] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[0], vars[4], -conductivity_y);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[1], vars[0], I*conductivity_y/(delta_y*omega));
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[1], vars[1], -I*conductivity_y/(delta_y*omega));
	if(vars[1] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[1], vars[4], conductivity_y);
	if(vars[2] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[2], vars[2], (1.0/3.0)*I*conductivity_z*delta_y*omega);
	if(vars[2] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[2], vars[3], (1.0/6.0)*I*conductivity_z*delta_y*omega);
	if(vars[3] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[0].Insert(vars[3], vars[2], (1.0/6.0)*I*conductivity_z*delta_y*omega);
	if(vars[3] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[0].Insert(vars[3], vars[3], (1.0/3.0)*I*conductivity_z*delta_y*omega);
	if(vars[4] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[0].Insert(vars[4], vars[0], -conductivity_y);
	if(vars[4] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[0].Insert(vars[4], vars[1], conductivity_y);
	if(vars[4] != INDEX_NONE && vars[4] != INDEX_NONE) matrix[0].Insert(vars[4], vars[4], I*conductivity_y*delta_y*omega);
	if(vars[0] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[0], vars[2], (1.0/3.0)*conductivity_z*delta_y);
	if(vars[0] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[0], vars[3], (1.0/6.0)*conductivity_z*delta_y);
	if(vars[1] != INDEX_NONE && vars[2] != INDEX_NONE) matrix[1].Insert(vars[1], vars[2], (1.0/6.0)*conductivity_z*delta_y);
	if(vars[1] != INDEX_NONE && vars[3] != INDEX_NONE) matrix[1].Insert(vars[1], vars[3], (1.0/3.0)*conductivity_z*delta_y);
	if(vars[2] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[2], vars[0], -1.0/3.0*conductivity_z*delta_y);
	if(vars[2] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[2], vars[1], -1.0/6.0*conductivity_z*delta_y);
	if(vars[3] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[1].Insert(vars[3], vars[0], -1.0/6.0*conductivity_z*delta_y);
	if(vars[3] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[1].Insert(vars[3], vars[1], -1.0/3.0*conductivity_z*delta_y);
	if(vars[0] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[0], vars[0], (1.0/3.0)*I*conductivity_z*delta_y/omega);
	if(vars[0] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[0], vars[1], (1.0/6.0)*I*conductivity_z*delta_y/omega);
	if(vars[1] != INDEX_NONE && vars[0] != INDEX_NONE) matrix[2].Insert(vars[1], vars[0], (1.0/6.0)*I*conductivity_z*delta_y/omega);
	if(vars[1] != INDEX_NONE && vars[1] != INDEX_NONE) matrix[2].Insert(vars[1], vars[1], (1.0/3.0)*I*conductivity_z*delta_y/omega);
}
