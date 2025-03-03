/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   thread_functions.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/28 18:53:59 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/03 18:05:11 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	left_handed_philo(t_philo *philo)
{
	while (philo->iterations != 0)
	{
		take_left_fork(philo);
		take_right_fork(philo);
		eat(philo);
		leave_right_fork(philo);
		leave_left_fork(philo);
		sleep(philo);
		think(philo);
		if (philo->iterations != INFINITE)
			philo->iterations --;
	}
}

void	right_handed_philo(t_philo *philo)
{
	while (philo->iterations != 0)
	{
		take_right_fork(philo);
		take_left_fork(philo);
		eat(philo);
		leave_left_fork(philo);
		leave_right_fork(philo);
		sleep(philo);
		think(philo);
		if (philo->iterations != INFINITE)
			philo->iterations --;
	}
}

void	*philo_thread(void *philo)
{
	if (((t_philo *)philo)->id % 2 == 1)
		left_handed_philo((t_philo *)philo);
	else
		right_handed_philo((t_philo *)philo);
	return (NULL);
}
