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

// Function: entry_001d4ce8
// Address: 0x1d4ce8 - 0x1d4cec
void entry_001d4ce8_0x1d4ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ce8_0x1d4ce8");
#endif

    ctx->pc = 0x1d4ce8u;

    // 0x1d4ce8: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1d4cecu;
}
