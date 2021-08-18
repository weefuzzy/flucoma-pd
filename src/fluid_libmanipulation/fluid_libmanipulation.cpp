/*
Part of the Fluid Corpus Manipulation Project (http://www.flucoma.org/)
Copyright 2017-2019 University of Huddersfield.
Licensed under the BSD-3 License.
See license.md file in the project root for full license information.
This project has received funding from the European Research Council (ERC)
under the European Union’s Horizon 2020 research and innovation programme
(grant agreement No 725899).
*/

#include <clients/nrt/DataSetClient.hpp>
// #include <clients/nrt/DataSetQueryClient.hpp>
// #include <clients/nrt/LabelSetClient.hpp>
// #include <clients/nrt/KDTreeClient.hpp>
// #include <clients/nrt/KMeansClient.hpp>
// #include <clients/nrt/KNNClassifierClient.hpp>
// #include <clients/nrt/KNNRegressorClient.hpp>
// #include <clients/nrt/NormalizeClient.hpp>
// #include <clients/nrt/StandardizeClient.hpp>
// #include <clients/nrt/RobustScaleClient.hpp>
// #include <clients/nrt/PCAClient.hpp>
// #include <clients/nrt/MDSClient.hpp>
// #include <clients/nrt/UMAPClient.hpp>
// #include <clients/nrt/GridClient.hpp>
// #include <clients/rt/AudioTransportClient.hpp>
// #include <clients/nrt/NMFCrossClient.hpp>
// #include <clients/rt/NMFMorphClient.hpp>
// #include <clients/nrt/NNDSVDClient.hpp>
// #include <clients/nrt/MLPRegressorClient.hpp>
// #include <clients/nrt/MLPClassifierClient.hpp>
#include "FluidPDWrapper.hpp" 


extern "C" void fluid_libmanipulation_setup(void)
{
  using namespace fluid::client;
  makePDWrapper<NRTThreadedDataSetClient>("fluid.dataset~");
  // makePDWrapper<NRTThreadedDataSetQueryClient>("fluid.datasetquery~");
  // makePDWrapper<NRTThreadedLabelSetClient>("fluid.labelset~");
  // makePDWrapper<RTKDTreeClient>("fluid.kdtree~");
  // makePDWrapper<RTKMeansClient>("fluid.kmeans~");
  // makePDWrapper<RTKNNClassifierClient>("fluid.knnclassifier~");
  // makePDWrapper<RTKNNRegressorClient>("fluid.knnregressor~");
  // makePDWrapper<RTNormalizeClient>("fluid.normalize~");
  // makePDWrapper<RTStandardizeClient>("fluid.standardize~");
  // makePDWrapper<RTRobustScaleClient>("fluid.robustscale~");
  // makePDWrapper<RTPCAClient>("fluid.pca~");
  // makePDWrapper<NRTThreadedMDSClient>("fluid.mds~");
  // makePDWrapper<RTUMAPClient>("fluid.umap~");
  // makePDWrapper<NRTThreadedGridClient>("fluid.grid~");
  // makePDWrapper<RTMLPRegressorClient>("fluid.mlpregressor~");
  // makePDWrapper<RTMLPClassifierClient>("fluid.mlpclassifier~");
}
