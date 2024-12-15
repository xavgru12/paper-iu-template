#include "C:\TPTlocal\TestfallmitDatafield\SDC_Public_dfi.h"
#include "C:\TPTlocal\TestfallmitDatafield\STB_Private_dfi.h"
#include "C:\TPTlocal\TestfallmitDatafield\ZIL_STB_dfi.h"

static void STB_InputDataTcl20(void)
{
  DF_STB_In_Set_IDcFild         ( DF_ZIL_STB_In_Get_IDcFild() );
  //m_STB_Private_STB_TASKCLASS20.STB_In.IDcFild=
  //m_SDC_Public_SDC_TASKCLASS20.SDC_Out.IDcFildForTcl20;
}


