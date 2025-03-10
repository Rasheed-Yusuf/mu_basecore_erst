/** @file MockIoLib.cpp
  Google Test mocks for IoLib

  Copyright (c) 2023, Intel Corporation. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <GoogleTest/Library/MockIoLib.h>

MOCK_INTERFACE_DEFINITION (MockIoLib);

MOCK_FUNCTION_DEFINITION (MockIoLib, IoRead8, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWrite8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoReadFifo8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWriteFifo8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoOr8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAnd8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAndThenOr8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldRead8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldWrite8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldOr8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAnd8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAndThenOr8, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoRead16, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWrite16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoReadFifo16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWriteFifo16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoOr16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAnd16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAndThenOr16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldRead16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldWrite16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldOr16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAnd16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAndThenOr16, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoRead32, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWrite32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoReadFifo32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWriteFifo32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoOr32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAnd32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAndThenOr32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldRead32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldWrite32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldOr32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAnd32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAndThenOr32, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoRead64, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoWrite64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoOr64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAnd64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoAndThenOr64, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldRead64, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldWrite64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldOr64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAnd64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, IoBitFieldAndThenOr64, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioRead8, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWrite8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioOr8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAnd8, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAndThenOr8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldRead8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldWrite8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldOr8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAnd8, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAndThenOr8, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioRead16, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWrite16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioOr16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAnd16, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAndThenOr16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldRead16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldWrite16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldOr16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAnd16, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAndThenOr16, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioRead32, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWrite32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioOr32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAnd32, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAndThenOr32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldRead32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldWrite32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldOr32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAnd32, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAndThenOr32, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioRead64, 1, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWrite64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioOr64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAnd64, 2, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioAndThenOr64, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldRead64, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldWrite64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldOr64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAnd64, 4, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioBitFieldAndThenOr64, 5, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioReadBuffer8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioReadBuffer16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioReadBuffer32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioReadBuffer64, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWriteBuffer8, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWriteBuffer16, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWriteBuffer32, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIoLib, MmioWriteBuffer64, 3, EFIAPI);
