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

// Function: __tf8ApcMCard
// Address: 0x1d7f50 - 0x1d7fa0
void ps2___tf8ApcMCard_0x1d7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcMCard_0x1d7f50");
#endif

    switch (ctx->pc) {
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d7f8cu: goto label_1d7f8c;
        default: break;
    }

    ctx->pc = 0x1d7f50u;

    // 0x1d7f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d7f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f5c: 0x24500770  addiu       $s0, $v0, 0x770
    ctx->pc = 0x1d7f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    // 0x1d7f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410770u));
    // 0x1d7f64: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7F64u;
    {
        const bool branch_taken_0x1d7f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F64u;
        // 0x1d7f68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f64) {
            ctx->pc = 0x1D7F8Cu;
            goto label_1d7f8c;
        }
    }
    ctx->pc = 0x1D7F6Cu;
    // 0x1d7f6c: 0xc0770a8  jal         func_1DC2A0
    ctx->pc = 0x1D7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F74u);
    ctx->pc = 0x1DC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC2A0u, 0x1D7F6Cu, 0x1D7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F74u;
label_1d7f74:
    // 0x1d7f74: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7f78: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d7f7c: 0x24a54838  addiu       $a1, $a1, 0x4838
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18488));
    // 0x1d7f80: 0x24c614a0  addiu       $a2, $a2, 0x14A0
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5280));
    // 0x1d7f84: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D7F84u;
    SET_GPR_U32(ctx, 31, 0x1D7F8Cu);
    ctx->pc = 0x1D7F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F84u;
    // 0x1d7f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D7F84u, 0x1D7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F8Cu;
label_1d7f8c:
    // 0x1d7f8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F98u;
        // 0x1d7f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FA0u;
}
