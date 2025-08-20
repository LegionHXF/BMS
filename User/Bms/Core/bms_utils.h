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
#ifndef __BMS_UTILS_H__
#define __BMS_UTILS_H__



#include <stdint.h>



void BubbleFloat(float a[], uint32_t n);


int binarySearch(uint16_t *nums, uint8_t left, uint8_t right, uint16_t target);
int right_bound(uint16_t *nums, uint16_t start_pos, uint16_t end_pos, uint16_t target);
int left_bound(uint16_t *nums, uint16_t start_pos, uint16_t end_pos, uint16_t target);

int cmp_int8_t(const void *e1, const void *e2);
int cmp_uint8_t(const void *e1, const void *e2);
int cmp_int16_t(const void *e1, const void *e2);
int cmp_uint16_t(const void *e1, const void *e2);
int cmp_float(const void *e1, const void *e2);
int cmp_double(const void *e1, const void *e2);
void swap(uint8_t *buf1, uint8_t *buf2, uint32_t width);
void BubbleSort(void *base, uint32_t sz, uint32_t width, int (*cmp)(void *e1, void *e2));




#endif



