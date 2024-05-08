/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:02:49 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 10:02:49 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	partition(int *box, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = *(box + high);
	i = low;
	j = low;
	while (j <= high - 1)
	{
		if (*(box + j) < pivot)
		{
			swap(box + i, box + j);
			i++;
		}
		j++;
	}
	swap(box + i, box + high);
	return (i);
}

void	myqsort(int	*box, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(box, low, high);
		myqsort(box, low, pi - 1);
		myqsort(box, pi + 1, high);
	}
}

// #include <stdio.h>
// int main() {
//     int arr[] = {0, 1, 2, 3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     myqsort(arr, 0, n-1);
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
