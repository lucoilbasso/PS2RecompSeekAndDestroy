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

// Function: entry_0014a590
// Address: 0x14a590 - 0x14a5b0
void entry_0014a590_0x14a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a590_0x14a590");
#endif

    ctx->pc = 0x14a590u;

    // 0x14a590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a598: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a5a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14a5a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x14a5ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x14a5b0u;
}
