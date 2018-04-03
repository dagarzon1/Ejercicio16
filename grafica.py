import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("album.txt")
n=np.size(data[:,0])
x=np.linspace(0,n-1,n)
plt.plot(x,data[:,0],label="laminas en album")
plt.plot(x,data[:,1],label="laminas repetidas")
plt.legend(loc=2)
plt.ylabel("laminas")
plt.xlabel("numero de sobres")
plt.savefig("album.png")
