#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "types/point2d.h"
#include "types/vector2d.h"

namespace fgal {
namespace operations {
    float points_distance(types::Point2D, types::Point2D);
    types::Vector2D vectors_sum(types::Vector2D, types::Vector2D);
    types::Vector2D internal_produtic(types::Vector2D, types::Vector2D);
    float scalar_product(types::Vector2D v1, types::Vector2D v2);
    types::Vector2D vector_scale(types::Vector2D, int);
}
}

#endif