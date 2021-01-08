/*
HLS implementation of clustering
*/
#include "cluster.h"

void cluster_hw(EcalTP Input_TPs[N_INPUT_TP], Ecal2dCluster Clusters[N_CLUSTER]){

    for(int i=0;i<N_CLUSTER;i++){
        Clusters[i].e=0;
        Clusters[i].x=0;
        Clusters[i].y=0;
    }
    
    //dummy cluster builder (pass-through)
    for(int i=0;i<N_CLUSTER && i<N_INPUT_TP;i++){
        Clusters[i].e= Input_TPs[i].tp;
    }
}
