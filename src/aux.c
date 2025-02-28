/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   aux.c                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/28 18:36:11 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/28 18:39:10 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	ft_atoi(char *str)
{
	int	nb;

	while (*str == ' ')
		str ++;
	nb = 0;
	while (*str >= '0' && *str <= '9' && nb >= 0)
	{
		nb *= 10;
		nb += *str - '0';
		str ++;
	}
	return (nb);
}
//the program does not accept negative values nor values bigger than INT_MAX
//thats why the while condition is always cheching for int overflow
