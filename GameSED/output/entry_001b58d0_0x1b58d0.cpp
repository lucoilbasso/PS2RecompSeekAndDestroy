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

// Function: entry_001b58d0
// Address: 0x1b58d0 - 0x1b58d8
void entry_001b58d0_0x1b58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58d0_0x1b58d0");
#endif

    ctx->pc = 0x1b58d0u;

    // 0x1b58d0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1b58d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1b58d4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b58d8u;
}
