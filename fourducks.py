import sys
import random

ducks = 4
count = 0
total = 100000
for i in range(total):
    
    a=[random.uniform(0,360) for i in range(ducks)]
    a=sorted(a)
    a.append(a[0]+360)
    
    for j in range(ducks):
        if a[j+1]-a[j]>180:
            count += 1
            break

print('count=',count)
print('total=',total)
print('p=',count/total)


'''
确实是n/2的(n-1)次方，4只的话，概率就是1/2 有点啰嗦，以下是思路
理解如下：
第一只鸭子放下去的时候，它与圆心确定的直径将泳池分为左右两部分，假设我们考虑的情况是所有鸭子在左侧；
考虑到一个圆有多种划分方式，我们在这里假设有n只鸭子，每只鸭子放进去，都是一种划分方式，那么：
公式为——2* 1/2的n次方 *n
2：第一只鸭子放进去后，泳池分为左右两部分；接下来都按左边算
1/2的n次方：第一只鸭子（虽然在直径上），但是属于左边泳池的概率为1/2，第二只依然是1/2。。。 
n：n只鸭子，任何一只作为第一只放进去都可以确定一个不一样的直径，即对圆不一样的左右划分方法，所以是n种可能
'''
