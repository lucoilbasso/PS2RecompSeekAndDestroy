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

// Function: SeqClose__9ApcTestDr
// Address: 0x11acb8 - 0x11ad38
void SeqClose__9ApcTestDr_0x11acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqClose__9ApcTestDr_0x11acb8");
#endif

    switch (ctx->pc) {
        case 0x11acb8u: goto label_11acb8;
        case 0x11acbcu: goto label_11acbc;
        case 0x11acc0u: goto label_11acc0;
        case 0x11acc4u: goto label_11acc4;
        case 0x11acc8u: goto label_11acc8;
        case 0x11acccu: goto label_11accc;
        case 0x11acd0u: goto label_11acd0;
        case 0x11acd4u: goto label_11acd4;
        case 0x11acd8u: goto label_11acd8;
        case 0x11acdcu: goto label_11acdc;
        case 0x11ace0u: goto label_11ace0;
        case 0x11ace4u: goto label_11ace4;
        case 0x11ace8u: goto label_11ace8;
        case 0x11acecu: goto label_11acec;
        case 0x11acf0u: goto label_11acf0;
        case 0x11acf4u: goto label_11acf4;
        case 0x11acf8u: goto label_11acf8;
        case 0x11acfcu: goto label_11acfc;
        case 0x11ad00u: goto label_11ad00;
        case 0x11ad04u: goto label_11ad04;
        case 0x11ad08u: goto label_11ad08;
        case 0x11ad0cu: goto label_11ad0c;
        case 0x11ad10u: goto label_11ad10;
        case 0x11ad14u: goto label_11ad14;
        case 0x11ad18u: goto label_11ad18;
        case 0x11ad1cu: goto label_11ad1c;
        case 0x11ad20u: goto label_11ad20;
        case 0x11ad24u: goto label_11ad24;
        case 0x11ad28u: goto label_11ad28;
        case 0x11ad2cu: goto label_11ad2c;
        case 0x11ad30u: goto label_11ad30;
        case 0x11ad34u: goto label_11ad34;
        default: break;
    }

    ctx->pc = 0x11acb8u;

label_11acb8:
    // 0x11acb8: 0x8f868970  lw          $a2, -0x7690($gp)
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11acbc:
    // 0x11acbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11acc0:
    // 0x11acc0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_11acc4:
    if (ctx->pc == 0x11ACC4u) {
        ctx->pc = 0x11ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC0u;
        // 0x11acc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACC8u;
        goto label_11acc8;
    }
    ctx->pc = 0x11ACC0u;
    {
        const bool branch_taken_0x11acc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC0u;
        // 0x11acc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acc0) {
            ctx->pc = 0x11ACE4u;
            goto label_11ace4;
        }
    }
    ctx->pc = 0x11ACC8u;
label_11acc8:
    // 0x11acc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11accc:
    // 0x11accc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11acccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11acd0:
    // 0x11acd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11acd4:
    // 0x11acd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11acd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11acd8:
    // 0x11acd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11acdc:
    // 0x11acdc: 0x60f809  jalr        $v1
label_11ace0:
    if (ctx->pc == 0x11ACE0u) {
        ctx->pc = 0x11ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACDCu;
        // 0x11ace0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACE4u;
        goto label_11ace4;
    }
    ctx->pc = 0x11ACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11ACE4u);
        ctx->pc = 0x11ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACDCu;
        // 0x11ace0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACDCu, 0x11ACE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ACE4u;
label_11ace4:
    // 0x11ace4: 0x8f868974  lw          $a2, -0x768C($gp)
    ctx->pc = 0x11ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11ace8:
    // 0x11ace8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11acec:
    if (ctx->pc == 0x11ACECu) {
        ctx->pc = 0x11ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACE8u;
        // 0x11acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACF0u;
        goto label_11acf0;
    }
    ctx->pc = 0x11ACE8u;
    {
        const bool branch_taken_0x11ace8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACE8u;
        // 0x11acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ace8) {
            ctx->pc = 0x11AD08u;
            goto label_11ad08;
        }
    }
    ctx->pc = 0x11ACF0u;
label_11acf0:
    // 0x11acf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11acf4:
    // 0x11acf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11acf8:
    // 0x11acf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11acf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11acfc:
    // 0x11acfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11ad00:
    // 0x11ad00: 0x60f809  jalr        $v1
label_11ad04:
    if (ctx->pc == 0x11AD04u) {
        ctx->pc = 0x11AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD00u;
        // 0x11ad04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD08u;
        goto label_11ad08;
    }
    ctx->pc = 0x11AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AD08u);
        ctx->pc = 0x11AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD00u;
        // 0x11ad04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD00u, 0x11AD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AD08u;
label_11ad08:
    // 0x11ad08: 0x8f868978  lw          $a2, -0x7688($gp)
    ctx->pc = 0x11ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11ad0c:
    // 0x11ad0c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11ad10:
    if (ctx->pc == 0x11AD10u) {
        ctx->pc = 0x11AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD0Cu;
        // 0x11ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD14u;
        goto label_11ad14;
    }
    ctx->pc = 0x11AD0Cu;
    {
        const bool branch_taken_0x11ad0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD0Cu;
        // 0x11ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad0c) {
            ctx->pc = 0x11AD2Cu;
            goto label_11ad2c;
        }
    }
    ctx->pc = 0x11AD14u;
label_11ad14:
    // 0x11ad14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11ad18:
    // 0x11ad18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11ad1c:
    // 0x11ad1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11ad1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11ad20:
    // 0x11ad20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11ad24:
    // 0x11ad24: 0x60f809  jalr        $v1
label_11ad28:
    if (ctx->pc == 0x11AD28u) {
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD2Cu;
        goto label_11ad2c;
    }
    ctx->pc = 0x11AD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AD2Cu);
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD24u, 0x11AD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AD2Cu;
label_11ad2c:
    // 0x11ad2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ad30:
    // 0x11ad30: 0x3e00008  jr          $ra
label_11ad34:
    if (ctx->pc == 0x11AD34u) {
        ctx->pc = 0x11AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD30u;
        // 0x11ad34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD38u;
        goto label_fallthrough_0x11ad30;
    }
    ctx->pc = 0x11AD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD30u;
        // 0x11ad34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11ad30:
    ctx->pc = 0x11AD38u;
}
