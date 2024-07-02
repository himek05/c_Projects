#include <stdio.h>

int main()
{
    int i, score = 0;
    int answer;

    printf("************* Welcome to the Game **************\n\n\n");

    printf("-> Enter 1 to Start the game\n");
    printf("-> Enter 2 to Quit the game\n");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("The Game has Started\n");

        // Question 1
        printf("1) How many days are in December?\n");
        printf("1) 30\n");
        printf("2) 29\n");
        printf("3) 28\n");
        printf("4) 31\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 2
        printf("2) What is the capital of India?\n");
        printf("1) Goa\n");
        printf("2) Delhi\n");
        printf("3) Haryana\n");
        printf("4) Madhya Pradesh\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 3
        printf("3) Which is the largest state in India?\n");
        printf("1) Goa\n");
        printf("2) Uttar Pradesh\n");
        printf("3) Rajasthan\n");
        printf("4) Madhya Pradesh\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 4
        printf("4) Which language is easy for freshers?\n");
        printf("1) Java\n");
        printf("2) C\n");
        printf("3) Python\n");
        printf("4) C#\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 5
        printf("5) Which is the smallest state in India?\n");
        printf("1) Rajasthan\n");
        printf("2) Jammu and Kashmir\n");
        printf("3) Madhya Pradesh\n");
        printf("4) Goa\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 6
        printf("6) Which country has the highest population?\n");
        printf("1) India\n");
        printf("2) China\n");
        printf("3) America\n");
        printf("4) Japan\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 7
        printf("7) Who is the prime minister of India?\n");
        printf("1) Rahul Gandhi\n");
        printf("2) Arvind Kejriwal\n");
        printf("3) Narendra Modi\n");
        printf("4) Lala Lajpat Rai\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 8
        printf("8) Which is the best mode of transport?\n");
        printf("1) Personal\n");
        printf("2) Airway\n");
        printf("3) Roadway\n");
        printf("4) Waterway\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 1)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 9
        printf("9) What is a necessary thing for students?\n");
        printf("1) Pen\n");
        printf("2) Paper\n");
        printf("3) Books\n");
        printf("4) All of these\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        // Question 10
        printf("10) What is the normal blood pressure for a human?\n");
        printf("1) 110/30\n");
        printf("2) 120/80\n");
        printf("3) 30/90\n");
        printf("4) 155/70\n");
        printf("Enter your Answer:\n");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("Wrong Answer\n");
        }

        printf("********** The End **********\n");
        printf("You answered %d out of 10 questions correctly.\n", score);
    }
    else if (i == 2)
    {
        printf("The Game has Ended\n");
    }
    else
    {
        printf("Please enter a correct input\n");
    }

    return 0;
}
