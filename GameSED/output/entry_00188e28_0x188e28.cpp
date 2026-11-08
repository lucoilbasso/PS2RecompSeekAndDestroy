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

// Function: entry_00188e28
// Address: 0x188e28 - 0x188e80
void entry_00188e28_0x188e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e28_0x188e28");
#endif

    switch (ctx->pc) {
        case 0x188e30u: goto label_188e30;
        default: break;
    }

    ctx->pc = 0x188e28u;

    // 0x188e28: 0xc061422  jal         func_185088
    ctx->pc = 0x188E28u;
    SET_GPR_U32(ctx, 31, 0x188E30u);
    ctx->pc = 0x188E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E28u;
    // 0x188e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x188E28u, 0x188E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E30u;
label_188e30:
    // 0x188e30: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e34: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x188e38: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x188e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188e3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188e40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x188e44: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e48: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x188e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x188e4c: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x188e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x188e50: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x188e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x188e54: 0x7ae20020  lq          $v0, 0x20($s7)
    ctx->pc = 0x188e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x188e58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188e58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188e5c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e64: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x188e68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x188e6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x188e70: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x188e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x188e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x188e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188e78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x188e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x188e7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x188e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x188e80u;
}
