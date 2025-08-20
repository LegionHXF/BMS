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
#ifndef __BMS_TYPE_H__
#define __BMS_TYPE_H__


#include <stdbool.h>

#include "bms_config.h"





typedef enum
{
	BMS_STATE_ENABLE,
	BMS_STATE_DISABLE
}BMS_StateTypedef;


typedef enum
{
	BMS_CELL_NULL		= 0x0000,
	BMS_CELL_INDEX1 	= 0x0001,
	BMS_CELL_INDEX2 	= 0x0002,
	BMS_CELL_INDEX3 	= 0x0004,
	BMS_CELL_INDEX4 	= 0x0008,
	BMS_CELL_INDEX5 	= 0x0010,
	BMS_CELL_INDEX6 	= 0x0020,
	BMS_CELL_INDEX7 	= 0x0040,
	BMS_CELL_INDEX8 	= 0x0080,
	BMS_CELL_INDEX9 	= 0x0100,
	BMS_CELL_INDEX10	= 0x0200,	
	BMS_CELL_INDEX11 	= 0x0400,
	BMS_CELL_INDEX12 	= 0x0800,
	BMS_CELL_INDEX13 	= 0x1000,
	BMS_CELL_INDEX14 	= 0x2000,
	BMS_CELL_INDEX15	= 0x4000,
	BMS_CELL_ALL		= 0x7FFF,
}BMS_CellIndexTypedef;








typedef enum
{
	BMS_MODE_NULL,
	BMS_MODE_CHARGE,	// 充电模式
	BMS_MODE_DISCHARGE,	// 放电模式
	BMS_MODE_STANDBY,	// 待机模式
	BMS_MODE_SLEEP,		// 睡眠模式
}BMS_SysModeTypedef;


typedef struct
{
	BMS_SysModeTypedef SysMode;	// 当前系统处于什么模式
	BMS_StateTypedef Charge;	// 充电状态
	BMS_StateTypedef Discharge;	// 放电状态
	BMS_StateTypedef Balance;	// 均衡状态
	
	uint8_t Cell_Real_Number;	// 电芯实时数量
	uint8_t Temp_Real_Number;	// 温度实时数量
}BMS_GlobalParamTypedef;



#endif


