#include <iostream>
#include <vector>
#include <algorithm>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv) {
    // 定义两个四元数 q1 和 q2，以及一个三维向量 t1 和 t2
    Quaterniond q1(0.35, 0.2, 0.3, 0.1), q2(-0.5, 0.4, -0.1, 0.2);
    q1.normalize();  // 归一化 q1 和 q2
    q2.normalize();
    Vector3d t1(0.3, 0.1, 0.1), t2(-0.1, 0.5, 0.3);

    /** 最后的计算还是要在变换为旋转矩阵，然后再进行经典的左边乘右乘 */
    // 定义两个等距变换矩阵 T1w 和 T2w，将 q1 和 q2 转换为等距变换矩阵
    Isometry3d T1w(q1), T2w(q2);
    // 对 T1w 和 T2w 进行平移变换
    T1w.pretranslate(t1);
    T2w.pretranslate(t2);

    // 定义一个三维向量 p1，计算在 T1w 下的坐标
    Vector3d p1(0.5, 0, 0.2);

    // 计算在 T2w 下的坐标，通过将 p1 从 T1w 变换到世界坐标系，再从世界坐标系变换到 T2w 下
    Vector3d p2 = T2w * T1w.inverse() * p1;
    /**
     * 要注意的是T1w，T2w是两个独立的坐标系，他们都用世界坐标系的标准来衡量的
     * 也就说，先要得到 p1在世界坐标系的坐标，才能呢变换到T2w
     */
    cout << endl << p2.transpose() << endl;  // 输出 p2
    return 0;
}