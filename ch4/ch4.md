视觉slam十四讲中的公式推导(借助chatgpt)

设 $\mathbf{R}(t)$ 是一个 $n\times n$ 的可微旋转矩阵，即 $\mathbf{R}(t)\mathbf{R}(t)^\mathrm{T} = \mathbf{R}(t)^\mathrm{T}\mathbf{R}(t) = \mathbf{I}$，其中 $\mathbf{I}$ 是 $n\times n$ 的单位矩阵。我们需要证明的是：

$$
\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}=-\left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}\right)^{\mathrm{T}}
$$
对左式两边同时求导，有
$$
\begin{align*}
\frac{d}{dt}(\dot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T}) &= \ddot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T} + \dot{\mathbf{R}}(t)\frac{d}{dt}(\mathbf{R}(t)^\mathrm{T}) \
&= \ddot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T} + \dot{\mathbf{R}}(t)(\frac{d}{dt}\mathbf{R}(t))^\mathrm{T} \
&= \ddot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T} + \dot{\mathbf{R}}(t)(\dot{\mathbf{R}}(t)^\mathrm{T}) \
&= \ddot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T} + (\dot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T})^\mathrm{T}
\end{align*}
$$

对右式两边同时取转置，有
$$
\begin{align*}
-(\dot{\mathbf{R}}(t)\mathbf{R}(t)^\mathrm{T})^\mathrm{T} &= -(\mathbf{R}(t)^\mathrm{T})^\mathrm{T}(\dot{\mathbf{R}}(t)^\mathrm{T})^\mathrm{T} \
&= -\mathbf{R}(t)\dot{\mathbf{R}}(t)^\mathrm{T}
\end{align*}
$$

将上述两个式子代入原式得



我们已知 $\mathbf{R}(t)$ 是一个旋转矩阵，因此 $\dot{\mathbf{R}}(t)$ 是一个反对称矩阵，即 $\dot{\mathbf{R}}(t)^\mathrm{T} = -\dot{\mathbf{R}}(t)$。进一步，由于$\mathbf{R}(t)$ 是一个可微的旋转矩阵，因此 
$$
\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}=-\left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}\right)^{\mathrm{T}}
$$

$$
\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}+\boldsymbol{R}(t) \dot{\boldsymbol{R}}(t)^{\mathrm{T}}=0 .
$$
整理得
$$
\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}=-\left(\dot{\boldsymbol{R}}(t) \boldsymbol{R}(t)^{\mathrm{T}}\right)^{\mathrm{T}} .
$$





