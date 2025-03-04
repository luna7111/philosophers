/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   philo.h                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/28 18:22:29 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/04 09:43:11 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
//usleep
# include <stdio.h>
//printf
# include <stdlib.h>
//memory allocation
# include <sys/time.h>
//gettimeofday
# include <phtread.h>
//multithreading

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define INFINITE -1
# define ALIVE 0
# define DEAD 1
# define FINISHED 2

typedef struct s_philo
{
	int				time_to_eat;
	int				time_to_sleep;
	int				time_to_die;
	int				iterations;
	int				id;
	int				philo_nb;
	int				state;
	long long		ate;
	long long		start_timestamp;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
}	t_philo;

typedef struct s_table
{
	int				philo_nb;
	int				time_to_eat;
	int				time_to_sleep;
	int				time_to_die;
	int				iterations;
	long long		start_timestamp;
	t_philo			*philos;
	pthread_mutex_t	*forks;
	pthread_t		*threads;
}	t_table;

void		*philo_thread(void *philo);

int			ft_atoi(char *str);
long long	current_time_msec(void);
long long	time_passed_msec(long long timestamp);

int			is_philo_dead(t_philo *philo);



#endif
