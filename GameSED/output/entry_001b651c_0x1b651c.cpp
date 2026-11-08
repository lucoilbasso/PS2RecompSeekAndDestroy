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

// Function: entry_001b651c
// Address: 0x1b651c - 0x1b6520
void entry_001b651c_0x1b651c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b651c_0x1b651c");
#endif

    ctx->pc = 0x1b651cu;

    // 0x1b651c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b651cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b6520u;
}
