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
#include "bms_hal_config.h"

#include "drv_softi2c_bq769x0.h"

void BMS_HalCfgSCDDelaySet(BMS_SCDDelayTypedef SCDDelay)
{
	BQ769X0_SCDDelaySet((BQ769X0_SCDDelayTypedef)SCDDelay);
}

void BMS_HalCfgOCDDelaySet(BMS_OCDDelayTypedef OCDDelay)
{
	BQ769X0_OCDDelaySet((BQ769X0_OCDDelayTypedef)OCDDelay);
}

void BMS_HalCfgUVDelaySet(BMS_UVDelayTypedef UVDelay)
{
	BQ769X0_UVDelaySet((BQ769X0_UVDelayTypedef)UVDelay);
}

void BMS_HalCfgOVDelaySet(BMS_OVDelayTypedef OVDelay)
{
	BQ769X0_OVDelaySet((BQ769X0_OVDelayTypedef)OVDelay);
}

void BMS_HalCfgUVPThresholdSet(uint16_t UVPThreshold)
{
	BQ769X0_UVPThresholdSet(UVPThreshold);
}

void BMS_HalCfgOVPThresholdSet(uint16_t OVPThreshold)
{
	BQ769X0_OVPThresholdSet(OVPThreshold);
}


