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

// Function: WEntityWarpJob__FP5BcJobPv
// Address: 0x1866b8 - 0x186724
void WEntityWarpJob__FP5BcJobPv_0x1866b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityWarpJob__FP5BcJobPv_0x1866b8");
#endif

    switch (ctx->pc) {
        case 0x1866b8u: goto label_1866b8;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866c0u: goto label_1866c0;
        case 0x1866c4u: goto label_1866c4;
        case 0x1866c8u: goto label_1866c8;
        case 0x1866ccu: goto label_1866cc;
        case 0x1866d0u: goto label_1866d0;
        case 0x1866d4u: goto label_1866d4;
        case 0x1866d8u: goto label_1866d8;
        case 0x1866dcu: goto label_1866dc;
        case 0x1866e0u: goto label_1866e0;
        case 0x1866e4u: goto label_1866e4;
        case 0x1866e8u: goto label_1866e8;
        case 0x1866ecu: goto label_1866ec;
        case 0x1866f0u: goto label_1866f0;
        case 0x1866f4u: goto label_1866f4;
        case 0x1866f8u: goto label_1866f8;
        case 0x1866fcu: goto label_1866fc;
        case 0x186700u: goto label_186700;
        case 0x186704u: goto label_186704;
        case 0x186708u: goto label_186708;
        case 0x18670cu: goto label_18670c;
        case 0x186710u: goto label_186710;
        case 0x186714u: goto label_186714;
        case 0x186718u: goto label_186718;
        case 0x18671cu: goto label_18671c;
        case 0x186720u: goto label_186720;
        default: break;
    }

    ctx->pc = 0x1866b8u;

label_1866b8:
    // 0x1866b8: 0x8f828d5c  lw          $v0, -0x72A4($gp)
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937948)));
label_1866bc:
    // 0x1866bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1866c0:
    // 0x1866c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1866c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1866c4:
    // 0x1866c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1866c8:
    if (ctx->pc == 0x1866C8u) {
        ctx->pc = 0x1866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C4u;
        // 0x1866c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866CCu;
        goto label_1866cc;
    }
    ctx->pc = 0x1866C4u;
    {
        const bool branch_taken_0x1866c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C4u;
        // 0x1866c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c4) {
            ctx->pc = 0x186714u;
            goto label_186714;
        }
    }
    ctx->pc = 0x1866CCu;
label_1866cc:
    // 0x1866cc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1866d0:
    // 0x1866d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1866d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1866d4:
    // 0x1866d4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1866d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1866d8:
    // 0x1866d8: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1866dc:
    // 0x1866dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1866e0:
    if (ctx->pc == 0x1866E0u) {
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866DCu;
        // 0x1866e0: 0x8f828d5c  lw          $v0, -0x72A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866E4u;
        goto label_1866e4;
    }
    ctx->pc = 0x1866DCu;
    {
        const bool branch_taken_0x1866dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866DCu;
        // 0x1866e0: 0x8f828d5c  lw          $v0, -0x72A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866dc) {
            ctx->pc = 0x186708u;
            goto label_186708;
        }
    }
    ctx->pc = 0x1866E4u;
label_1866e4:
    // 0x1866e4: 0x8cc30124  lw          $v1, 0x124($a2)
    ctx->pc = 0x1866e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
label_1866e8:
    // 0x1866e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1866ec:
    if (ctx->pc == 0x1866ECu) {
        ctx->pc = 0x1866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E8u;
        // 0x1866ec: 0x8f858d58  lw          $a1, -0x72A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866F0u;
        goto label_1866f0;
    }
    ctx->pc = 0x1866E8u;
    {
        const bool branch_taken_0x1866e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E8u;
        // 0x1866ec: 0x8f858d58  lw          $a1, -0x72A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866e8) {
            ctx->pc = 0x186708u;
            goto label_186708;
        }
    }
    ctx->pc = 0x1866F0u;
label_1866f0:
    // 0x1866f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1866f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1866f4:
    // 0x1866f4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1866f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1866f8:
    // 0x1866f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1866fc:
    // 0x1866fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186700:
    // 0x186700: 0x60f809  jalr        $v1
label_186704:
    if (ctx->pc == 0x186704u) {
        ctx->pc = 0x186704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186700u;
        // 0x186704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186708u;
        goto label_186708;
    }
    ctx->pc = 0x186700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186708u);
        ctx->pc = 0x186704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186700u;
        // 0x186704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186700u, 0x186708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186708u;
label_186708:
    // 0x186708: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
label_18670c:
    if (ctx->pc == 0x18670Cu) {
        ctx->pc = 0x186710u;
        goto label_186710;
    }
    ctx->pc = 0x186708u;
    {
        const bool branch_taken_0x186708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186708) {
            ctx->pc = 0x1866D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1866d0;
        }
    }
    ctx->pc = 0x186710u;
label_186710:
    // 0x186710: 0xaf808d5c  sw          $zero, -0x72A4($gp)
    ctx->pc = 0x186710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937948), GPR_U32(ctx, 0));
label_186714:
    // 0x186714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186718:
    // 0x186718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18671c:
    // 0x18671c: 0x3e00008  jr          $ra
label_186720:
    if (ctx->pc == 0x186720u) {
        ctx->pc = 0x186720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18671Cu;
        // 0x186720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186724u;
        goto label_fallthrough_0x18671c;
    }
    ctx->pc = 0x18671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18671Cu;
        // 0x186720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18671Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18671c:
    ctx->pc = 0x186724u;
}
