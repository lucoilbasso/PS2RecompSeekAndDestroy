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

// Function: SetDataLineList__9ApcPtcLinPUiPP10WImageInfoiP13ST_EffectLineUi
// Address: 0x12df58 - 0x12dff8
void SetDataLineList__9ApcPtcLinPUiPP10WImageInfoiP13ST_EffectLineUi_0x12df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDataLineList__9ApcPtcLinPUiPP10WImageInfoiP13ST_EffectLineUi_0x12df58");
#endif

    switch (ctx->pc) {
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfccu: goto label_12dfcc;
        default: break;
    }

    ctx->pc = 0x12df58u;

    // 0x12df58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12df5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12df60: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12df60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12df68: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x12df68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12df70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12df70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12df78: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12df78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12df80: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df84: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DF84u;
    {
        const bool branch_taken_0x12df84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df84) {
            ctx->pc = 0x12DF94u;
            goto label_12df94;
        }
    }
    ctx->pc = 0x12DF8Cu;
    // 0x12df8c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DF8Cu;
    {
        const bool branch_taken_0x12df8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12df8c) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DF94u;
label_12df94:
    // 0x12df94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12DF94u;
    {
        const bool branch_taken_0x12df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF94u;
        // 0x12df98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df94) {
            ctx->pc = 0x12DFD8u;
            goto label_12dfd8;
        }
    }
    ctx->pc = 0x12DF9Cu;
    // 0x12df9c: 0x0  nop
    ctx->pc = 0x12df9cu;
    // NOP
label_12dfa0:
    // 0x12dfa0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x12DFA0u;
    {
        const bool branch_taken_0x12dfa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA0u;
        // 0x12dfa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfa0) {
            ctx->pc = 0x12DFD8u;
            goto label_12dfd8;
        }
    }
    ctx->pc = 0x12DFA8u;
label_12dfa8:
    // 0x12dfa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12DFACu;
    SET_GPR_U32(ctx, 31, 0x12DFB4u);
    ctx->pc = 0x12DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFACu;
    // 0x12dfb0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12DFACu, 0x12DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFB4u;
label_12dfb4:
    // 0x12dfb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12dfbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12dfc4: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12DFC4u;
    SET_GPR_U32(ctx, 31, 0x12DFCCu);
    ctx->pc = 0x12DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFC4u;
    // 0x12dfc8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x12DFC4u, 0x12DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12DFCCu;
    {
        const bool branch_taken_0x12dfcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFCCu;
        // 0x12dfd0: 0x8e3100c4  lw          $s1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfcc) {
            ctx->pc = 0x12DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dfa8;
        }
    }
    ctx->pc = 0x12DFD4u;
    // 0x12dfd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12dfd8:
    // 0x12dfd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dfdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dfdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dfe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dfe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12dfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dfe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12dfe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dfec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12dfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12dff0: 0x3e00008  jr          $ra
    ctx->pc = 0x12DFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFF0u;
        // 0x12dff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DFF8u;
}
