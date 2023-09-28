"""
list.append(x) # append x to end of list
list.extend(iterable) # append all elements of iterable to list
list.insert(i, x) # insert x at index i
list.remove(x) # remove first occurance of x from list
list.pop([i]) # pop element at index i (defaults to end of list)
list.clear() # delete all elements from the list
list.index(x[, start[, end]]) # return index of element x
list.count(x) # return number of occurances of x in list
list.reverse() # reverse elements of list in-place (no return)
list.sort(key=None, reverse=False) # sort list in-place
list.copy() # return a shallow copy of the list
"""
# *****************************************

nums = [10, 20, 30, 40, 50, 60, 70, 80]
# nums = [10, 50, 60, 70, 80, 20, 30, 40]

# nums.append("90")  # add a element at the end
# cnt = nums.count(10)  # count element exists how much times.
# print(cnt)

# shallow_copy = nums.copy()  #copy main list items to another list
# shallow_copy.pop()
# nums.extend((90, 100)) # extend method work with iterable data  structure that's extend main list's size

# nums.insert(8, 90) # insert add element to specific position or any position in list

# nums.reverse() #reverse a list
# nums.sort(reverse=True)  # short a  list


# print(len((nums))) #length of a list
print(nums)
# print(shallow_copy)
