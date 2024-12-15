  m_SDC_Public_SDC_TASKCLASS20.SDC_Out.IDcFildForTcl20 = (CONV_CURRENT_FLOAT32)(-3.402E+38);
  STB_Retrigger_TaskClass20();
  STB_Retrigger_TaskClass30();
  if( m_STB_Private_STB_TASKCLASS20.STB_In.IDcFild < (CONV_CURRENT_FLOAT32)((-3.402E+38) - (0.00001f)) ||
      m_STB_Private_STB_TASKCLASS20.STB_In.IDcFild > (CONV_CURRENT_FLOAT32)((-3.402E+38) + (0.00001f)) )
  {
      Quicktest_WriteLog("ERROR|Testcase 4138: m_STB_Private_STB_TASKCLASS20.STB_In.IDcFild != -3.402E+38");
      Quicktest_err_cnt++;
      Quicktest_Func_nr = 4138;
  }