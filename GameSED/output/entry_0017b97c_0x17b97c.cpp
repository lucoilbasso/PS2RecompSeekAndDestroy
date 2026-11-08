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

// Function: entry_0017b97c
// Address: 0x17b97c - 0x17b988
void entry_0017b97c_0x17b97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b97c_0x17b97c");
#endif

    ctx->pc = 0x17b97cu;

    // 0x17b97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b980: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17b984: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    ctx->pc = 0x17b988u;
}
