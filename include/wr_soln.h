/************************************************************************ *
* Goma - Multiphysics finite element software                             *
* Sandia National Laboratories                                            *
*                                                                         *
* Copyright (c) 2014 Sandia Corporation.                                  *
*                                                                         *
* Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,  *
* the U.S. Government retains certain rights in this software.            *
*                                                                         *
* This software is distributed under the GNU General Public License.      *
\************************************************************************/
 

#ifndef _WR_SOLN_H
#define _WR_SOLN_H

#include "std.h"
#include "rf_io_structs.h"
#include "exo_struct.h"
#include "dpi.h"

extern void
write_solution 
       (char   [],                 /* name EXODUS II file */
	double [],		   /* Residual vector */
	double [],		   /* soln vector */
	double **,
	double [],		   /* soln vector at previous time step */
	double [],		   /* dx/dt */
        double [],                 /* dx/dt at previous time step */
	int      ,                 /* total elem vars */
	int	 ,		   /* total elem vars (additional
				      post processing */
	double [], 
	struct Results_Description *, /* post proc vars (rf_io_structs.h) */
	int	*,		   /* gindex */
	int	*,		   /* gsize */
	dbl	*,		   /* gvec */
	dbl   ***,		   /* gvec_elem */
	int	*,		   /* nprint - counter for time step number */
	dbl	 ,		   /* delta_t - time step size */
	dbl	 ,	           /* time integration parameter */
	dbl	 ,	           /* time_value */
        dbl *,			   /* x_pp - post proc vars to export */
	Exo_DB * , 		    /* ptr to mesh */
	Dpi    * );		    /* ptr to mesh */

#endif
/*******************************************************************************/
/*  END of file wr_soln.h  */
/*******************************************************************************/
