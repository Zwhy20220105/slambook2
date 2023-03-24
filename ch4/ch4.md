

## 1.什么是点乘
点乘是一种向量运算，它的结果是一个标量。如果 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 是两个向量，那么它们的点积 $\boldsymbol{a} \cdot \boldsymbol{b}$ 等于 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 的模长之积与它们夹角的余弦值的乘积。即： $$ \boldsymbol{a} \cdot \boldsymbol{b} = |\boldsymbol{a}||\boldsymbol{b}|\cos{\theta} $$ 其中 $\theta$ 是 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 的夹角。

点乘有以下性质：

1. 交换律：$\boldsymbol{a} \cdot \boldsymbol{b} = \boldsymbol{b} \cdot \boldsymbol{a}$。
2. 分配律：$\boldsymbol{a} \cdot (\boldsymbol{b} + \boldsymbol{c}) = \boldsymbol{a} \cdot \boldsymbol{b} + \boldsymbol{a} \cdot \boldsymbol{c}$。
3. 零向量的点积为零：$\boldsymbol{0} \cdot \boldsymbol{a} = 0$。

## 2.什么是叉乘

叉乘是一种向量运算，它的结果是一个新的向量。如果 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 是两个三维向量，那么它们的叉积 $\boldsymbol{a} \times \boldsymbol{b}$ 是一个**垂直于 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 所在平面的向量**，其**长度等于 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 构成的平行四边形的面积**。

设 $\boldsymbol{a} = (a_1, a_2, a_3)$，$\boldsymbol{b} = (b_1, b_2, b_3)$，则它们的叉积可以表示为： $$ \boldsymbol{a} \times \boldsymbol{b} = \begin{vmatrix} \boldsymbol{i} & \boldsymbol{j} & \boldsymbol{k} \\ a_1 & a_2 & a_3 \\ b_1 & b_2 & b_3 \end{vmatrix} = (a_2b_3 - a_3b_2)\boldsymbol{i} + (a_3b_1 - a_1b_3)\boldsymbol{j} + (a_1b_2 - a_2b_1)\boldsymbol{k} $$ 其中 $\boldsymbol{i}$、$\boldsymbol{j}$ 和 $\boldsymbol{k}$ 分别是 $x$、$y$ 和 $z$ 轴上的单位向量。

叉乘有以下性质：

1. 反交换性：$\boldsymbol{a} \times \boldsymbol{b} = -\boldsymbol{b} \times \boldsymbol{a}$。  
2. 分配律：$\boldsymbol{a} \times (\boldsymbol{b} + \boldsymbol{c}) = \boldsymbol{a} \times \boldsymbol{b} + \boldsymbol{a} \times \boldsymbol{c}$。  
3. 结合律：$\boldsymbol{a} \times (\boldsymbol{b} \times \boldsymbol{c}) = (\boldsymbol{a} \cdot \boldsymbol{c})\boldsymbol{b} - (\boldsymbol{a} \cdot \boldsymbol{b})\boldsymbol{c}$。  
4. 零向量的叉积为零向量：$\boldsymbol{0} \times \boldsymbol{a} = \boldsymbol{0}$。  
5. 两个平行向量的叉积为零向量：如果 $\boldsymbol{a}$ 和 $\boldsymbol{b}$ 平行，那么 $\boldsymbol{a} \times \boldsymbol{b} = 0$。



## 3. 什么是反对称矩阵
反对称矩阵是指满足$A^T=-A$的方阵，其中$A^T$是$A$的转置。反对称矩阵有以下性质：
1. 反对称矩阵的主对角线上的元素全为零，而位于主对角线两侧对称的元素反号。
2. 反对称矩阵的行列式的绝对值为1或0，即$|A|=\pm 1$或$|A|=0$。
3. 反对称矩阵的逆矩阵等于它的负转置，即$A^{-1}=-A^T$。
4. 反对称矩阵的行向量和列向量都是正交向量组，即满足$v_i\cdot v_j=0$（当$i\neq j$时）。
5. 反对称矩阵可以表示空间中的旋转或反射变换。
6. 反对称矩阵的特征值都是0或纯虚数，并且对应于纯虚数的特征向量的实部和虚部形成的实向量等长且互相正交。


**注意**:反对称矩阵可以找到**唯一与之对应**的向量,而且反之则反之.  

## 4.什么是正交矩阵
正交矩阵是指满足$A^TA=I$的方阵，其中$A^T$是$A$的转置，$I$是单位矩阵。正交矩阵有以下性质：
1. 正交矩阵的行列式的绝对值为1，即$|A|=\pm 1$。
2. 正交矩阵的逆矩阵等于它的转置，即$A^{-1}=A^T$。
3. 正交矩阵的行向量和列向量都是单位正交向量组，即满足$\|v_i\|=1$和$v_i\cdot v_j=0$（当$i\neq j$时）。
4. 正交矩阵可以表示空间中的旋转或反射变换。
5. 正交矩阵的特征值都是模为1的复数，即满足$|\lambda|=1$。

## 5.李群与李代数
李群是一种数学对象，它既是一个群，也是一个光滑可微流形，且其群运算是光滑的。这意味着李群可以使用微积分进行研究。与任何具有连续对称性群的系统相关联的都是一个李群。

李代数是与李群相关的一种代数结构。它是一个向量空间，配以一个称为李括号的运算，这个运算是一个交替双线性映射，满足雅可比恒等式。李括号的两个向量和用符号表示。向量空间和这个运算一起构成了一个非结合代数，这意味着李括号不一定满足结合律。李代数与李群密切相关：任何李群都会产生一个李代数，即其在单位元处的切空间。反之，对于任何一个有限维实数或复数域上的李代数，都有一个相应的连通李群，它在有限覆盖下是唯一的（李氏第三定理）。这种对应关系使人们能够通过研究李代数来研究李群的结构和分类。
