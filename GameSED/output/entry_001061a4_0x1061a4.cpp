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

// Function: entry_001061a4
// Address: 0x1061a4 - 0x1061a8
void entry_001061a4_0x1061a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001061a4_0x1061a4");
#endif

    ctx->pc = 0x1061a4u;

    // 0x1061a4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1061a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1061a8u;
}
