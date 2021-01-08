#ifndef CLUSTER_H
#define CLUSTER_H

#include <iostream>
#include <cmath>
#include "ap_int.h"
#include "ap_fixed.h"

#include "data.h"


void cluster_hw(EcalTP Input_TPs[N_INPUT_TP], Ecal2dCluster Clusters[N_CLUSTER]);
void cluster_ref(EcalTP Input_TPs[N_INPUT_TP], Ecal2dCluster Clusters[N_CLUSTER]);


#endif
