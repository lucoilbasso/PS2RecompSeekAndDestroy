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

// Function: entry_001b7c7c
// Address: 0x1b7c7c - 0x1b7c84
void entry_001b7c7c_0x1b7c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7c7c_0x1b7c7c");
#endif

    ctx->pc = 0x1b7c7cu;

    // 0x1b7c7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7c80: 0x8c44bfec  lw          $a0, -0x4014($v0)
    ctx->pc = 0x1b7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BFECu));
    ctx->pc = 0x1b7c84u;
}
