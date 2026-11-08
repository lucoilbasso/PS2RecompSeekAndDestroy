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

// Function: entry_0018ec24
// Address: 0x18ec24 - 0x18ec2c
void entry_0018ec24_0x18ec24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec24_0x18ec24");
#endif

    ctx->pc = 0x18ec24u;

    // 0x18ec24: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ec28: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x18ec2cu;
}
