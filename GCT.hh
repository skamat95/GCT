#ifndef GCT_hh
#define GCT_hh
using namespace std;

#include <stdint.h>

//According to one Layer 2 card
const uint16_t NCaloLayer2Eta = 17; //17*2
//const uint16_t NCaloLayer2Phi = 28; //6*4 + 2 on either side
const uint16_t NCaloLayer2Phi = 28; //6*4 + 2 on either side

const uint16_t NClustersPerPhi = 3;
const uint16_t NCaloLayer1Phi = 4;



bool GCT(uint16_t peakEta_top[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t peakPhi_top[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t towerEta_top[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t towerPhi_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t ClusterET_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t peakEta_bot[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t peakPhi_bot[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t towerEta_bot[NClustersPerPhi][NCaloLayer2Phi],
	  uint16_t towerPhi_bot[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t ClusterET_bot[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outpeakEta_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outpeakPhi_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outtowerEta_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outtowerPhi_top[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outClusterET_top[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outpeakEta_bot[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outpeakPhi_bot[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outtowerEta_bot[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t outtowerPhi_bot[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outClusterET_bot[NClustersPerPhi][NCaloLayer2Phi]);


bool merge_acrossphi(uint16_t peakEta[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakPhi[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t towerEta[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t towerPhi[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t ClusterET[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakEta[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakPhi[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outtowerEta[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outtowerPhi[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outClusterET[NClustersPerPhi][NCaloLayer2Phi]);


bool merge_acrosseta(uint16_t peakEta_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakPhi_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t ClusterET_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakEta_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakPhi_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t ClusterET_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakEta_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakPhi_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outClusterET_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakEta_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakPhi_b[NClustersPerPhi][NCaloLayer2Phi],
                     uint16_t outClusterET_b[NClustersPerPhi][NCaloLayer2Phi]);



bool mergeClusters(uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
                   uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
                   uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
                   uint16_t *eta2, uint16_t *phi2, uint16_t *cet2);


bool mergeClusters1(uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
                   uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
                   uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
                   uint16_t *eta2, uint16_t *phi2, uint16_t *cet2);






#endif
