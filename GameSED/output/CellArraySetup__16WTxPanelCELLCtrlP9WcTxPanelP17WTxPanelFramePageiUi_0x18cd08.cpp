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

// Function: CellArraySetup__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePageiUi
// Address: 0x18cd08 - 0x18ce34
void CellArraySetup__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePageiUi_0x18cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellArraySetup__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePageiUi_0x18cd08");
#endif

    switch (ctx->pc) {
        case 0x18cd6cu: goto label_18cd6c;
        case 0x18cd88u: goto label_18cd88;
        case 0x18cdb0u: goto label_18cdb0;
        default: break;
    }

    ctx->pc = 0x18cd08u;

    // 0x18cd08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18cd10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18cd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18cd18: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18cd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18cd20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18cd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18cd28: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18cd28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18cd30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18cd30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18cd38: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x18cd38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18cd40: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x18cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18cd44: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x18cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x18cd48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cd50: 0x96550040  lhu         $s5, 0x40($s2)
    ctx->pc = 0x18cd50u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x18cd54: 0x96570044  lhu         $s7, 0x44($s2)
    ctx->pc = 0x18cd54u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x18cd58: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CD58u;
    {
        const bool branch_taken_0x18cd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD58u;
        // 0x18cd5c: 0xae910008  sw          $s1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd58) {
            ctx->pc = 0x18CD64u;
            goto label_18cd64;
        }
    }
    ctx->pc = 0x18CD60u;
    // 0x18cd60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18cd64:
    // 0x18cd64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18CD64u;
    SET_GPR_U32(ctx, 31, 0x18CD6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18CD64u, 0x18CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD6Cu;
label_18cd6c:
    // 0x18cd6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CD6Cu;
    {
        const bool branch_taken_0x18cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD6Cu;
        // 0x18cd70: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd6c) {
            ctx->pc = 0x18CD88u;
            goto label_18cd88;
        }
    }
    ctx->pc = 0x18CD74u;
    // 0x18cd74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18cd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd7c: 0x24a580e8  addiu       $a1, $a1, -0x7F18
    ctx->pc = 0x18cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934760));
    // 0x18cd80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18CD80u;
    SET_GPR_U32(ctx, 31, 0x18CD88u);
    ctx->pc = 0x18CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD80u;
    // 0x18cd84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18CD80u, 0x18CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD88u;
label_18cd88:
    // 0x18cd88: 0x8eca000c  lw          $t2, 0xC($s6)
    ctx->pc = 0x18cd88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x18cd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd90: 0x8e490048  lw          $t1, 0x48($s2)
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18cd94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd98: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18cd9c: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CD9Cu;
    {
        const bool branch_taken_0x18cd9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD9Cu;
        // 0x18cda0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd9c) {
            ctx->pc = 0x18CDF4u;
            goto label_18cdf4;
        }
    }
    ctx->pc = 0x18CDA4u;
    // 0x18cda4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cda8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdac: 0x0  nop
    ctx->pc = 0x18cdacu;
    // NOP
label_18cdb0:
    // 0x18cdb0: 0x2e61021  addu        $v0, $s7, $a2
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x18cdb4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x18cdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdb8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x18cdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cdbc: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18CDBCu;
    {
        const bool branch_taken_0x18cdbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDBCu;
        // 0x18cdc0: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdbc) {
            ctx->pc = 0x18CDDCu;
            goto label_18cddc;
        }
    }
    ctx->pc = 0x18CDC4u;
    // 0x18cdc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18cdc8: 0x54b30005  bnel        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CDC8u;
    {
        const bool branch_taken_0x18cdc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 19));
        if (branch_taken_0x18cdc8) {
            ctx->pc = 0x18CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CDC8u;
            // 0x18cdcc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CDE0u;
            goto label_18cde0;
        }
    }
    ctx->pc = 0x18CDD0u;
    // 0x18cdd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdd8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_18cddc:
    // 0x18cddc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_18cde0:
    // 0x18cde0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x18cde0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cde4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x18cde4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cde8: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x18cde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cdec: 0x14e0fff0  bnez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18CDECu;
    {
        const bool branch_taken_0x18cdec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDECu;
        // 0x18cdf0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdec) {
            ctx->pc = 0x18CDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cdb0;
        }
    }
    ctx->pc = 0x18CDF4u;
label_18cdf4:
    // 0x18cdf4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18cdf8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x18cdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce00: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x18ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
    // 0x18ce04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ce08: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x18ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18ce0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ce10: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x18ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x18ce14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ce14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ce18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ce1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18ce1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ce20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18ce20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ce24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18ce28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE2Cu;
        // 0x18ce30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE34u;
}
