# C programming

<!--core concepts of for loop and array-->

## Core concepts of for loop and array

### The loop

**when we have to do a work again and again then we can think about loop.loop is the most important thing for every programming language.**

## There are three type of loop.

1. for Loop
2. while Loop
3. do while Loop

### for loop

**- structure of for loop**

```
  for (data_type variable_name = index_number; condition; increase or decrease){

  }
```

---

### while loop

**- structure of while loop**

```
  data_type variable_name = index_number
  while(condition){
    /*code*/
    increase or decrease
  }

```

---

### do while loop

**- structure of do while loop**

```
  do{
  /*code*/
  }while(condition)

```

---

## The Array

Basically the array is one kind of data structure. there are three type of array.

1. One dimensional array
1. Two dimensional array
1. Multi dimensional array

**1. one dimensional array.**

A simple array is called one-dimensional array.

**- structure of one dimensional array**

```
data_type array_name[size] = {35,45,10} etc;

memory allocation means how much space an array taking.

```

- array_name[0] = 35;

- array_name[1] = 45;

- array_name[2] = 10;

basically array start from **0**

**2. two dimensional array.**

The two dimensional array can be defined as an array of arrays. Two-dimensional array as like a matrix.
It has some collection of rows and columns.

**- structure of two dimensional array**

```
  data_type array_name[row][column] ={{1,2,3,4,5,6},
  {1,2,3,4,5,6}
  }
```

## Memory Layout

```
array_name[0][0] = 1;

array_name[0][1] = 2;

array_name[0][2] = 3;

array_name[0][3] = 4;

array_name[0][4] = 5;

array_name[0][5] = 6;

array_name[1][0] = 1;

array_name[1][1] = 2;

array_name[1][2] = 3;

array_name[1][3] = 4;

array_name[1][4] = 5;

array_name[1][5] = 6;
```

![2 dimensional array](https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg)

**we can Traverse the array using nested for loop..**

For example : our main for loop using for rows second for loop using for columns.

**Multi Dimensional Array**

A multidimensional array is called an array of arrays.

- structure of multi dimensional array.

```

    data_type array_name[2][2][4]..........[n] = {}
    data_type array_name[row][column][4] = {

    }
    int array[2][2][4] = {
      {{1,2,3,4},{1,2,3,4}},
      {{1,2,3,4},{1,2,3,4}}
    }

```

## Memory Layout

```

array[0][0][0] = 1
array[0][0][1] = 2
array[0][0][2] = 3
array[0][0][3] = 4
array[0][1][0] = 1
array[0][1][1] = 2
array[0][1][2] = 3
array[0][1][3] = 4
array[1][0][0] = 1
array[1][0][1] = 2
array[1][0][2] = 3
array[1][0][3] = 4
array[1][1][0] = 1
array[1][1][1] = 2
array[1][1][2] = 3
array[1][1][3] = 4

```

we can initialize a three-dimensional array in a similar way like a two-dimensional array.
Here's an example:

```

data_type array_name[2][2][4] = {
{{1,2,3,4},{1,2,3,4}},
{{1,2,3,4},{1,2,3,4}}
}

```

![three dimensional array](https://dyclassroom.com/image/topic/c/3d-array/3d-array-scoreboard.jpg)

![three dimensional array](https://data-flair.training/blogs/wp-content/uploads/sites/2/2019/06/3D-Arrays.jpg)

**This is anohter example**
suppose we have a 3d array, the name of this array is arr . we've to traverse this array. Obviously we've to use **for loop.**

we're defining integer type data.

**int arr[2][2][4] = {
{{1,2,3,4},{1,2,3,4}},
{{1,2,3,4},{1,2,3,4}}
}**

first of all we have to remember that how much rows, columns and value have in a 3d array.
This array shows us 2 rows, 2 columns, and every column has 4 value.

we have to traverse this array using for loop..
therefore this array has 2 rows 2 columns and inside the column has 4 values.

Rows could be one for loop and columns could be nested for loop and finally the exact value could be another nested for loop.

```

for example:
#include <stdio.h>

int main()
{
int i,j,k; /_initializer_/
int arr[2][2][4];
printf("enter 16 value: ");
for(i = 0; i < 2; i++){
for(j = 0; j < 2; j++){
for(k = 0; k < 4; k++){
scanf("%d",&arr[i][j][k]);
}
}
}

for(i = 0; i< 2; i++){
for(j = 0; j<2; j++){
for(k = 0; k < 4; k++){
printf("arr[%d][%d][%d] = %d \n",i,j,k,arr[i][j][k]);
}
}
}
return 0;
}

```

```

enter 16 value

11
22
33
44
55
66
77
88
99
11
22
33
44
55
66
77
arr[0][0][0] = 11
arr[0][0][1] = 22
arr[0][0][2] = 33
arr[0][0][3] = 44
arr[0][1][0] = 55
arr[0][1][1] = 66
arr[0][1][2] = 77
arr[0][1][3] = 88
arr[1][0][0] = 99
arr[1][0][1] = 11
arr[1][0][2] = 22
arr[1][0][3] = 33
arr[1][1][0] = 44
arr[1][1][1] = 55
arr[1][1][2] = 66
arr[1][1][3] = 77

```

<!--core concepts of for loop and array markdown is ending here-->

---

---

<!--some list-->

## Problem solving with for loop

**for loop**

- Width Height

```

#include <stdio.h>

int main(){

    int i, j,width = 5,height = 5;

    for(i = 0; i < height; i++ ){

        for(j = 0; j<width; j++){

            printf("* ");

        }
        printf("\n");

    }
    return 0;

}

```

---

```

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

```

---

- Right-angled triangle

```

#include <stdio.h>

int main(){

    int i, j,rows = 5;

    for(i = 0; i <= rows; i++ ){

        for(j = 0; j<i; j++){

            printf("* ");

        }
        printf("\n");

    }
    return 0;

}

```

---

```

    *
    * *
    * * *
    * * * *
    * * * * *

```

---

- Pyramid

```

#include <stdio.h>

int main(){

    int i, j,rows = 5, spaces = 5;

    for(i = 0; i < rows; i++ ){

        for(j = 0; j< spaces; j ++){

            printf(" ");

        }

        for(j = 0; j<(2 * i) - 1; j++){

            printf("*");

        }

        spaces--;

        printf("\n");

    }
    return 0;

}

```

---

```

       *
      ***
     *****
    *******

```

- Reverse diamond

```

    int i, j, stars = 5, rows = 5, spaces = 1;

    for (i = 0; i < rows * 2; i++)

    {
        for (j = 1; j < spaces; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * stars + 1; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i < rows)
        {
            spaces++;
            stars--;
        }
        else
        {
            spaces--;
            stars++;
        }
    }
    return 0;

}

```

<!-- output -->

```

output

    *********
     *******
      *****
       ***
        *
       ***
      *****
     *******
    *********

```

---

2. Array

- One dimensional array
- Array travers using for loop
- Bouble sort (using nested for loop)
- Two dimensional array

- Popularity Table (city wise car)

* multi table using nested for loop and two dimensional array

---

Some Markdown text with <span style="color:blue">some **blue** text</span>.

```

```
