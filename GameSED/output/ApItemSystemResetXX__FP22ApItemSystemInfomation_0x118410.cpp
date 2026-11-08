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

// Function: ApItemSystemResetXX__FP22ApItemSystemInfomation
// Address: 0x118410 - 0x118458
void ApItemSystemResetXX__FP22ApItemSystemInfomation_0x118410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemSystemResetXX__FP22ApItemSystemInfomation_0x118410");
#endif

    switch (ctx->pc) {
        case 0x118440u: goto label_118440;
        case 0x118448u: goto label_118448;
        default: break;
    }

    ctx->pc = 0x118410u;

    // 0x118410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11841c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11841cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x118420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x118424: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x118424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x118428: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x118428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x11842c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11842cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x118430: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x118430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x118434: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x118434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x118438: 0xc046334  jal         func_118CD0
    ctx->pc = 0x118438u;
    SET_GPR_U32(ctx, 31, 0x118440u);
    ctx->pc = 0x11843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118438u;
    // 0x11843c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CD0u, 0x118438u, 0x118440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118440u;
label_118440:
    // 0x118440: 0xc046286  jal         func_118A18
    ctx->pc = 0x118440u;
    SET_GPR_U32(ctx, 31, 0x118448u);
    ctx->pc = 0x118444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118440u;
    // 0x118444: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A18u, 0x118440u, 0x118448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118448u;
label_118448:
    // 0x118448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11844c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11844cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118450: 0x3e00008  jr          $ra
    ctx->pc = 0x118450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118450u;
        // 0x118454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118458u;
}
