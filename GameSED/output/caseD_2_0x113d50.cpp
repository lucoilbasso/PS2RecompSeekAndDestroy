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

// Function: caseD_2
// Address: 0x113d50 - 0x113d68
void caseD_2_0x113d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x113d50");
#endif

    ctx->pc = 0x113d50u;

    // 0x113d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113d5c: 0x8044f04  j           func_113C10
    ctx->pc = 0x113D5Cu;
    ctx->pc = 0x113D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D5Cu;
    // 0x113d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C10u;
    ApRscKeyPushModeWindow__Fb_0x113c10(rdram, ctx, runtime); return;
    ctx->pc = 0x113D64u;
    // 0x113d64: 0x0  nop
    ctx->pc = 0x113d64u;
    // NOP
    ctx->pc = 0x113d68u;
}
