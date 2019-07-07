import numpy as np
import matplotlib.pyplot as plt
import sklearn
import sklearn.datasets
import init_utils  # 第一部分，初始化
import reg_utils  # 第二部分，正则化
import gc_utils  # 第三部分，梯度校验

# %matplotlib inline #如果你使用的是Jupyter Notebook，请取消注释。
plt.rcParams['figure.figsize'] = (7.0, 4.0)  # set default size of plots
plt.rcParams['image.interpolation'] = 'nearest'
plt.rcParams['image.cmap'] = 'gray'

train_X, train_Y, test_X, test_Y = reg_utils.load_2D_dataset(is_plot=True)

def model(X,Y,learning_rate=0.3,num_iterations=30000,print_cost=True,is_plot=True,lambd=0,keep_prob=1):
    grads = {}
    costs = []
    m = X.shape[1]
    layers_dims = [X.shape[0],20,3,1]

    parameters = reg_utils.initialize_parameters(layers_dims)

    # ok we start
    for i in range(0,num_iterations):
        if keep_prob == 1:
            a3,cache = reg_utils.forward_propagation(X,parameters)
    # cost
    cost = reg_utils.compute_cost(a3,Y)
    grads = reg_utils.backward_propagation(X,Y,cache)
    parameters = reg_utils.update_parameters(parameters,grads,learning_rate)
    if i % 1000 == 0:
        ## 记录成本
        costs.append(cost)
        if (print_cost and i % 10000 == 0):
            # 打印成本
            print("第" + str(i) + "次迭代，成本值为：" + str(cost))
    if is_plot:
        plt.plot(costs)
        plt.ylabel('cost')
        plt.xlabel('iterations (x1,000)')
        plt.title("Learning rate =" + str(learning_rate))
        plt.show()

        # 返回学习后的参数
    return parameters