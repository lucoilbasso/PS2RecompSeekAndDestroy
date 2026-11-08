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

// Function: _rix_001
// Address: 0x1bfc58 - 0x1bfd0c
void _rix_001_0x1bfc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_001_0x1bfc58");
#endif

    switch (ctx->pc) {
        case 0x1bfc9cu: goto label_1bfc9c;
        default: break;
    }

    ctx->pc = 0x1bfc58u;

    // 0x1bfc58: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1bfc58u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfc5c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1bfc5cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1bfc60: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfc64: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfc68: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bfc68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfc6c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfc6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfc70: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfc74: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x1bfc74u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bfc78: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1bfc78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfc7c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x1bfc80: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1bfc80u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfc84: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bfc84u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfc88: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1bfc88u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfc8c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1bfc8cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bfc90: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1bfc90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bfc94: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BFC94u;
    {
        const bool branch_taken_0x1bfc94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC94u;
        // 0x1bfc98: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc94) {
            ctx->pc = 0x1BFCECu;
            goto label_1bfcec;
        }
    }
    ctx->pc = 0x1BFC9Cu;
label_1bfc9c:
    // 0x1bfc9c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1bfca0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1bfca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1bfca4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1bfca4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfca8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1bfca8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfcac: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1bfcacu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1bfcb0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1bfcb0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bfcb4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfcb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfcb8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1bfcb8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bfcbc: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1bfcbcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1bfcc0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1bfcc0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1bfcc4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1bfcc4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1bfcc8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1bfcc8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1bfccc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1bfcccu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1bfcd0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1bfcd0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1bfcd4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x1bfcd4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x1bfcd8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x1bfcd8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x1bfcdc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1bfcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1bfce0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1bfce0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1bfce4: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BFCE4u;
    {
        const bool branch_taken_0x1bfce4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCE4u;
        // 0x1bfce8: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfce4) {
            ctx->pc = 0x1BFC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfc9c;
        }
    }
    ctx->pc = 0x1BFCECu;
label_1bfcec:
    // 0x1bfcec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bfcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bfcf0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bfcf4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfcf8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1bfcf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1bfcfc: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BFCFCu;
    {
        const bool branch_taken_0x1bfcfc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCFCu;
        // 0x1bfd00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcfc) {
            ctx->pc = 0x1BFC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfc9c;
        }
    }
    ctx->pc = 0x1BFD04u;
    // 0x1bfd04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD0Cu;
}
