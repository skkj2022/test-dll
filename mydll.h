/*
  author : ez
  date : 2015/7/9
*/
 
#ifndef _MY_DLL_H
#	define _MY_DLL_H_
 
#ifdef __cplusplus
extern "C" {
#endif
 
extern __declspec (dllexport) int add_range (int, int);
extern __declspec (dllexport) double average (int*, int);
 
#ifdef __cplusplus
}
#endif
 
 
#endif // ~_MY_DLL_H_