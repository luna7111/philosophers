/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   philo.h                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/28 18:22:29 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/28 18:28:11 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <unistd.h>
//usleep
#include <stdio.h>
//printf
#include <stdlib.h>
//memory allocation
#include <sys/time.h>
//gettimeofday
#include <phtread.h>
//multithreading

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define INFINITE -1
# define ALIVE 0
# define DEAD 1
# define FINISHED 2

#endif
