/*
 * Copyright (C) 2021-2099 PLKJ Development Team
 *
 * SPDX-License-Identifier: CC BY-NC 4.0
 *
 * http://creativecommons.org/licenses/by-nc/4.0/
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __BMS_ENERGY_H__
#define __BMS_ENERGY_H__


#include <rtthread.h>

#include "bms_type.h"


typedef struct
{
	float SocStopChg;			// 停止充电SOC值
	float SocStartChg;			// 启动充电SOC值
	float SocStopDsg;			// 停止放电SOC值
	float SocStartDsg;			// 启动放电SOC值
	
	float BalanceStartVoltage;	// 均衡起始电压(V)
	float BalanceDiffeVoltage;	// 均衡差异电压(V)
	uint32_t BalanceCycleTime;	// 均衡周期时间(s)
	BMS_CellIndexTypedef BalanceRecord;	// 均衡记录,正在均衡的会被位与上
	bool BalanceReleaseFlag;			// 表示均衡释放,false:表示已不满足均衡条件,true:满足均衡条件
}BMS_EnergyDataTypedef;


extern BMS_EnergyDataTypedef BMS_EnergyData;


void BMS_EnergyInit(void);



#endif

