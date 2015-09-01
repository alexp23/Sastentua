/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 03:43:53 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/28 22:25:19 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	void_char(int nb_pallier, int pallier, int moin_nb)
{
	int i;
	int count_line;
	int count_p;
	int size_char;
	int total_size;
	
	total_size = 0;
	i = 1;
	count_line = 1;
	count_p = 1;
	size_char = 0;
	if (pallier > 1)
	{
		
	}
	printf("%d\n", size_char);
	/*while (i <= nb_pallier)
	{
		i ++;
	}*/
	total_size = 45 - size_char;
	i = 0;
	while (i <= total_size - moin_nb)
	{	
		ft_putchar('|');
		i++;
	}		
}	

void	palliers(int num_pal)
{
	int count_line;
	int count_char;
	int nb_line;
	int nb_char;
	int temp_rec;
	int temp_rec2;
	int moin_nb;
	
	temp_rec 	= num_pal;
	temp_rec2	= num_pal;
	num_pal		= 1;
	nb_char 	= num_pal + 2;
	while (num_pal <= temp_rec)
	{
		count_line 		= 1;
		count_char 		= 1;
		nb_line 		= num_pal + 2;

		while (count_line <= nb_line)
		{
			moin_nb = count_line;
			void_char(temp_rec, num_pal, moin_nb);
			while(count_char <= nb_char)
			{
				if (count_char == 1)
					ft_putchar('/');
				else if (count_char == nb_char)
					ft_putchar('\\');
				else
					ft_putchar('*');
				count_char++;
			}
			count_line++;
			count_char = 1;
			nb_char += 2;
			ft_putchar('\n');
		}
	temp_rec2--;
	nb_char += 4;
	num_pal++;	
	}
}
void	la_porte()
{

}

void	sastantua(int nb_pallier)
{	
	int count;
	
	count = 0;
	while (count <= nb_pallier)
	{
		palliers(count);
		count++;
	}
}

int		main(void)
{
	palliers(5);
	return (0);
}
