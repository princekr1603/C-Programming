#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define FRAM_TXT_SIZ 3
#define MAX_NOF_FRAM 127

char str[FRAM_TXT_SIZ * MAX_NOF_FRAM];
struct frame // Structure to hold frames
{
    char text[FRAM_TXT_SIZ + 1]; // +1 for null-termination
    int seq_no;
} fr[MAX_NOF_FRAM], shuf_ary[MAX_NOF_FRAM];

int assign_seq_no() // Function to split message into frames and assign sequence numbers
{
    int k = 0, i, j;
    for (i = 0; i < strlen(str); k++)
    {
        fr[k].seq_no = k;
        for (j = 0; j < FRAM_TXT_SIZ && str[i] != '\0'; j++)
            fr[k].text[j] = str[i++];
        fr[k].text[j] = '\0'; // Null-terminate the string
        if (str[i] == '\0') break; // Break if we've reached the end of the string
    }
    printf("\nAfter assigning sequence numbers:\n");
    for (i = 0; i < k; i++)
        printf("%d: %s\n", fr[i].seq_no, fr[i].text);
    return k; // k gives number of frames
}

void generate(int *random_ary, const int limit) // Generate an array of random numbers
{
    int r, i = 0, j;
    while (i < limit)
    {
        r = rand() % limit;
        for (j = 0; j < i; j++)
            if (random_ary[j] == r)
                break;
        if (i == j)
            random_ary[i++] = r;
    }
}

void shuffle(const int no_frames) // Function to shuffle the frames
{
    int i, random_ary[no_frames];
    generate(random_ary, no_frames);
    for (i = 0; i < no_frames; i++)
        shuf_ary[i] = fr[random_ary[i]];
    printf("\n\nAFTER SHUFFLING:\n");
    for (i = 0; i < no_frames; i++)
        printf("%d: %s\n", shuf_ary[i].seq_no, shuf_ary[i].text);
}

void sort(const int no_frames) // Function to sort the frames
{
    int i, j, flag = 1;
    struct frame hold;
    for (i = 0; i < no_frames - 1 && flag == 1; i++) // Bubble sort based on sequence numbers
    {
        flag = 0;
        for (j = 0; j < no_frames - 1 - i; j++)
            if (shuf_ary[j].seq_no > shuf_ary[j + 1].seq_no)
            {
                hold = shuf_ary[j];
                shuf_ary[j] = shuf_ary[j + 1];
                shuf_ary[j + 1] = hold;
                flag = 1;
            }
    }
}

int main()
{
    int no_frames, i;
    printf("Enter the message: ");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character
    }
    else
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    srand(time(NULL)); // Seed the random number generator
    no_frames = assign_seq_no();
    shuffle(no_frames);
    sort(no_frames);
    printf("\n\nAFTER SORTING:\n");
    for (i = 0; i < no_frames; i++)
        printf("%s", shuf_ary[i].text);
    printf("\n\n");

    return 0;
}
