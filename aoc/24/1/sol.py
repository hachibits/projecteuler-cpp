import re
dist = [re.split(r'\s+', x.strip()) for x in open('input')]
d0, d1 = [int(x[0]) for x in dist], [int(x[1]) for x in dist]
d0.sort(); d1.sort()
t = 0
for i, d in enumerate(d0):
    t += abs(d0[i] - d1[i])
#print(t)

from collections import defaultdict
freq = defaultdict()
for x in d1:
    freq[x] = freq[x] + 1 if x in freq.keys() else 1
tt = 0
for x in d0:
    if x not in freq.keys():
        continue
    tt += x * freq[x]
print(tt)
