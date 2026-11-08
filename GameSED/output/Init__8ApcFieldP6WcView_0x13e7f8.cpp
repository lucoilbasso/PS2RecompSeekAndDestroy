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

// Function: Init__8ApcFieldP6WcView
// Address: 0x13e7f8 - 0x13e864
void Init__8ApcFieldP6WcView_0x13e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcFieldP6WcView_0x13e7f8");
#endif

    switch (ctx->pc) {
        case 0x13e80cu: goto label_13e80c;
        case 0x13e834u: goto label_13e834;
        case 0x13e854u: goto label_13e854;
        default: break;
    }

    ctx->pc = 0x13e7f8u;

    // 0x13e7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e804: 0xc043fc4  jal         func_10FF10
    ctx->pc = 0x13E804u;
    SET_GPR_U32(ctx, 31, 0x13E80Cu);
    ctx->pc = 0x13E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E804u;
    // 0x13e808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF10u, 0x13E804u, 0x13E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E80Cu;
label_13e80c:
    // 0x13e80c: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x13e810: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x13e810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x13e814: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13e814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13e818: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x13e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x13e81c: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x13e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x13e820: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x13e820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x13e824: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x13e824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x13e828: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x13e828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x13e82c: 0xc06727a  jal         func_19C9E8
    ctx->pc = 0x13E82Cu;
    SET_GPR_U32(ctx, 31, 0x13E834u);
    ctx->pc = 0x13E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E82Cu;
    // 0x13e830: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x13E82Cu, 0x13E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E834u;
label_13e834:
    // 0x13e834: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13e838: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13e838u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13e83c: 0xac200208  sw          $zero, 0x208($at)
    ctx->pc = 0x13e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 0));
    // 0x13e840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13e840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13e844: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13e848: 0xac20020c  sw          $zero, 0x20C($at)
    ctx->pc = 0x13e848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 0));
    // 0x13e84c: 0xc04fa1a  jal         func_13E868
    ctx->pc = 0x13E84Cu;
    SET_GPR_U32(ctx, 31, 0x13E854u);
    ctx->pc = 0x13E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E84Cu;
    // 0x13e850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E868u, 0x13E84Cu, 0x13E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E854u;
label_13e854:
    // 0x13e854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e858: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e85c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E85Cu;
        // 0x13e860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E864u;
}
