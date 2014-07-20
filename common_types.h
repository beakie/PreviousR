#ifndef COMMONMATRIX4F_H
#define COMMONMATRIX4F_H

#include "common-matrix2.h"
#include "common-matrix3.h"
#include "common-matrix4.h"
#include "common-vector2.h"
#include "common-vector3.h"

namespace Common
{

typedef Common::Matrix2<char> Matrix2c;
typedef Common::Matrix2<int> Matrix2i;
typedef Common::Matrix2<float> Matrix2f;

typedef Common::Matrix3<char> Matrix3c;
typedef Common::Matrix3<int> Matrix3i;
typedef Common::Matrix3<float> Matrix3f;

typedef Common::Matrix4<char> Matrix4c;
typedef Common::Matrix4<int> Matrix4i;
typedef Common::Matrix4<float> Matrix4f;

typedef Common::Vector2<char> Vector2c;
typedef Common::Vector2<int> Vector2i;
typedef Common::Vector2<float> Vector2f;

typedef Common::Vector3<char> Vector3c;
typedef Common::Vector3<int> Vector3i;
typedef Common::Vector3<float> Vector3f;

}

#endif // COMMONMATRIX4F_H
