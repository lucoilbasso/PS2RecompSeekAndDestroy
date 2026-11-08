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

// Function: entry_001c90a8
// Address: 0x1c90a8 - 0x1c90ac
void entry_001c90a8_0x1c90a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90a8_0x1c90a8");
#endif

    ctx->pc = 0x1c90a8u;

    // 0x1c90a8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x1c90acu;
}
