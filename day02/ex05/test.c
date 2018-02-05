#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_print_four(char *arr)
{
  if (!(arr[0] == '9' && arr[1] == '9'))
  {
    ft_putchar(arr[0]);
    ft_putchar(arr[1]);
    ft_putchar(' ');
    ft_putchar(arr[2]);
    ft_putchar(arr[3]);
    if (!(arr[0] == '9' && arr[1] == '8'))
    {
      ft_putchar(',');
      ft_putchar(' ');
    }
  }
}

int	main()
{
	char arr[4];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = '0';
		while (arr[1] <= '9')
		{
			arr[2] = arr[0];
			if (arr[2] == arr[1] && arr[0] > arr[1])
				arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				arr[3] = '0';
				if (arr[2] == arr[0])
					arr[3] = arr[1] + 1;
				while (arr[3] <= '9')
				{
          ft_print_four(arr);
					arr[3]++;
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
