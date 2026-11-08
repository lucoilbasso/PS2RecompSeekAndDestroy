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

// Function: Cmd_ACTOR_MSG_Entry__FP15BsSCDEntControl
// Address: 0x136b98 - 0x136d38
void Cmd_ACTOR_MSG_Entry__FP15BsSCDEntControl_0x136b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_MSG_Entry__FP15BsSCDEntControl_0x136b98");
#endif

    switch (ctx->pc) {
        case 0x136bdcu: goto label_136bdc;
        case 0x136be8u: goto label_136be8;
        case 0x136c10u: goto label_136c10;
        case 0x136c44u: goto label_136c44;
        case 0x136c64u: goto label_136c64;
        case 0x136ca8u: goto label_136ca8;
        case 0x136cc8u: goto label_136cc8;
        case 0x136ce4u: goto label_136ce4;
        case 0x136d00u: goto label_136d00;
        case 0x136d10u: goto label_136d10;
        default: break;
    }

    ctx->pc = 0x136b98u;

    // 0x136b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136b9c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x136b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x136ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ba8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136bac: 0x2452fcb0  addiu       $s2, $v0, -0x350
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x136bb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136bbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136bc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136bc4: 0x8e540404  lw          $s4, 0x404($s2)
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x2400B4u));
    // 0x136bc8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x136bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136bcc: 0x10a30048  beq         $a1, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x136BCCu;
    {
        const bool branch_taken_0x136bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x136BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BCCu;
        // 0x136bd0: 0x8e330024  lw          $s3, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bcc) {
            ctx->pc = 0x136CF0u;
            goto label_136cf0;
        }
    }
    ctx->pc = 0x136BD4u;
    // 0x136bd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136BD4u;
    SET_GPR_U32(ctx, 31, 0x136BDCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136BD4u, 0x136BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BDCu;
label_136bdc:
    // 0x136bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136be0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x136BE0u;
    SET_GPR_U32(ctx, 31, 0x136BE8u);
    ctx->pc = 0x136BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BE0u;
    // 0x136be4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x136BE0u, 0x136BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BE8u;
label_136be8:
    // 0x136be8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136bec: 0x1603001a  bne         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x136BECu;
    {
        const bool branch_taken_0x136bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x136BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BECu;
        // 0x136bf0: 0xae420404  sw          $v0, 0x404($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bec) {
            ctx->pc = 0x136C58u;
            goto label_136c58;
        }
    }
    ctx->pc = 0x136BF4u;
    // 0x136bf4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x136bf8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x136bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x136bfc: 0x8c70007c  lw          $s0, 0x7C($v1)
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x136c00: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x136C00u;
    {
        const bool branch_taken_0x136c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C00u;
        // 0x136c04: 0x24110118  addiu       $s1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c00) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136C08u;
    // 0x136c08: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x136c0c: 0x0  nop
    ctx->pc = 0x136c0cu;
    // NOP
label_136c10:
    // 0x136c10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136c14: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136c18: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x136C18u;
    {
        const bool branch_taken_0x136c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x136C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C18u;
        // 0x136c1c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c18) {
            ctx->pc = 0x136C44u;
            goto label_136c44;
        }
    }
    ctx->pc = 0x136C20u;
    // 0x136c20: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x136c24: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x136C24u;
    {
        const bool branch_taken_0x136c24 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x136c24) {
            ctx->pc = 0x136C44u;
            goto label_136c44;
        }
    }
    ctx->pc = 0x136C2Cu;
    // 0x136c2c: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x136c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136C30u;
    {
        const bool branch_taken_0x136c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C30u;
        // 0x136c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c30) {
            ctx->pc = 0x136C44u;
            goto label_136c44;
        }
    }
    ctx->pc = 0x136C38u;
    // 0x136c38: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x136c3c: 0xc041228  jal         func_1048A0
    ctx->pc = 0x136C3Cu;
    SET_GPR_U32(ctx, 31, 0x136C44u);
    ctx->pc = 0x136C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C3Cu;
    // 0x136c40: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x136C3Cu, 0x136C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C44u;
label_136c44:
    // 0x136c44: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136C44u;
    {
        const bool branch_taken_0x136c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x136c44) {
            ctx->pc = 0x136C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C44u;
            // 0x136c48: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136c10;
        }
    }
    ctx->pc = 0x136C4Cu;
    // 0x136c4c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x136C4Cu;
    {
        const bool branch_taken_0x136c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C4Cu;
        // 0x136c50: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c4c) {
            ctx->pc = 0x136D14u;
            goto label_136d14;
        }
    }
    ctx->pc = 0x136C54u;
    // 0x136c54: 0x0  nop
    ctx->pc = 0x136c54u;
    // NOP
