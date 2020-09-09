#include <stdio.h>
#include <string.h>
int main()
{
    
    char animal[22], s1[22], s2[22];
    scanf("%s %s %s", &animal, &s1, &s2);
    if (strcmp(animal, "vertebrado") == 0 && strcmp(s1, "ave") == 0 && strcmp(s2, "carnivoro") == 0)
    {
        printf("aguia\n");
    }
    else if (strcmp(animal, "vertebrado") == 0 && strcmp(s1, "ave") == 0 && strcmp(s2, "onivoro") == 0)
    {
        printf("pomba\n");
    }
    else if (strcmp(animal, "vertebrado") == 0 && strcmp(s1, "mamifero") == 0 && strcmp(s2, "onivoro") == 0)
    {
        printf("homem\n");
    }
    else if (strcmp(animal, "vertebrado") == 0 && strcmp(s1, "mamifero") == 0 && strcmp(s2, "herbivoro") == 0)
    {
        printf("vaca\n");
    }
    /*first section is completed here*/

    if (strcmp(animal, "invertebrado") == 0 && strcmp(s1, "inseto") == 0 && strcmp(s2, "hematofago") == 0)
    {
        printf("pulga\n");
    }
    else if (strcmp(animal, "invertebrado") == 0 && strcmp(s1, "inseto") == 0 && strcmp(s2, "herbivoro") == 0)
    {
        printf("lagarta\n");
    }
    else if (strcmp(animal, "invertebrado") == 0 && strcmp(s1, "anelideo") == 0 && strcmp(s2, "hematofago") == 0)
    {
        printf("sanguessuga\n");
    }
    else if (strcmp(animal, "invertebrado") == 0 && strcmp(s1, "anelideo") == 0 && strcmp(s2, "onivoro") == 0)
    {
        printf("minhoca\n");
    }

    return 0;
}

/**
 * this is the worst code 
 * // if (strcmp(animal, "vertebrado") == 0)
    // {
    //     scanf("%s", &class_one);

    //     if (strcmp(class_one, "ave") == 0)
    //     {
    //         scanf("%s", &class_one1);
    //         if (strcmp(class_one1, "carnivoro") == 0)
    //         {
    //             printf("aguia\n");
    //         }
    //         else if (strcmp(class_one1, "onivoro") == 0)
    //         {
    //             printf("pomba\n");
    //         }
    //     }
    //     else if (strcmp(class_one, "mamiforo") == 0)
    //     {
    //         scanf("%s", &class_one2);
    //         if (strcmp(class_one2, "onivoro") == 0)
    //         {
    //             printf("homem\n");
    //         }
    //         else if (strcmp(class_one2, "herbivoro") == 0)
    //         {
    //             printf("vaca\n");
    //         }
    //     }
    // }
    // /*category one end here.*/

// /*category two start form here*/
// else if (strcmp(animal, "invertebrado") == 0)
// {
//     scanf("%s", &class_one);

//     if (strcmp(class_one, "inseto") == 0)
//     {
//         scanf("%s", &class_one1);
//         if (strcmp(class_one1, "hematofago") == 0)
//         {
//             printf("pulga\n");
//         }
//         else if (strcmp(class_one1, "herbivoro") == 0)
//         {
//             printf("lagarta\n");
//         }
//     }
//     else if (strcmp(class_one, "anelideo") == 0)
//     {
//         scanf("%s", &class_one2);
//         if (strcmp(class_one2, "hematofago") == 0)
//         {
//             printf("homen\n");
//         }
//         else if (strcmp(class_one2, "onivoro") == 0)
//         {
//             printf("minhoca\n");
//         }
//     }
// }
