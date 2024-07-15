/*------------------------------------------------------------------------------------------------*/
/*  DFTB+: general package for performing fast atomistic simulations                              */
/*  Copyright (C) 2006 - 2024  DFTB+ developers group                                             */
/*                                                                                                */
/*  See the LICENSE file for terms of usage and distribution.                                     */
/*------------------------------------------------------------------------------------------------*/
#ifndef __DFTBPLUS_PLUGIN_H__
#define __DFTBPLUS_PLUGIN_H__

#ifdef __cplusplus
extern "C" {
#endif

int init();
void final();

int getSKIntegrals(int, int, double*, double, int, int, int, int, int, double);

void setNeighbourList(int, int, double*, int*, int*, double*);

#ifdef __cplusplus
}
#endif

#endif
