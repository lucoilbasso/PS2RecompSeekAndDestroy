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

// Function: ApCMParaLockTracking__FP16CameraMotionWork
// Address: 0x142810 - 0x142878
void ApCMParaLockTracking__FP16CameraMotionWork_0x142810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMParaLockTracking__FP16CameraMotionWork_0x142810");
#endif

    switch (ctx->pc) {
        case 0x142834u: goto label_142834;
        case 0x142854u: goto label_142854;
        default: break;
    }

    ctx->pc = 0x142810u;

    // 0x142810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14281c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142820: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x142820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x142824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142828: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14282c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x14282Cu;
    SET_GPR_U32(ctx, 31, 0x142834u);
    ctx->pc = 0x142830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14282Cu;
    // 0x142830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x14282Cu, 0x142834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142834u;
label_142834:
    // 0x142834: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x142838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14283c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142840: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x142840u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x142844: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x142844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x142848: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14284c: 0xc050494  jal         func_141250
    ctx->pc = 0x14284Cu;
    SET_GPR_U32(ctx, 31, 0x142854u);
    ctx->pc = 0x142850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14284Cu;
    // 0x142850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x14284Cu, 0x142854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142854u;
label_142854:
    // 0x142854: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142858: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x142858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14285c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x14285cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x142860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142868: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14286c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14286cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142870: 0x3e00008  jr          $ra
    ctx->pc = 0x142870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142870u;
        // 0x142874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142878u;
}
