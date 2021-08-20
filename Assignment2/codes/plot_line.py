import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure()
ax = fig.add_subplot()

# x-coordinates
x = (3,-2)

#y-coordinates
y = (0,-2)

ax.plot(x,y,color='blue',marker='o',label='AB')

# x-coordinates
x=(3,8)

#y-coordinates
y=(0,2)

ax.plot(x,y,color = 'red',marker='o',label='AC')


# range of x and y axes
x_ticks = np.arange(-3,10,1)
y_ticks = np.arange(-4,5,1)
ax.set_xticks(x_ticks)
ax.set_yticks(y_ticks)
ax.set_xlabel('x')
ax.set_ylabel('y')

ax.annotate("A",(3,0))
ax.annotate("B",(-2,-2))
ax.annotate("C",(8,2))

ax.grid()
ax.legend()

plt.savefig('collinear_points.png',dpi=300)

#plt.show()
