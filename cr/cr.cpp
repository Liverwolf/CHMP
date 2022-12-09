import numpy as np
import scipy as sp
import matplotlib.pyplot as plt
from scipy import integrate
from scipy.interpolate import interp1d
speed = [25, 35, 45, 30, 60, 120, 100, 100, 70, 75, 80, 65]
time = np.linspace(0, 11, num=12)
v, err = integrate.quad(l, 0, 11)
print("Integral =", v)
print('Time =', time)
l = interp1d(time, speed, kind='cubic')
xnew = np.linspace(0, 11, num=10000, endpoint=True)
plt.plot(time, speed, 'k', xnew, l(xnew), ':m')
plt.xlabel('time') 
plt.ylabel('speed')
plt.grid()
plt.show()