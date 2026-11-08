#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001ce034
// Address: 0x1ce034 - 0x1ce038
void entry_001ce034_0x1ce034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce034_0x1ce034");
#endif

    ctx->pc = 0x1ce034u;

    // 0x1ce034: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x1ce034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
    ctx->pc = 0x1ce038u;
}
