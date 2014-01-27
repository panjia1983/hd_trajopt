
#include <Eigen/Core>
#include <stdexcept>
using namespace Eigen;

//print str(map(lambda x: x.tolist(),get_sphere_points(2))).replace("[","{").replace("]","}")
namespace
{
const float points0[12][3] = {{0.0, -0.5257311121191336, -0.85065080835204}, {0.0, 0.5257311121191336, -0.85065080835204}, { -0.85065080835204, 0.0, -0.5257311121191336}, {0.85065080835204, 0.0, -0.5257311121191336}, { -0.5257311121191336, -0.85065080835204, 0.0}, {0.5257311121191336, -0.85065080835204, 0.0}, { -0.5257311121191336, 0.85065080835204, 0.0}, {0.5257311121191336, 0.85065080835204, 0.0}, { -0.85065080835204, 0.0, 0.5257311121191336}, {0.85065080835204, 0.0, 0.5257311121191336}, {0.0, -0.5257311121191336, 0.85065080835204}, {0.0, 0.5257311121191336, 0.85065080835204}};
const float points1[42][3] = {{0.0, -0.5257311121191336, -0.85065080835204}, {0.0, 0.0, -1.0}, {0.0, 0.5257311121191336, -0.85065080835204}, { -0.5, -0.3090169943749474, -0.8090169943749475}, {0.5, -0.3090169943749474, -0.8090169943749475}, { -0.5, 0.3090169943749474, -0.8090169943749475}, {0.5, 0.3090169943749474, -0.8090169943749475}, { -0.85065080835204, 0.0, -0.5257311121191336}, {0.85065080835204, 0.0, -0.5257311121191336}, { -0.3090169943749474, -0.8090169943749475, -0.5}, {0.3090169943749474, -0.8090169943749475, -0.5}, { -0.3090169943749474, 0.8090169943749475, -0.5}, {0.3090169943749474, 0.8090169943749475, -0.5}, { -0.8090169943749475, -0.5, -0.3090169943749474}, {0.8090169943749475, -0.5, -0.3090169943749474}, { -0.8090169943749475, 0.5, -0.3090169943749474}, {0.8090169943749475, 0.5, -0.3090169943749474}, { -0.5257311121191336, -0.85065080835204, 0.0}, {0.0, -1.0, 0.0}, {0.5257311121191336, -0.85065080835204, 0.0}, { -1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, { -0.5257311121191336, 0.85065080835204, 0.0}, {0.0, 1.0, 0.0}, {0.5257311121191336, 0.85065080835204, 0.0}, { -0.8090169943749475, -0.5, 0.3090169943749474}, {0.8090169943749475, -0.5, 0.3090169943749474}, { -0.8090169943749475, 0.5, 0.3090169943749474}, {0.8090169943749475, 0.5, 0.3090169943749474}, { -0.3090169943749474, -0.8090169943749475, 0.5}, {0.3090169943749474, -0.8090169943749475, 0.5}, { -0.3090169943749474, 0.8090169943749475, 0.5}, {0.3090169943749474, 0.8090169943749475, 0.5}, { -0.85065080835204, 0.0, 0.5257311121191336}, {0.85065080835204, 0.0, 0.5257311121191336}, { -0.5, -0.3090169943749474, 0.8090169943749475}, {0.5, -0.3090169943749474, 0.8090169943749475}, { -0.5, 0.3090169943749474, 0.8090169943749475}, {0.5, 0.3090169943749474, 0.8090169943749475}, {0.0, -0.5257311121191336, 0.85065080835204}, {0.0, 0.0, 1.0}, {0.0, 0.5257311121191336, 0.85065080835204}};
}

typedef Matrix<float, Dynamic, Dynamic, RowMajor> RowMat;

MatrixXf getSpherePoints(int n)
{
  if(n == 0) return Map<const RowMat>((const float*)&points0[0], 12, 3);
  else if(n == 1) return Map<const RowMat>((const float*)&points1[0], 42, 3);
  else throw std::runtime_error("only n <= 1 implemented");
}