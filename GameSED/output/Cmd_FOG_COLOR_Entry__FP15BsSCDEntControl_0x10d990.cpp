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

// Function: Cmd_FOG_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x10d990 - 0x10daa4
void Cmd_FOG_COLOR_Entry__FP15BsSCDEntControl_0x10d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FOG_COLOR_Entry__FP15BsSCDEntControl_0x10d990");
#endif

    switch (ctx->pc) {
        case 0x10d9c0u: goto label_10d9c0;
        case 0x10d9dcu: goto label_10d9dc;
        case 0x10d9e8u: goto label_10d9e8;
        case 0x10d9f4u: goto label_10d9f4;
        case 0x10da1cu: goto label_10da1c;
        case 0x10da58u: goto label_10da58;
        default: break;
    }

    ctx->pc = 0x10d990u;

    // 0x10d990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d99c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10d9a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d9ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d9b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d9b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d9b8: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D9B8u;
    SET_GPR_U32(ctx, 31, 0x10D9C0u);
    ctx->pc = 0x10D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9B8u;
    // 0x10d9bc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D9B8u, 0x10D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9C0u;
label_10d9c0:
    // 0x10d9c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x10d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10d9c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10d9cc: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D9CCu;
    {
        const bool branch_taken_0x10d9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d9cc) {
            ctx->pc = 0x10D9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D9CCu;
            // 0x10d9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DA10u;
            goto label_10da10;
        }
    }
    ctx->pc = 0x10D9D4u;
    // 0x10d9d4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9D4u;
    SET_GPR_U32(ctx, 31, 0x10D9DCu);
    ctx->pc = 0x10D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9D4u;
    // 0x10d9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9D4u, 0x10D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9DCu;
label_10d9dc:
    // 0x10d9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9e0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9E0u;
    SET_GPR_U32(ctx, 31, 0x10D9E8u);
    ctx->pc = 0x10D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9E0u;
    // 0x10d9e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9E0u, 0x10D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9E8u;
label_10d9e8:
    // 0x10d9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9ec: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9ECu;
    SET_GPR_U32(ctx, 31, 0x10D9F4u);
    ctx->pc = 0x10D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9ECu;
    // 0x10d9f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9ECu, 0x10D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9F4u;
label_10d9f4:
    // 0x10d9f4: 0x926301dc  lbu         $v1, 0x1DC($s3)
    ctx->pc = 0x10d9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x10d9f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x10d9fc: 0x926401dd  lbu         $a0, 0x1DD($s3)
    ctx->pc = 0x10d9fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 477)));
    // 0x10da00: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x10da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x10da04: 0x926301de  lbu         $v1, 0x1DE($s3)
    ctx->pc = 0x10da04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 478)));
    // 0x10da08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10DA08u;
    {
        const bool branch_taken_0x10da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA08u;
        // 0x10da0c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da08) {
            ctx->pc = 0x10DA88u;
            goto label_10da88;
        }
    }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x266501dc  addiu       $a1, $s3, 0x1DC
    ctx->pc = 0x10da10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 476));
    // 0x10da14: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x10DA14u;
    SET_GPR_U32(ctx, 31, 0x10DA1Cu);
    ctx->pc = 0x10DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA14u;
    // 0x10da18: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x10DA14u, 0x10DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA1Cu;
label_10da1c:
    // 0x10da1c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10da20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10da20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10da24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10da28: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DA28u;
    {
        const bool branch_taken_0x10da28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA28u;
        // 0x10da2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da28) {
            ctx->pc = 0x10DA8Cu;
            goto label_10da8c;
        }
    }
    ctx->pc = 0x10DA30u;
    // 0x10da30: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x10da30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10da34: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x10da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x10da38: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10DA38u;
    {
        const bool branch_taken_0x10da38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10da38) {
            ctx->pc = 0x10DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DA38u;
            // 0x10da3c: 0x8e6301dc  lw          $v1, 0x1DC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DA80u;
            goto label_10da80;
        }
    }
    ctx->pc = 0x10DA40u;
    // 0x10da40: 0x8e6201e8  lw          $v0, 0x1E8($s3)
    ctx->pc = 0x10da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
    // 0x10da44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10da44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da48: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10DA48u;
    {
        const bool branch_taken_0x10da48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA48u;
        // 0x10da4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da48) {
            ctx->pc = 0x10DA8Cu;
            goto label_10da8c;
        }
    }
    ctx->pc = 0x10DA50u;
    // 0x10da50: 0x266501ec  addiu       $a1, $s3, 0x1EC
    ctx->pc = 0x10da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 492));
    // 0x10da54: 0x0  nop
    ctx->pc = 0x10da54u;
    // NOP
label_10da58:
    // 0x10da58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x10da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10da5c: 0x8e6301dc  lw          $v1, 0x1DC($s3)
    ctx->pc = 0x10da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x10da60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10da64: 0xac830178  sw          $v1, 0x178($a0)
    ctx->pc = 0x10da64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 3));
    // 0x10da68: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10da6c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10da6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10da70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10DA70u;
    {
        const bool branch_taken_0x10da70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA70u;
        // 0x10da74: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da70) {
            ctx->pc = 0x10DA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10da58;
        }
    }
    ctx->pc = 0x10DA78u;
    // 0x10da78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10DA78u;
    {
        const bool branch_taken_0x10da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA78u;
        // 0x10da7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da78) {
            ctx->pc = 0x10DA8Cu;
            goto label_10da8c;
        }
    }
    ctx->pc = 0x10DA80u;
label_10da80:
    // 0x10da80: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x10da84: 0xac430178  sw          $v1, 0x178($v0)
    ctx->pc = 0x10da84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 3));
label_10da88:
    // 0x10da88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10da88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10da8c:
    // 0x10da8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10da8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10da90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10da90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10da94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10da98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA9Cu;
        // 0x10daa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DAA4u;
}
