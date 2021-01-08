#include "cluster_test.h"

#define NTEST 5

int main(){

    for (int test = 0; test < NTEST; test++) {

        EcalTP Input_TPs[N_INPUT_TP];
        Ecal2dCluster Clusters_hw [N_CLUSTER];
        Ecal2dCluster Clusters_ref[N_CLUSTER];

        cluster_ref(Input_TPs, Clusters_ref);
        cluster_hw(Input_TPs,  Clusters_hw);
        
        // inA = 1;
        // inB = 2;
        // outA = 0;

        // simple_algo_ref(inA, inB, outA);
        // simple_algo_hw(inA, inB, outA);

        // printf( "test = %i %i %i \n", int(inA), int(inB), int(outA) );

    }


}
