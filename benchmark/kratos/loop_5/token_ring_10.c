/* Generated by CIL v. 1.3.6 */
/* print_CIL_Input is true */

int assert_1 = 0;
int m_pc  =    0;
int t1_pc  =    0;
int t2_pc  =    0;
int t3_pc  =    0;
int t4_pc  =    0;
int t5_pc  =    0;
int t6_pc  =    0;
int t7_pc  =    0;
int t8_pc  =    0;
int t9_pc  =    0;
int t10_pc  =    0;
int m_st  ;
int t1_st  ;
int t2_st  ;
int t3_st  ;
int t4_st  ;
int t5_st  ;
int t6_st  ;
int t7_st  ;
int t8_st  ;
int t9_st  ;
int t10_st  ;
int m_i  ;
int t1_i  ;
int t2_i  ;
int t3_i  ;
int t4_i  ;
int t5_i  ;
int t6_i  ;
int t7_i  ;
int t8_i  ;
int t9_i  ;
int t10_i  ;
int M_E  =    2;
int T1_E  =    2;
int T2_E  =    2;
int T3_E  =    2;
int T4_E  =    2;
int T5_E  =    2;
int T6_E  =    2;
int T7_E  =    2;
int T8_E  =    2;
int T9_E  =    2;
int T10_E  =    2;
int E_M  =    2;
int E_1  =    2;
int E_2  =    2;
int E_3  =    2;
int E_4  =    2;
int E_5  =    2;
int E_6  =    2;
int E_7  =    2;
int E_8  =    2;
int E_9  =    2;
int E_10  =    2;
int is_master_triggered() ;
int is_transmit1_triggered() ;
int is_transmit2_triggered() ;
int is_transmit3_triggered() ;
int is_transmit4_triggered() ;
int is_transmit5_triggered() ;
int is_transmit6_triggered() ;
int is_transmit7_triggered() ;
int is_transmit8_triggered() ;
int is_transmit9_triggered() ;
int is_transmit10_triggered() ;
void immediate_notify() ;
int token  ;
int __NONDET = 0 ;
int local  ;

