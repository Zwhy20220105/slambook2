视觉slam十四讲中的公式推导(借助chatgpt)

# 第四章
# 李代数的引出(4.6 )
首先，我们对原式两边同时取转置,然后利用矩阵转置的性质 $(AB)^{\mathrm{T}} = B^{\mathrm{T}} A^{\mathrm{T}}$.然后，我们利用矩阵转置的性质 $(A^{\mathrm{T}})^{\mathrm{T}}=A$，将上式中的第一项变为 $\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}$.具体的推导过程如下:

$$ \begin{aligned} \dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}+\boldsymbol{R}(t) \dot{\boldsymbol{R}}(t)^{\mathrm{T}} &=0 \\ \left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t){\mathrm{T}}\right){\mathrm{T}}+\left(\boldsymbol{R}(t) \dot{\boldsymbol{R}}(t){\mathrm{T}}\right){\mathrm{T}} &=0 \\ \boldsymbol{R}(t)^{\mathrm{T}} \dot{\boldsymbol{R}}(t)+\dot{\boldsymbol{R}}(t)^{\mathrm{T}} \boldsymbol{R}(t) &=0 \\ -\dot{\boldsymbol{R}}(t)^{\mathrm{T}} \boldsymbol{R}(t)-\boldsymbol{R}(t)^{\mathrm{T}} \dot{\boldsymbol{R}}(t) &=0 \end{aligned} $$

显然，$$ \dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}=-\left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t){\mathrm{T}}\right){\mathrm{T}} .$$

这里

 $$ 
 \begin{aligned} \left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t){\mathrm{T}}\right){\mathrm{T}} &=\left(\boldsymbol{R}(t){\mathrm{T}}\right){\mathrm{T}} \dot{\boldsymbol{R}}(t)^{\mathrm{T}} \\ &=\boldsymbol{R}(t) \dot{\boldsymbol{R}}(t)^{\mathrm{T}} \\ &=-\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}} \end{aligned} $$ 

 $$ \text { 如果 } A \text { 是 } n \text { 阶方阵，且 } A^{\prime}=-A \text { ，那么 } A \text { 就是反对称矩阵。 } $$


