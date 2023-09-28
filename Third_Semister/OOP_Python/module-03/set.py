st = set((10, 20, 30, 40))
st2 = set(("Banana", "Apple", "Orange", 10))

st.add(25)
st.add(20)

# st2 = st.copy()
# df = st.difference(st2)
# st.difference_update(st2)
# st.discard(10)

# intersec = st.intersection(st2) # intersection methods stand for matching elements for two set

# intersection update methods show the matching elements
# st.intersection_update(st2)

# st.remove(10)
# print(st.pop())
# un = st.union(st2)
st.update(st2)
print(st)
