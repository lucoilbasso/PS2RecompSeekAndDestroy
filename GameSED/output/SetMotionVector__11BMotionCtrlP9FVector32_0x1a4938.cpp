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

// Function: SetMotionVector__11BMotionCtrlP9FVector32
// Address: 0x1a4938 - 0x1a49a0
void SetMotionVector__11BMotionCtrlP9FVector32_0x1a4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionVector__11BMotionCtrlP9FVector32_0x1a4938");
#endif

    switch (ctx->pc) {
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        default: break;
    }

    ctx->pc = 0x1a4938u;

label_1a4938:
    // 0x1a4938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a493c:
    // 0x1a493c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a493cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4940:
    // 0x1a4940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4944:
    // 0x1a4944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4948:
    // 0x1a4948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a494c:
    // 0x1a494c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4950:
    // 0x1a4950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4954:
    if (ctx->pc == 0x1A4954u) {
        ctx->pc = 0x1A4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4950u;
        // 0x1a4954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4958u;
        goto label_1a4958;
    }
    ctx->pc = 0x1A4950u;
    {
        const bool branch_taken_0x1a4950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4950u;
        // 0x1a4954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4950) {
            ctx->pc = 0x1A4968u;
            goto label_1a4968;
        }
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0x40f809  jalr        $v0
label_1a495c:
    if (ctx->pc == 0x1A495Cu) {
        ctx->pc = 0x1A4960u;
        goto label_1a4960;
    }
    ctx->pc = 0x1A4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4958u, 0x1A4960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4960u;
label_1a4960:
    // 0x1a4960: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4964:
    if (ctx->pc == 0x1A4964u) {
        ctx->pc = 0x1A4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4960u;
        // 0x1a4964: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4968u;
        goto label_1a4968;
    }
    ctx->pc = 0x1A4960u;
    {
        const bool branch_taken_0x1a4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4960u;
        // 0x1a4964: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4960) {
            ctx->pc = 0x1A4980u;
            goto label_1a4980;
        }
    }
    ctx->pc = 0x1A4968u;
label_1a4968:
    // 0x1a4968: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a496c:
    // 0x1a496c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4970:
    // 0x1a4970: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a4974:
    // 0x1a4974: 0xc068186  jal         func_1A0618
label_1a4978:
    if (ctx->pc == 0x1A4978u) {
        ctx->pc = 0x1A4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4974u;
        // 0x1a4978: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A497Cu;
        goto label_1a497c;
    }
    ctx->pc = 0x1A4974u;
    SET_GPR_U32(ctx, 31, 0x1A497Cu);
    ctx->pc = 0x1A4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4974u;
    // 0x1a4978: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4974u, 0x1A497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A497Cu;
label_1a497c:
    // 0x1a497c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a4980:
    // 0x1a4980: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a4984:
    if (ctx->pc == 0x1A4984u) {
        ctx->pc = 0x1A4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4980u;
        // 0x1a4984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4988u;
        goto label_1a4988;
    }
    ctx->pc = 0x1A4980u;
    {
        const bool branch_taken_0x1a4980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4980) {
            ctx->pc = 0x1A4984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4980u;
            // 0x1a4984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4994u;
            goto label_1a4994;
        }
    }
    ctx->pc = 0x1A4988u;
label_1a4988:
    // 0x1a4988: 0x40f809  jalr        $v0
label_1a498c:
    if (ctx->pc == 0x1A498Cu) {
        ctx->pc = 0x1A498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4988u;
        // 0x1a498c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4990u;
        goto label_1a4990;
    }
    ctx->pc = 0x1A4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4990u);
        ctx->pc = 0x1A498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4988u;
        // 0x1a498c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4988u, 0x1A4990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4990u;
label_1a4990:
    // 0x1a4990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4994:
    // 0x1a4994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4998:
    // 0x1a4998: 0x3e00008  jr          $ra
label_1a499c:
    if (ctx->pc == 0x1A499Cu) {
        ctx->pc = 0x1A499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4998u;
        // 0x1a499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49A0u;
        goto label_fallthrough_0x1a4998;
    }
    ctx->pc = 0x1A4998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4998u;
        // 0x1a499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4998:
    ctx->pc = 0x1A49A0u;
}
