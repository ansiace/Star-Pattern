# Star Pattern Collection⭐

## Star Pattern 
Welcome to the ⭐ Pattern repository! This repository contains various star patterns implemented in c++ programming languages. These patterns are commonly used in coding practice and interviews to demonstrate understanding of loops.

### Some of the following patterns included in this series:

- Right Half Pyramid
#### Pattern:
  ```
    *
    * *
    * * *
    * * * *
    * * * * *
  ```

- Triangle Star Pattern
  #### Pattern:
```
        *
       ***
      *****
     *******
    *********
```
- Inverted Triangle Star Pattern
#### Pattern:
```
    *********
     *******
      *****
       ***
        *
```

- Diamond Shape
#### Pattern:
```
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
```

- Left Half Pyramid
#### Pattern:
```
        *
      * *
    * * * 
  * * * *
* * * * *
```


- Squre Fill Pattern
#### Pattern:
```
* * * *
* * * *
* * * *
* * * *
```


## Example of Half Pyramid
code:
```
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                cout<<"⭐";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
```
### output:
<div>⭐</div>
<div>⭐⭐</div>
<div>⭐⭐⭐</div>
<div>⭐⭐⭐⭐</div>
<div>⭐⭐⭐⭐⭐</div>
