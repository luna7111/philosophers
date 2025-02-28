/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   thread_functions.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/28 18:53:59 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/28 19:01:41 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	left_handed_philo(t_philo *philo)
{
}

void	right_handed_philo(t_philo *philo)
{
}

void	*philo_thread(void *philo)
{
	if (((t_philo *)philo)->id % 2 == 1)
		left_handed_philo((t_philo *)philo);
	else
		right_handed_philo((t_philo *)philo);
	return (NULL);
}
