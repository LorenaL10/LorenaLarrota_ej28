import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("calor.dat")
n_points = int(np.sqrt(len(data)))
grid = np.reshape(data, (n_points, n_points))
print(n_points)


plt.figure()
plt.imshow(grid)
plt.xlabel("X")
plt.ylabel("T")
plt.colorbar(label="Temperatura")
plt.savefig("plot.png")
