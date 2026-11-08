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

// Function: entry_0019c728
// Address: 0x19c728 - 0x19c72c
void entry_0019c728_0x19c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c728_0x19c728");
#endif

    ctx->pc = 0x19c728u;

    // 0x19c728: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x19c728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x19c72cu;
}
