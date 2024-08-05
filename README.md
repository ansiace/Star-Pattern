# Star Pattern Collection⭐

## Star Pattern 
Welcome to the ⭐ Pattern repository! This repository contains various star patterns implemented in c++ programming languages. These patterns are commonly used in coding practice and interviews to demonstrate understanding of loops and basic programming constructs.

### Some of the following patterns included:

1. Half Pyramid
#### Pattern:
  ```
    *
    * *
    * * *
    * * * *
    * * * * *
  ```

2. Full Pyramid
  #### Pattern:
```
        *
       ***
      *****
     *******
    *********
```
3. Inverted Pyramid
#### Pattern:
```
    *********
     *******
      *****
       ***
        *
```

4. Diamond Shape
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

5. Right Angle Triangle
#### Pattern:
   ```
    *
    **
    ***
    ****
    *****
   ```
6. Left Angle Triangle
#### Pattern:
```
        *
      * *
    * * * 
  * * * *
* * * * *
```


# Example Half Pyramid
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
