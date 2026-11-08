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

// Function: StdCommandSpu2Tran__8WcSndStdPvT1Ui
// Address: 0x17af38 - 0x17b008
void StdCommandSpu2Tran__8WcSndStdPvT1Ui_0x17af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StdCommandSpu2Tran__8WcSndStdPvT1Ui_0x17af38");
#endif

    switch (ctx->pc) {
        case 0x17af70u: goto label_17af70;
        case 0x17af88u: goto label_17af88;
        case 0x17afc0u: goto label_17afc0;
        case 0x17afd8u: goto label_17afd8;
        default: break;
    }

    ctx->pc = 0x17af38u;

    // 0x17af38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17af3c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17af40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17af40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17af44: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17af48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17af4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17af50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17af54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17af54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17af5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17af5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17af64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af70:
    // 0x17af70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17af74: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AF74u;
    {
        const bool branch_taken_0x17af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF74u;
        // 0x17af78: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af74) {
            ctx->pc = 0x17AF90u;
            goto label_17af90;
        }
    }
    ctx->pc = 0x17AF7Cu;
    // 0x17af7c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17af80: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AF80u;
    SET_GPR_U32(ctx, 31, 0x17AF88u);
    ctx->pc = 0x17AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF80u;
    // 0x17af84: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AF80u, 0x17AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF88u;
label_17af88:
    // 0x17af88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AF88u;
    {
        const bool branch_taken_0x17af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF88u;
        // 0x17af8c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af88) {
            ctx->pc = 0x17AFA8u;
            goto label_17afa8;
        }
    }
    ctx->pc = 0x17AF90u;
label_17af90:
    // 0x17af90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17af94: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17af98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AF98u;
    {
        const bool branch_taken_0x17af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF98u;
        // 0x17af9c: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af98) {
            ctx->pc = 0x17AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17af70;
        }
    }
    ctx->pc = 0x17AFA0u;
    // 0x17afa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17afa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afa4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_17afa8:
    // 0x17afa8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x17afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x17afac: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x17afacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x17afb0: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x17afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17afb4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x17afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x17afb8: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17AFB8u;
    SET_GPR_U32(ctx, 31, 0x17AFC0u);
    ctx->pc = 0x17AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFB8u;
    // 0x17afbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7B8u, 0x17AFB8u, 0x17AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFC0u;
label_17afc0:
    // 0x17afc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17afc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17afc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afcc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x17afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17afd0: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x17AFD0u;
    SET_GPR_U32(ctx, 31, 0x17AFD8u);
    ctx->pc = 0x17AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFD0u;
    // 0x17afd4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x17AFD0u, 0x17AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFD8u;
label_17afd8:
    // 0x17afd8: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x17afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x17afdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17afe0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x17afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x17afe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17afe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17afe8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x17afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x17afec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17aff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17aff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17affc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b000: 0x3e00008  jr          $ra
    ctx->pc = 0x17B000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B000u;
        // 0x17b004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B008u;
}
