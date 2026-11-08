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

// Function: entry_001c15e0
// Address: 0x1c15e0 - 0x1c15e4
void entry_001c15e0_0x1c15e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c15e0_0x1c15e0");
#endif

    ctx->pc = 0x1c15e0u;

    // 0x1c15e0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1c15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x1c15e4u;
}
