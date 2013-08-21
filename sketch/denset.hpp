#ifndef DENSET_HPP
#define DENSET_HPP

#include "../config.h"

namespace skylark {
namespace sketch {

template < typename InputMatrixType,
           typename OutputMatrixType,
           template <typename> class DistributionType>
class dense_transform_t {
    // Concrete transforms, like JLT, can derive this class and set the scale.
    // This enables also adding parameters to constuctor, adding methods,
    // renaming the class.

    // Without deriving, the scale should be 1.0, so this is just a
    // random matrix with enteries from the specified distribution.
    // sets a scale variable, but can add methods.
};


} // namespace sketch
} // namespace skylark


#if SKYLARK_HAVE_ELEMENTAL
#include "denset_Elemental.hpp"
#endif

#endif // DENSET_HPP
