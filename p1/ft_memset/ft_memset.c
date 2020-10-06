/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 09:47:46 by tsannie           #+#    #+#             */
/*   Updated: 2020/10/05 10:57:51 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 

//void *ft_memset(void *s, int c, size_t n)

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 
  
int main()
{ 
    int n = 10; 
    int arr[n]; 
  
    // Fill whole array with 0.
    printf("%lu\n", sizeof(arr[0])); 
    memset(arr, 0, n*sizeof(arr[0])); 
    printf("Array after memset()\n"); 
    printArray(arr, n); 

    return 0; 
}
