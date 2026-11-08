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

// Function: entry_001a8f28
// Address: 0x1a8f28 - 0x1a8f2c
void entry_001a8f28_0x1a8f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f28_0x1a8f28");
#endif

    ctx->pc = 0x1a8f28u;

    // 0x1a8f28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1a8f2cu;
}
