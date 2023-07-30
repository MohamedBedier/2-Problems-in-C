Binary.i : variation_ofBinarySearch.c 
		gcc -E variation_ofBinarySearch.c -o Binary.i
		
Sentinel.i : variation_ofLinearSearch_Sentinel.c
		gcc -E variation_ofLinearSearch_Sentinel.c -o Sentinel.i
	
All : Binary.i Sentinel.i
	gcc -E -P variation_ofLinearSearch_Sentinel.c -o Sentinel.i
	gcc -E variation_ofBinarySearch.c -o Binary.i