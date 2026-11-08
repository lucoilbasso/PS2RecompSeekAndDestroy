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

// Function: _ri0_001
// Address: 0x1bfd10 - 0x1bfddc
void _ri0_001_0x1bfd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_001_0x1bfd10");
#endif

    switch (ctx->pc) {
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd58u: goto label_1bfd58;
        default: break;
    }

    ctx->pc = 0x1bfd10u;

    // 0x1bfd10: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1bfd10u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfd14: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1bfd14u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1bfd18: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfd1c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfd20: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfd24: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfd28: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bfd2c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd30: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1bfd30u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1bfd34: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bfd34u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1bfd38:
    // 0x1bfd38: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfd3c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1bfd3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfd40: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1bfd40u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfd44: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1bfd44u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1bfd48: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1bfd48u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfd4c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1bfd4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1bfd50: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BFD50u;
    {
        const bool branch_taken_0x1bfd50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD50u;
        // 0x1bfd54: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd50) {
            ctx->pc = 0x1BFD94u;
            goto label_1bfd94;
        }
    }
    ctx->pc = 0x1BFD58u;
label_1bfd58:
    // 0x1bfd58: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1bfd5c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1bfd60: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1bfd60u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfd64: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1bfd64u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfd68: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1bfd68u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1bfd6c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1bfd6cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfd70: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x1bfd70u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1bfd74: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfd74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfd78: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1bfd78u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1bfd7c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1bfd7cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1bfd80: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1bfd80u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1bfd84: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1bfd84u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1bfd88: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1bfd88u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1bfd8c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BFD8Cu;
    {
        const bool branch_taken_0x1bfd8c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD8Cu;
        // 0x1bfd90: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd8c) {
            ctx->pc = 0x1BFD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfd58;
        }
    }
    ctx->pc = 0x1BFD94u;
label_1bfd94:
    // 0x1bfd94: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1bfd94u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1bfd98: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1bfd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1bfd9c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfda0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1bfda4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1bfda4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1bfda8: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BFDA8u;
    {
        const bool branch_taken_0x1bfda8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDA8u;
        // 0x1bfdac: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfda8) {
            ctx->pc = 0x1BFD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfd58;
        }
    }
    ctx->pc = 0x1BFDB0u;
    // 0x1bfdb0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfdb4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfdb8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfdbc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1bfdc0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1bfdc4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1bfdc8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1bfdc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1bfdcc: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BFDCCu;
    {
        const bool branch_taken_0x1bfdcc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDCCu;
        // 0x1bfdd0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdcc) {
            ctx->pc = 0x1BFD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfd38;
        }
    }
    ctx->pc = 0x1BFDD4u;
    // 0x1bfdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFDDCu;
}
