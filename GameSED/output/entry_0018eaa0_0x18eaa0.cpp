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

// Function: entry_0018eaa0
// Address: 0x18eaa0 - 0x18eaa4
void entry_0018eaa0_0x18eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eaa0_0x18eaa0");
#endif

    ctx->pc = 0x18eaa0u;

    // 0x18eaa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x18eaa4u;
}
