## list用法 The regulations of list

### assign() 

Assigns new contents to the list container, replacing its current contents, and modifying its size accordingly.

void assign (InputIterator first, InputIterator last);
void assign (size_type n, const value_type& val);
void assign (initializer_list<value_type> il);

### emplace_front()

Construct and insert element at beginning
emplace_back()
Construct and insert element at the end

### emplace()

Construct and insert element

### insert()

Insert elements

### erase() 

Erase elements

### swap()

Swap content

### resize()

void resize (size_type n);
void resize (size_type n, const value_type& val);

Resizes the container so that it contains n elements.
调整容器大小使得其能容纳n个元素

If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
如果n比当前容器大小小，则容器减少为开始的n个元素，后面的元素舍弃并释放

If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
如果n比当前大小大，则通过在末尾插入需要达到n个数量的元素来扩从内容。如果val是指定的，那么新的元素将被初始化成val，否则就是其本来的初始化值。

Notice that this function changes the actual content of the container by inserting or erasing elements from it.
注意这个函数通过插入和删除元素改变了容器的实际内容

## 操作 Operations

### splice()

Transfer elements from list to list

### remove()

Remove elements with specific value

### remove_if()

Remove elements fulfilling condition
unique()
Remove duplicate values
merge()
Merge sorted lists
sort()
Sort elements in container

### reverse

Reverse the order of elements

## remains

push_front()
pop_front()
push_back()
pop_back()
clear()
empty()
size()
begin()
end()
front()
back()
rbegin()
rend()
cbegin()
cend()
crbegin()
crend()
max_size()