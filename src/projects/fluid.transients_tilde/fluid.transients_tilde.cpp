#include <clients/rt/TransientClient.hpp>
#include <FluidPDWrapper.hpp>

void ext_main(void*)
{
  using namespace fluid::client;
  makePDWrapper<TransientClient>("fluid.transients~");
}
