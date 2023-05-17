<h2>Pointers are simply variables that stores address of another variable</h2>

<h3>Notations:</h3>

<ul>
  <li>p -> The address that it points to</li>
  <li>*p -> The value at the address it points to</li>
  <li>&p -> &p -> It's own address</li>
</ul>


<h3>For example:</h3>

| Address      | Memory |
| ----------- | ----------- |
| ----------- | ----------- |
| 204      | a = 5       |
| ----------- | ----------- |
| ----------- | ----------- |
| 64   | p = 204        |

```
int a;
int p*;
p = &a;

a = 5;

print(p);  -------> 204
print(*p); -------> 5
print(&p); -------> 64
print(&a); -------> 204

print(a);  -------> 5
p* = 8;
print(a);  -------> 8
```
