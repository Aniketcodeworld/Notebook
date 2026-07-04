#List are mutable
numbers = [10,20,30,40,50,60,70,80,90,100]
numbers[0] = 1000
numbers.append(200)     #timecomplexity O(1)
print(numbers)    

a=[1,2]
b=[3,4]
a.extend(b)  #timecomplexity O(n)
print(a)

numbers = [10,20,30]
numbers.remove(20)
print(numbers)

numbers = [10,20,30]
numbers.pop()  #Last element is removed
numbers.pop(1) #index 1 element is removed

# The pop() method removes the element at the specified position.
# If you do not specify the index, the pop() method removes the last item in the list.