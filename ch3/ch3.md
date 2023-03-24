给定两个3D变换矩阵 $T_{1w}$ 和 $T_{2w}$，以及一个3D向量 $\mathbf{p_1} = (0.5, 0, 0.2)$。首先，将 $\mathbf{p_1}$ 从 $T_{1w}$ 变换到世界坐标系：

$$\mathbf{p_1}{world} = T{1w}^{-1} \mathbf{p_1}$$

其中，$T_{1w}^{-1}$ 表示 $T_{1w}$ 的逆变换。

然后，将 $\mathbf{p_1}$ 从世界坐标系变换到 $T_{2w}$ 坐标系：

$$\mathbf{p_2} = T_{2w} \mathbf{p_1}{world} = T{2w} T_{1w}^{-1} \mathbf{p_1}$$



