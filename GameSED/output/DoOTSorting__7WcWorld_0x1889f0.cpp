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

// Function: DoOTSorting__7WcWorld
// Address: 0x1889f0 - 0x188a78
void DoOTSorting__7WcWorld_0x1889f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoOTSorting__7WcWorld_0x1889f0");
#endif

    switch (ctx->pc) {
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        default: break;
    }

    ctx->pc = 0x1889f0u;

label_1889f0:
    // 0x1889f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1889f4:
    // 0x1889f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1889f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1889f8:
    // 0x1889f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1889f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1889fc:
    // 0x1889fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1889fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188a00:
    // 0x188a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x188a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_188a04:
    // 0x188a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_188a08:
    // 0x188a08: 0x2651016c  addiu       $s1, $s2, 0x16C
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
label_188a0c:
    // 0x188a0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x188a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_188a10:
    // 0x188a10: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_188a14:
    // 0x188a14: 0x0  nop
    ctx->pc = 0x188a14u;
    // NOP
label_188a18:
    // 0x188a18: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x188a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_188a1c:
    // 0x188a1c: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
label_188a20:
    if (ctx->pc == 0x188A20u) {
        ctx->pc = 0x188A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A1Cu;
        // 0x188a20: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A24u;
        goto label_188a24;
    }
    ctx->pc = 0x188A1Cu;
    {
        const bool branch_taken_0x188a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a1c) {
            ctx->pc = 0x188A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A1Cu;
            // 0x188a20: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A54u;
            goto label_188a54;
        }
    }
    ctx->pc = 0x188A24u;
label_188a24:
    // 0x188a24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_188a28:
    // 0x188a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188a2c:
    // 0x188a2c: 0x8cd00120  lw          $s0, 0x120($a2)
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_188a30:
    // 0x188a30: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x188a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_188a34:
    // 0x188a34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188a38:
    // 0x188a38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188a3c:
    // 0x188a3c: 0x60f809  jalr        $v1
label_188a40:
    if (ctx->pc == 0x188A40u) {
        ctx->pc = 0x188A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A3Cu;
        // 0x188a40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A44u;
        goto label_188a44;
    }
    ctx->pc = 0x188A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188A44u);
        ctx->pc = 0x188A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A3Cu;
        // 0x188a40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A3Cu, 0x188A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188A44u;
label_188a44:
    // 0x188a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188a48:
    // 0x188a48: 0x54c0fff7  bnel        $a2, $zero, . + 4 + (-0x9 << 2)
label_188a4c:
    if (ctx->pc == 0x188A4Cu) {
        ctx->pc = 0x188A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A48u;
        // 0x188a4c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A50u;
        goto label_188a50;
    }
    ctx->pc = 0x188A48u;
    {
        const bool branch_taken_0x188a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a48) {
            ctx->pc = 0x188A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A48u;
            // 0x188a4c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a28;
        }
    }
    ctx->pc = 0x188A50u;
label_188a50:
    // 0x188a50: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_188a54:
    // 0x188a54: 0x661fff0  bgez        $s3, . + 4 + (-0x10 << 2)
label_188a58:
    if (ctx->pc == 0x188A58u) {
        ctx->pc = 0x188A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A54u;
        // 0x188a58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A5Cu;
        goto label_188a5c;
    }
    ctx->pc = 0x188A54u;
    {
        const bool branch_taken_0x188a54 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x188A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A54u;
        // 0x188a58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a54) {
            ctx->pc = 0x188A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a18;
        }
    }
    ctx->pc = 0x188A5Cu;
label_188a5c:
    // 0x188a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188a60:
    // 0x188a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188a64:
    // 0x188a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188a68:
    // 0x188a68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x188a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_188a6c:
    // 0x188a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_188a70:
    // 0x188a70: 0x3e00008  jr          $ra
label_188a74:
    if (ctx->pc == 0x188A74u) {
        ctx->pc = 0x188A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A70u;
        // 0x188a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A78u;
        goto label_fallthrough_0x188a70;
    }
    ctx->pc = 0x188A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A70u;
        // 0x188a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188a70:
    ctx->pc = 0x188A78u;
}
