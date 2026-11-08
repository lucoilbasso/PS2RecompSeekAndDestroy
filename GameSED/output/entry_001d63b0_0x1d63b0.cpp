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

// Function: entry_001d63b0
// Address: 0x1d63b0 - 0x1d63b4
void entry_001d63b0_0x1d63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d63b0_0x1d63b0");
#endif

    ctx->pc = 0x1d63b0u;

    // 0x1d63b0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x1d63b4u;
}
