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

// Function: ContSESoundCtrl__12ApContSECtrlii
// Address: 0x159fc0 - 0x15a0c4
void ContSESoundCtrl__12ApContSECtrlii_0x159fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ContSESoundCtrl__12ApContSECtrlii_0x159fc0");
#endif

    switch (ctx->pc) {
        case 0x15a050u: goto label_15a050;
        case 0x15a060u: goto label_15a060;
        case 0x15a0a0u: goto label_15a0a0;
        default: break;
    }

    ctx->pc = 0x159fc0u;

    // 0x159fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159fc4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x159fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x159fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159fd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x159fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159fdc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x159fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x159fe0: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x159FE0u;
    {
        const bool branch_taken_0x159fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE0u;
        // 0x159fe4: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fe0) {
            ctx->pc = 0x15A088u;
            goto label_15a088;
        }
    }
    ctx->pc = 0x159FE8u;
    // 0x159fe8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x159fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x159fec: 0x70a248e8  pminw       $t1, $a1, $v0
    ctx->pc = 0x159fecu;
    SET_GPR_VEC(ctx, 9, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x159ff0: 0x94800  sll         $t1, $t1, 0
    ctx->pc = 0x159ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
    // 0x159ff4: 0x278b8b34  addiu       $t3, $gp, -0x74CC
    ctx->pc = 0x159ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937396));
    // 0x159ff8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159ffc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x159ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a008: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x15a008u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x15a00c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15A00Cu;
    {
        const bool branch_taken_0x15a00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A00Cu;
        // 0x15a010: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a00c) {
            ctx->pc = 0x15A058u;
            goto label_15a058;
        }
    }
    ctx->pc = 0x15A014u;
    // 0x15a014: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x15a018: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x15a018u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a01c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x15a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15a020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a028: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15a02c: 0x3c090021  lui         $t1, 0x21
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33 << 16));
    // 0x15a030: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x15a030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15a034: 0x8d29a250  lw          $t1, -0x5DB0($t1)
    ctx->pc = 0x15a034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943312)));
    // 0x15a038: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15a038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a03c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x15a03cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15a040: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x15a040u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x15a044: 0xae090010  sw          $t1, 0x10($s0)
    ctx->pc = 0x15a044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 9));
    // 0x15a048: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x15A048u;
    SET_GPR_U32(ctx, 31, 0x15A050u);
    ctx->pc = 0x15A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A048u;
    // 0x15a04c: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x15A048u, 0x15A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A050u;
label_15a050:
    // 0x15a050: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15A050u;
    {
        const bool branch_taken_0x15a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A050u;
        // 0x15a054: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a050) {
            ctx->pc = 0x15A0ACu;
            goto label_15a0ac;
        }
    }
    ctx->pc = 0x15A058u;
label_15a058:
    // 0x15a058: 0xc0477d4  jal         func_11DF50
    ctx->pc = 0x15A058u;
    SET_GPR_U32(ctx, 31, 0x15A060u);
    ctx->pc = 0x11DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF50u, 0x15A058u, 0x15A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A060u;
label_15a060:
    // 0x15a060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a06c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a07c: 0x80477de  j           func_11DF78
    ctx->pc = 0x15A07Cu;
    ctx->pc = 0x15A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A07Cu;
    // 0x15a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF78u;
    CommandSePan__9ApcSndDrvii_0x11df78(rdram, ctx, runtime); return;
    ctx->pc = 0x15A084u;
    // 0x15a084: 0x0  nop
    ctx->pc = 0x15a084u;
    // NOP
label_15a088:
    // 0x15a088: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a08c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x15a08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a090: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A090u;
    {
        const bool branch_taken_0x15a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x15A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A090u;
        // 0x15a094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a090) {
            ctx->pc = 0x15A0ACu;
            goto label_15a0ac;
        }
    }
    ctx->pc = 0x15A098u;
    // 0x15a098: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x15A098u;
    SET_GPR_U32(ctx, 31, 0x15A0A0u);
    ctx->pc = 0x15A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A098u;
    // 0x15a09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A098u, 0x15A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0A0u;
label_15a0a0:
    // 0x15a0a0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x15a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x15a0a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15a0a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_15a0ac:
    // 0x15a0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a0b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15a0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0BCu;
        // 0x15a0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A0C4u;
}
