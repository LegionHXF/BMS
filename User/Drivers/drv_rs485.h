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
#ifndef __DRV_RS485_H__
#define __DRV_RS485_H__


typedef enum
{
	RS485_ENABLE_PWR = 0u,
	RS485_DISABLE_PWR,
}RS485_PwrStateTypedef;



typedef enum
{
	RS485_RX = 0u,
	RS485_TX,
}RS485_TransmitStateTypedef;


void RS485_Initialize(void);
void RS485_PwrState(RS485_PwrStateTypedef NewState);
void RS485_TransmitState(RS485_TransmitStateTypedef NewState);


void RS485_TransmitTest(void);

#endif



