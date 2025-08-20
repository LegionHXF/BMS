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
#include "bms_global.h"

BMS_GlobalParamTypedef BMS_GlobalParam = 
{
	.SysMode 			= BMS_MODE_STANDBY,
	.Cell_Real_Number 	= BMS_CELL_MAX,
	.Temp_Real_Number 	= BMS_TEMP_MAX,
	.Charge 			= BMS_STATE_DISABLE,
	.Discharge 			= BMS_STATE_DISABLE,
	.Balance		 	= BMS_STATE_DISABLE,
};



