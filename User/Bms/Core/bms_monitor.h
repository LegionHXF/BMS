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
#ifndef __BMS_MONITOR_H__
#define __BMS_MONITOR_H__


#include <stdbool.h>

#include "bms_type.h"


typedef struct
{
	float CellVoltage; 		// 电芯电压(V)
	uint32_t CellNumber;	// 电芯的编号
}BMS_CellDataTypedef;


typedef struct
{
	float CellTemp[BMS_TEMP_MAX];					// 采样温度,温度数据会从小到大排序(℃)  芯片可能有多路温度 BMS_TEMP_MAX数组 
	float BatteryVoltage;							// 电池总电压(V)
	float BatteryCurrent;							// 电池组电流(A)
	BMS_CellDataTypedef CellData[BMS_CELL_MAX]; 	// 电芯数据,电压数据会从小到大排序
	float CellVoltage[BMS_CELL_MAX]; 				// 电芯电压,未排序的
	uint32_t CellTempEffectiveNumber;				// 有效值的温度数量
}BMS_MonitorDataTypedef;


extern BMS_MonitorDataTypedef BMS_MonitorData;


void BMS_MonitorInit(void);
void BMS_MonitorStateCellVoltage(BMS_StateTypedef NewState);
void BMS_MonitorStateBatVoltage(BMS_StateTypedef NewState);
void BMS_MonitorStateBatCurrent(BMS_StateTypedef NewState);
void BMS_MonitorStateCellTemp(BMS_StateTypedef NewState);

void BMS_MonitorHwCurrent(void);


#endif


