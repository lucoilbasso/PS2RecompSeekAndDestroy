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

// Function: entry_0018db68
// Address: 0x18db68 - 0x18db78
void entry_0018db68_0x18db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db68_0x18db68");
#endif

    ctx->pc = 0x18db68u;

    // 0x18db68: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x18db6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18db70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18db74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18db74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x18db78u;
}
