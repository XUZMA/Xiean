/* { dg-do compile } */
/* { dg-options "-O2 -fdump-ipa-icf-details -fno-inline"  } */

__attribute__ ((noinline, constructor(200)))
int foo()
{
  return 123;
}

__attribute__ ((noinline, constructor(400)))
int bar()
{
  return 123;
}

int main()
{
  foo() + bar();

  return 0;
}
/* { dg-final { scan-ipa-dump "Equal symbols: 0" "icf"  } } */
/* { dg-final { scan-ipa-dump "attribute values are different" "icf"  } } */
/* { dg-final { cleanup-ipa-dump "icf" } } */
