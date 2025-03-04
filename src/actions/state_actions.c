/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   state_actions.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/03 18:11:49 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/04 09:43:24 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	is_philo_dead(t_philo philo)
{
	if (current_time() - philo->ate > philo->time_to_die)	
		return (1);
	else
		return (0);
}
