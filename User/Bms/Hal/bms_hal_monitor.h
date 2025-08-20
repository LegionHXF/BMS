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
#ifndef __BMS_HAL_SAMPLE_H__
#define __BMS_HAL_SAMPLE_H__


#include <stdbool.h>

#include "bms_type.h"
#include "bms_config.h"


void Bms_HalMonitorCellVoltage(void);
void Bms_HalMonitorBatteryVoltage(void);
void Bms_HalMonitorBatteryCurrent(void);
void Bms_HalMonitorCellTemperature(void);
bool Bms_HalMonitorLoadDetect(void);


#endif