label_136c58:
    // 0x136c58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c5c: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x136C5Cu;
    SET_GPR_U32(ctx, 31, 0x136C64u);
    ctx->pc = 0x136C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C5Cu;
    // 0x136c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x136C5Cu, 0x136C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C64u;
label_136c64:
    // 0x136c64: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136c68: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x136C68u;
    {
        const bool branch_taken_0x136c68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C68u;
        // 0x136c6c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c68) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136C70u;
    // 0x136c70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x136c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136c74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136c78: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x136C78u;
    {
        const bool branch_taken_0x136c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x136C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C78u;
        // 0x136c7c: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c78) {
            ctx->pc = 0x136CD0u;
            goto label_136cd0;
        }
    }
    ctx->pc = 0x136C80u;
    // 0x136c80: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x136c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c84: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x136c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x136c88: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x136C88u;
    {
        const bool branch_taken_0x136c88 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x136c88) {
            ctx->pc = 0x136C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C88u;
            // 0x136c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136CACu;
            goto label_136cac;
        }
    }
    ctx->pc = 0x136C90u;
    // 0x136c90: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x136c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x136c94: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x136C94u;
    {
        const bool branch_taken_0x136c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c94) {
            ctx->pc = 0x136C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C94u;
            // 0x136c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136CACu;
            goto label_136cac;
        }
    }
    ctx->pc = 0x136C9Cu;
    // 0x136c9c: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x136c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x136ca0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x136CA0u;
    SET_GPR_U32(ctx, 31, 0x136CA8u);
    ctx->pc = 0x136CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA0u;
    // 0x136ca4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x136CA0u, 0x136CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA8u;
label_136ca8:
    // 0x136ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136cac:
    // 0x136cac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x136CACu;
    {
        const bool branch_taken_0x136cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cac) {
            ctx->pc = 0x136CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136CACu;
            // 0x136cb0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136D14u;
            goto label_136d14;
        }
    }
    ctx->pc = 0x136CB4u;
    // 0x136cb4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x136cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cbc: 0x24a56790  addiu       $a1, $a1, 0x6790
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26512));
    // 0x136cc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136CC8u;
    {
        const bool branch_taken_0x136cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC8u;
        // 0x136ccc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc8) {
            ctx->pc = 0x136D14u;
            goto label_136d14;
        }
    }
    ctx->pc = 0x136CD0u;
label_136cd0:
    // 0x136cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cd8: 0x24c667a8  addiu       $a2, $a2, 0x67A8
    ctx->pc = 0x136cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26536));
    // 0x136cdc: 0xc041606  jal         func_105818
    ctx->pc = 0x136CDCu;
    SET_GPR_U32(ctx, 31, 0x136CE4u);
    ctx->pc = 0x136CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CDCu;
    // 0x136ce0: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105818u, 0x136CDCu, 0x136CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CE4u;
label_136ce4:
    // 0x136ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136CE4u;
    {
        const bool branch_taken_0x136ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE4u;
        // 0x136ce8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ce4) {
            ctx->pc = 0x136D14u;
            goto label_136d14;
        }
    }
    ctx->pc = 0x136CECu;
    // 0x136cec: 0x0  nop
    ctx->pc = 0x136cecu;
    // NOP
label_136cf0:
    // 0x136cf0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136cf4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136cf8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x136CF8u;
    SET_GPR_U32(ctx, 31, 0x136D00u);
    ctx->pc = 0x136CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CF8u;
    // 0x136cfc: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x136CF8u, 0x136D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D00u;
label_136d00:
    // 0x136d00: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x136d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x136d04: 0xae420404  sw          $v0, 0x404($s2)
    ctx->pc = 0x136d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 2));
    // 0x136d08: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x136D08u;
    SET_GPR_U32(ctx, 31, 0x136D10u);
    ctx->pc = 0x136D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D08u;
    // 0x136d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x136D08u, 0x136D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D10u;
label_136d10:
    // 0x136d10: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x136d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_136d14:
    // 0x136d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136d18: 0xac5400b4  sw          $s4, 0xB4($v0)
    ctx->pc = 0x136d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 20));
    // 0x136d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136d28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136d2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136d30: 0x3e00008  jr          $ra
    ctx->pc = 0x136D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D30u;
        // 0x136d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136D38u;
}
