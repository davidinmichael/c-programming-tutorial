/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

int main()
{
        int alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                if (alphabet == 'e' || alphabet == 'q')
			continue;
		printf(alphabet);
	}
	printf("\n");

	return (0);
}
