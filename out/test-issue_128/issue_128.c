/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>

  F* version: <unknown>

 */

#include "issue_128.h"

void issue_128_fun_a(Eurydice_slice _x)
{

}

void issue_128_fun_b(Eurydice_slice _x)
{

}

void issue_128_use_enum(issue_128_E e, Eurydice_slice x)
{
  void *uu____0 = (void *)0U;
  switch (e)
  {
    case issue_128_E_A:
      {
        break;
      }
    case issue_128_E_B:
      {
        return;
      }
    default:
      {
        KRML_HOST_EPRINTF("KaRaMeL incomplete match at %s:%d\n", __FILE__, __LINE__);
        KRML_HOST_EXIT(253U);
      }
  }
}

void issue_128_main(void)
{
  uint8_t buf[0U] = {  };
  issue_128_use_enum(issue_128_E_A, Eurydice_array_to_slice((size_t)0U, buf, uint8_t));
}

