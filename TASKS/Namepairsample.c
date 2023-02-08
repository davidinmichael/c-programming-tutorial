/*
Start
1. Declare and Initialize an array of strings to hold names
2. Get the count of names in the array
3. Shuffle the names in the array
4. For each iteration of index i from 0 to name count divided by 3
5. Print the names at index i, i + 1, i + 2
End
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 80
#define groupSize 3

const char *names[N] = {
    "Dukeson Ehigboria", "Bayere Samuel Tosin", "Francis Morkeh Mensah",
    "MICHAEL OMOTOSHO", "Justice Chigbo Obasi", "GABRIEL Rufai", "Oisereme Abulu",
    "Brigid Wambua", "Olajide Safiyyah Mojirayo", "OMIDIJI Oluwaseyi",
    "Nwoko Onyinye Favour", "Philip Nyelwa Kweba", "Victor Adeyemo", "Paschal Chinonso",
    "Fapetu Ayodele Abayomi", "HIRWA Jr", "Abdulhamid Sanusi", "Olayiwola Solomon",
    "Eberechi", "Joseph Akpan Nathaniel", "Malumbe Musowe", "Jamiu Musa", "Chinaza Ukwe",
    "Didier Shema Gatete", "Taiwo Ogunga", "Blessed", "Amarachi Anaesiuba", "Hanna Menetie Ojole",
    "Egbuta Godslove Ugochukwu", "Joshua Monday", "Blessing Eugene Chukwunwike",
    "DR_Mkelvo (Mwiyeria Kelvin)", "JOSHUA MBISE", "Sanni Oshioke Omoba", "Sunday Udhawuve",
    "Thomas Oselu", "Thomas Bulus", "Stacy Gakiria", "Christie Dike", "Owolabi Pius",
    "Mary Nzembi Mutuku", "Aghara Christiana", "Adam Abah", "Folakemi Oderanti",
    "Grace Titilayo David", "Eric Ogedegbe", "Ramla Mahad Diriye", "Igwegbe George Ifesinachi",
    "Chinemerem Chukwukere", "Abdulazeez Ibrahim", "Bright Okon", "OLUWAFEMI BUSARI",
    "Titilayo Oluwakemi Olojede", "Oluwadamilola Ogunbayo", "Michael Okpako", "Functional Ogunbode",
    "Tochi Onwukwe", "Nkanga Edo Monday", "Agunloye Olaniyi Nicolas", "Fasil Seifu Besir",
    "Mary-Queen Uchechukwu", "Uwemedimo Ekpewoh", "Joy Kuapa", "Ogunleye Sanmi", "Didier Shema Gatete",
    "Adedamola Coal", "OLOLADE Olakunle Olalekan", "Wisdom Osatemple", "Adekilekun Abdullahi",
    "Faith Obi", "Ibrahim Bolajoko Ibrahim", "Lawal Muhammadbashir", "Malumbe Musowe",
    "Aina Adewale Ibukunoluwa", "Fadilat Abubakar", "Olayinka Jumai Kolupo"
};

void shuffle(const char *names[N], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        int j = rand() % (i + 1);
        const char *temp = names[i];
        names[i] = names[j];
        names[j] = temp;
    }
}

int main() {
    srand(time(NULL));
    shuffle(names, N);
    
    for(int i = 0; i < N; i += groupSize)
    {
        printf("Group %d:\n", (i / groupSize) + 1);
        for(int j = 0; j < groupSize && i + j < N; j++)
        {
            printf("\t%s\n", names[i + j]);
        }
        printf("\n");
    }
    
    return 0;
}