void master() 
{ 

  {
  if (m_pc == 0) {
    goto M_ENTRY;
  } else {
    if (m_pc == 1) {
      goto M_WAIT;
    } else {

    }
  }
  M_ENTRY: ;
  {
  while (1 < 2) {
    while_0_continue: /* CIL Label */ ;
    {
    token = __NONDET;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    }

    goto return_label;
    M_WAIT: ;
    if (token != local) {
      {
      assert_1 = 1;
      }
    } else {

    }
  }
  {
    while_0_continue: /* CIL Label */ ;
    {
    token = __NONDET;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    }

    goto return_label;
    M_WAIT: ;
    if (token != local) {
      {
      assert_1 = 1;
      }
    } else {

    }
  }
  {
    while_0_continue: /* CIL Label */ ;
    {
    token = __NONDET;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    }

    goto return_label;
    M_WAIT: ;
    if (token != local) {
      {
      assert_1 = 1;
      }
    } else {

    }
  }
  {
    while_0_continue: /* CIL Label */ ;
    {
    token = __NONDET;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    }

    goto return_label;
    M_WAIT: ;
    if (token != local) {
      {
      assert_1 = 1;
      }
    } else {

    }
  }
  {
    while_0_continue: /* CIL Label */ ;
    {
    token = __NONDET;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    }

    goto return_label;
    M_WAIT: ;
    if (token != local) {
      {
      assert_1 = 1;
      }
    } else {

    }
  }
  while_0_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit1() 
{ 

  {
  if (t1_pc == 0) {
    goto T1_ENTRY;
  } else {
    if (t1_pc == 1) {
      goto T1_WAIT;
    } else {

    }
  }
  T1_ENTRY: ;
  {
  while (1 < 2) {
    while_1_continue: /* CIL Label */ ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    token += 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  {
    while_1_continue: /* CIL Label */ ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    token += 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  {
    while_1_continue: /* CIL Label */ ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    token += 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  {
    while_1_continue: /* CIL Label */ ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    token += 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  {
    while_1_continue: /* CIL Label */ ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    token += 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  while_1_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit2() 
{ 

  {
  if (t2_pc == 0) {
    goto T2_ENTRY;
  } else {
    if (t2_pc == 1) {
      goto T2_WAIT;
    } else {

    }
  }
  T2_ENTRY: ;
  {
  while (1 < 2) {
    while_2_continue: /* CIL Label */ ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    token += 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  {
    while_2_continue: /* CIL Label */ ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    token += 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  {
    while_2_continue: /* CIL Label */ ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    token += 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  {
    while_2_continue: /* CIL Label */ ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    token += 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  {
    while_2_continue: /* CIL Label */ ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    token += 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  while_2_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit3() 
{ 

  {
  if (t3_pc == 0) {
    goto T3_ENTRY;
  } else {
    if (t3_pc == 1) {
      goto T3_WAIT;
    } else {

    }
  }
  T3_ENTRY: ;
  {
  while (1 < 2) {
    while_3_continue: /* CIL Label */ ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    token += 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  {
    while_3_continue: /* CIL Label */ ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    token += 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  {
    while_3_continue: /* CIL Label */ ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    token += 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  {
    while_3_continue: /* CIL Label */ ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    token += 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  {
    while_3_continue: /* CIL Label */ ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    token += 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  while_3_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit4() 
{ 

  {
  if (t4_pc == 0) {
    goto T4_ENTRY;
  } else {
    if (t4_pc == 1) {
      goto T4_WAIT;
    } else {

    }
  }
  T4_ENTRY: ;
  {
  while (1 < 2) {
    while_4_continue: /* CIL Label */ ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    token += 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  {
    while_4_continue: /* CIL Label */ ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    token += 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  {
    while_4_continue: /* CIL Label */ ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    token += 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  {
    while_4_continue: /* CIL Label */ ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    token += 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  {
    while_4_continue: /* CIL Label */ ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    token += 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  while_4_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit5() 
{ 

  {
  if (t5_pc == 0) {
    goto T5_ENTRY;
  } else {
    if (t5_pc == 1) {
      goto T5_WAIT;
    } else {

    }
  }
  T5_ENTRY: ;
  {
  while (1 < 2) {
    while_5_continue: /* CIL Label */ ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    token += 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  {
    while_5_continue: /* CIL Label */ ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    token += 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  {
    while_5_continue: /* CIL Label */ ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    token += 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  {
    while_5_continue: /* CIL Label */ ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    token += 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  {
    while_5_continue: /* CIL Label */ ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    token += 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  while_5_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit6() 
{ 

  {
  if (t6_pc == 0) {
    goto T6_ENTRY;
  } else {
    if (t6_pc == 1) {
      goto T6_WAIT;
    } else {

    }
  }
  T6_ENTRY: ;
  {
  while (1 < 2) {
    while_6_continue: /* CIL Label */ ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    token += 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  {
    while_6_continue: /* CIL Label */ ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    token += 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  {
    while_6_continue: /* CIL Label */ ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    token += 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  {
    while_6_continue: /* CIL Label */ ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    token += 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  {
    while_6_continue: /* CIL Label */ ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    token += 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  while_6_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit7() 
{ 

  {
  if (t7_pc == 0) {
    goto T7_ENTRY;
  } else {
    if (t7_pc == 1) {
      goto T7_WAIT;
    } else {

    }
  }
  T7_ENTRY: ;
  {
  while (1 < 2) {
    while_7_continue: /* CIL Label */ ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    token += 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  {
    while_7_continue: /* CIL Label */ ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    token += 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  {
    while_7_continue: /* CIL Label */ ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    token += 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  {
    while_7_continue: /* CIL Label */ ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    token += 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  {
    while_7_continue: /* CIL Label */ ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    token += 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  while_7_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit8() 
{ 

  {
  if (t8_pc == 0) {
    goto T8_ENTRY;
  } else {
    if (t8_pc == 1) {
      goto T8_WAIT;
    } else {

    }
  }
  T8_ENTRY: ;
  {
  while (1 < 2) {
    while_8_continue: /* CIL Label */ ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    token += 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  {
    while_8_continue: /* CIL Label */ ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    token += 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  {
    while_8_continue: /* CIL Label */ ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    token += 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  {
    while_8_continue: /* CIL Label */ ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    token += 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  {
    while_8_continue: /* CIL Label */ ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    token += 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  while_8_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit9() 
{ 

  {
  if (t9_pc == 0) {
    goto T9_ENTRY;
  } else {
    if (t9_pc == 1) {
      goto T9_WAIT;
    } else {

    }
  }
  T9_ENTRY: ;
  {
  while (1 < 2) {
    while_9_continue: /* CIL Label */ ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    token += 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  {
    while_9_continue: /* CIL Label */ ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    token += 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  {
    while_9_continue: /* CIL Label */ ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    token += 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  {
    while_9_continue: /* CIL Label */ ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    token += 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  {
    while_9_continue: /* CIL Label */ ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    token += 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  while_9_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
void transmit10() 
{ 

  {
  if (t10_pc == 0) {
    goto T10_ENTRY;
  } else {
    if (t10_pc == 1) {
      goto T10_WAIT;
    } else {

    }
  }
  T10_ENTRY: ;
  {
  while (1 < 2) {
    while_10_continue: /* CIL Label */ ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    token += 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    }
  }
   {
    while_10_continue: /* CIL Label */ ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    token += 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    }
  }
   {
    while_10_continue: /* CIL Label */ ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    token += 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    }
  }
   {
    while_10_continue: /* CIL Label */ ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    token += 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    }
  }
   {
    while_10_continue: /* CIL Label */ ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    token += 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    }
  }
  while_10_break: /* CIL Label */ ;
  }

  return_label: ;/* CIL Label */ 
  
}
}
int is_master_triggered() 
{ int __retres1 ;

  {
  if (m_pc == 1) {
    if (E_M == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit1_triggered() 
{ int __retres1 ;

  {
  if (t1_pc == 1) {
    if (E_1 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit2_triggered() 
{ int __retres1 ;

  {
  if (t2_pc == 1) {
    if (E_2 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit3_triggered() 
{ int __retres1 ;

  {
  if (t3_pc == 1) {
    if (E_3 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit4_triggered() 
{ int __retres1 ;

  {
  if (t4_pc == 1) {
    if (E_4 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit5_triggered() 
{ int __retres1 ;

  {
  if (t5_pc == 1) {
    if (E_5 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit6_triggered() 
{ int __retres1 ;

  {
  if (t6_pc == 1) {
    if (E_6 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit7_triggered() 
{ int __retres1 ;

  {
  if (t7_pc == 1) {
    if (E_7 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit8_triggered() 
{ int __retres1 ;

  {
  if (t8_pc == 1) {
    if (E_8 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit9_triggered() 
{ int __retres1 ;

  {
  if (t9_pc == 1) {
    if (E_9 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
int is_transmit10_triggered() 
{ int __retres1 ;

  {
  if (t10_pc == 1) {
    if (E_10 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
void update_channels() 
{ 

  {

  
}
}
void init_threads() 
{ 

  {
  if (m_i == 1) {
    m_st = 0;
  } else {
    m_st = 2;
  }
  if (t1_i == 1) {
    t1_st = 0;
  } else {
    t1_st = 2;
  }
  if (t2_i == 1) {
    t2_st = 0;
  } else {
    t2_st = 2;
  }
  if (t3_i == 1) {
    t3_st = 0;
  } else {
    t3_st = 2;
  }
  if (t4_i == 1) {
    t4_st = 0;
  } else {
    t4_st = 2;
  }
  if (t5_i == 1) {
    t5_st = 0;
  } else {
    t5_st = 2;
  }
  if (t6_i == 1) {
    t6_st = 0;
  } else {
    t6_st = 2;
  }
  if (t7_i == 1) {
    t7_st = 0;
  } else {
    t7_st = 2;
  }
  if (t8_i == 1) {
    t8_st = 0;
  } else {
    t8_st = 2;
  }
  if (t9_i == 1) {
    t9_st = 0;
  } else {
    t9_st = 2;
  }
  if (t10_i == 1) {
    t10_st = 0;
  } else {
    t10_st = 2;
  }

  
}
}
int exists_runnable_thread() 
{ int __retres1 ;

  {
  if (m_st == 0) {
    __retres1 = 1;
    goto return_label;
  } else {
    if (t1_st == 0) {
      __retres1 = 1;
      goto return_label;
    } else {
      if (t2_st == 0) {
        __retres1 = 1;
        goto return_label;
      } else {
        if (t3_st == 0) {
          __retres1 = 1;
          goto return_label;
        } else {
          if (t4_st == 0) {
            __retres1 = 1;
            goto return_label;
          } else {
            if (t5_st == 0) {
              __retres1 = 1;
              goto return_label;
            } else {
              if (t6_st == 0) {
                __retres1 = 1;
                goto return_label;
              } else {
                if (t7_st == 0) {
                  __retres1 = 1;
                  goto return_label;
                } else {
                  if (t8_st == 0) {
                    __retres1 = 1;
                    goto return_label;
                  } else {
                    if (t9_st == 0) {
                      __retres1 = 1;
                      goto return_label;
                    } else {
                      if (t10_st == 0) {
                        __retres1 = 1;
                        goto return_label;
                      } else {

                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __retres1 = 0;
  return_label: ;/* CIL Label */ 
  return (__retres1);
}
}
void eval() 
{ int __NONDET___0 = 0 ;
  int tmp ;

  {
  {
  while (1 < 2) {
    while_11_continue: /* CIL Label */ ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_11_break;
    }
    if (m_st == 0) {
      if (__NONDET___0) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      if (__NONDET___0) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {

      }
    } else {

    }
    if (t2_st == 0) {
      if (__NONDET___0) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      if (__NONDET___0) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
      if (__NONDET___0) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      if (__NONDET___0) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
      if (__NONDET___0) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      if (__NONDET___0) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
      if (__NONDET___0) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
      if (__NONDET___0) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      if (__NONDET___0) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
  }
   {
    while_11_continue: /* CIL Label */ ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_11_break;
    }
    if (m_st == 0) {
      if (__NONDET___0) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      if (__NONDET___0) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {

      }
    } else {

    }
    if (t2_st == 0) {
      if (__NONDET___0) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      if (__NONDET___0) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
      if (__NONDET___0) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      if (__NONDET___0) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
      if (__NONDET___0) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      if (__NONDET___0) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
      if (__NONDET___0) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
      if (__NONDET___0) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      if (__NONDET___0) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
  }
   {
    while_11_continue: /* CIL Label */ ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_11_break;
    }
    if (m_st == 0) {
      if (__NONDET___0) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      if (__NONDET___0) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {

      }
    } else {

    }
    if (t2_st == 0) {
      if (__NONDET___0) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      if (__NONDET___0) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
      if (__NONDET___0) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      if (__NONDET___0) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
      if (__NONDET___0) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      if (__NONDET___0) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
      if (__NONDET___0) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
      if (__NONDET___0) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      if (__NONDET___0) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
  }
   {
    while_11_continue: /* CIL Label */ ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_11_break;
    }
    if (m_st == 0) {
      if (__NONDET___0) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      if (__NONDET___0) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {

      }
    } else {

    }
    if (t2_st == 0) {
      if (__NONDET___0) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      if (__NONDET___0) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
      if (__NONDET___0) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      if (__NONDET___0) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
      if (__NONDET___0) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      if (__NONDET___0) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
      if (__NONDET___0) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
      if (__NONDET___0) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      if (__NONDET___0) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
  }
   {
    while_11_continue: /* CIL Label */ ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_11_break;
    }
    if (m_st == 0) {
      if (__NONDET___0) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      if (__NONDET___0) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {

      }
    } else {

    }
    if (t2_st == 0) {
      if (__NONDET___0) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      if (__NONDET___0) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
      if (__NONDET___0) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      if (__NONDET___0) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
      if (__NONDET___0) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      if (__NONDET___0) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
      if (__NONDET___0) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
      if (__NONDET___0) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      if (__NONDET___0) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
  }
  while_11_break: /* CIL Label */ ;
  }

  
}
}
void fire_delta_events() 
{ 

  {
  if (M_E == 0) {
    M_E = 1;
  } else {

  }
  if (T1_E == 0) {
    T1_E = 1;
  } else {

  }
  if (T2_E == 0) {
    T2_E = 1;
  } else {

  }
  if (T3_E == 0) {
    T3_E = 1;
  } else {

  }
  if (T4_E == 0) {
    T4_E = 1;
  } else {

  }
  if (T5_E == 0) {
    T5_E = 1;
  } else {

  }
  if (T6_E == 0) {
    T6_E = 1;
  } else {

  }
  if (T7_E == 0) {
    T7_E = 1;
  } else {

  }
  if (T8_E == 0) {
    T8_E = 1;
  } else {

  }
  if (T9_E == 0) {
    T9_E = 1;
  } else {

  }
  if (T10_E == 0) {
    T10_E = 1;
  } else {

  }
  if (E_M == 0) {
    E_M = 1;
  } else {

  }
  if (E_1 == 0) {
    E_1 = 1;
  } else {

  }
  if (E_2 == 0) {
    E_2 = 1;
  } else {

  }
  if (E_3 == 0) {
    E_3 = 1;
  } else {

  }
  if (E_4 == 0) {
    E_4 = 1;
  } else {

  }
  if (E_5 == 0) {
    E_5 = 1;
  } else {

  }
  if (E_6 == 0) {
    E_6 = 1;
  } else {

  }
  if (E_7 == 0) {
    E_7 = 1;
  } else {

  }
  if (E_8 == 0) {
    E_8 = 1;
  } else {

  }
  if (E_9 == 0) {
    E_9 = 1;
  } else {

  }
  if (E_10 == 0) {
    E_10 = 1;
  } else {

  }

  
}
}
void reset_delta_events() 
{ 

  {
  if (M_E == 1) {
    M_E = 2;
  } else {

  }
  if (T1_E == 1) {
    T1_E = 2;
  } else {

  }
  if (T2_E == 1) {
    T2_E = 2;
  } else {

  }
  if (T3_E == 1) {
    T3_E = 2;
  } else {

  }
  if (T4_E == 1) {
    T4_E = 2;
  } else {

  }
  if (T5_E == 1) {
    T5_E = 2;
  } else {

  }
  if (T6_E == 1) {
    T6_E = 2;
  } else {

  }
  if (T7_E == 1) {
    T7_E = 2;
  } else {

  }
  if (T8_E == 1) {
    T8_E = 2;
  } else {

  }
  if (T9_E == 1) {
    T9_E = 2;
  } else {

  }
  if (T10_E == 1) {
    T10_E = 2;
  } else {

  }
  if (E_M == 1) {
    E_M = 2;
  } else {

  }
  if (E_1 == 1) {
    E_1 = 2;
  } else {

  }
  if (E_2 == 1) {
    E_2 = 2;
  } else {

  }
  if (E_3 == 1) {
    E_3 = 2;
  } else {

  }
  if (E_4 == 1) {
    E_4 = 2;
  } else {

  }
  if (E_5 == 1) {
    E_5 = 2;
  } else {

  }
  if (E_6 == 1) {
    E_6 = 2;
  } else {

  }
  if (E_7 == 1) {
    E_7 = 2;
  } else {

  }
  if (E_8 == 1) {
    E_8 = 2;
  } else {

  }
  if (E_9 == 1) {
    E_9 = 2;
  } else {

  }
  if (E_10 == 1) {
    E_10 = 2;
  } else {

  }

  
}
}
void activate_threads() 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  {
  tmp = is_master_triggered();
  }
  if (tmp) {
    m_st = 0;
  } else {

  }
  {
  tmp___0 = is_transmit1_triggered();
  }
  if (tmp___0) {
    t1_st = 0;
  } else {

  }
  {
  tmp___1 = is_transmit2_triggered();
  }
  if (tmp___1) {
    t2_st = 0;
  } else {

  }
  {
  tmp___2 = is_transmit3_triggered();
  }
  if (tmp___2) {
    t3_st = 0;
  } else {

  }
  {
  tmp___3 = is_transmit4_triggered();
  }
  if (tmp___3) {
    t4_st = 0;
  } else {

  }
  {
  tmp___4 = is_transmit5_triggered();
  }
  if (tmp___4) {
    t5_st = 0;
  } else {

  }
  {
  tmp___5 = is_transmit6_triggered();
  }
  if (tmp___5) {
    t6_st = 0;
  } else {

  }
  {
  tmp___6 = is_transmit7_triggered();
  }
  if (tmp___6) {
    t7_st = 0;
  } else {

  }
  {
  tmp___7 = is_transmit8_triggered();
  }
  if (tmp___7) {
    t8_st = 0;
  } else {

  }
  {
  tmp___8 = is_transmit9_triggered();
  }
  if (tmp___8) {
    t9_st = 0;
  } else {

  }
  {
  tmp___9 = is_transmit10_triggered();
  }
  if (tmp___9) {
    t10_st = 0;
  } else {

  }

  
}
}
void immediate_notify() 
{ 

  {
  {
  activate_threads();
  }

  
}
}
void fire_time_events() 
{ 

  {
  M_E = 1;

  
}
}
void reset_time_events() 
{ 

  {
  if (M_E == 1) {
    M_E = 2;
  } else {

  }
  if (T1_E == 1) {
    T1_E = 2;
  } else {

  }
  if (T2_E == 1) {
    T2_E = 2;
  } else {

  }
  if (T3_E == 1) {
    T3_E = 2;
  } else {

  }
  if (T4_E == 1) {
    T4_E = 2;
  } else {

  }
  if (T5_E == 1) {
    T5_E = 2;
  } else {

  }
  if (T6_E == 1) {
    T6_E = 2;
  } else {

  }
  if (T7_E == 1) {
    T7_E = 2;
  } else {

  }
  if (T8_E == 1) {
    T8_E = 2;
  } else {

  }
  if (T9_E == 1) {
    T9_E = 2;
  } else {

  }
  if (T10_E == 1) {
    T10_E = 2;
  } else {

  }
  if (E_M == 1) {
    E_M = 2;
  } else {

  }
  if (E_1 == 1) {
    E_1 = 2;
  } else {

  }
  if (E_2 == 1) {
    E_2 = 2;
  } else {

  }
  if (E_3 == 1) {
    E_3 = 2;
  } else {

  }
  if (E_4 == 1) {
    E_4 = 2;
  } else {

  }
  if (E_5 == 1) {
    E_5 = 2;
  } else {

  }
  if (E_6 == 1) {
    E_6 = 2;
  } else {

  }
  if (E_7 == 1) {
    E_7 = 2;
  } else {

  }
  if (E_8 == 1) {
    E_8 = 2;
  } else {

  }
  if (E_9 == 1) {
    E_9 = 2;
  } else {

  }
  if (E_10 == 1) {
    E_10 = 2;
  } else {

  }

  
}
}
void init_model() 
{ 

  {
  m_i = 1;
  t1_i = 1;
  t2_i = 1;
  t3_i = 1;
  t4_i = 1;
  t5_i = 1;
  t6_i = 1;
  t7_i = 1;
  t8_i = 1;
  t9_i = 1;
  t10_i = 1;

  
}
}
int stop_simulation() 
{ int tmp ;
  int __retres2 ;

  {
  {
  tmp = exists_runnable_thread();
  }
  if (tmp) {
    __retres2 = 0;
    goto return_label;
  } else {

  }
  __retres2 = 1;
  return_label: ;/* CIL Label */ 
  return (__retres2);
}
}
void start_simulation() 
{ int kernel_st ;
  int tmp ;
  int tmp___0 ;

  {
  {
  kernel_st = 0;
  update_channels();
  init_threads();
  fire_delta_events();
  activate_threads();
  reset_delta_events();
  }
  {
  while (1 < 2) {
    while_12_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_12_break;
    } else {

    }
  }
  {
    while_12_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_12_break;
    } else {

    }
  }
  {
    while_12_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_12_break;
    } else {

    }
  }
  {
    while_12_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_12_break;
    } else {

    }
  }
  {
    while_12_continue: /* CIL Label */ ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_12_break;
    } else {

    }
  }
  while_12_break: /* CIL Label */ ;
  }

  
}
}
int token_ring_10() 
{ int __retres1 ;

  {
  {
  init_model();
  start_simulation();
  }
  __retres1 = assert_1;
  return (__retres1);
}
}
