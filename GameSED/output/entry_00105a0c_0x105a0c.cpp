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

// Function: entry_00105a0c
// Address: 0x105a0c - 0x105a10
void entry_00105a0c_0x105a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105a0c_0x105a0c");
#endif

    ctx->pc = 0x105a0cu;

    // 0x105a0c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x105a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x105a10u;
}
