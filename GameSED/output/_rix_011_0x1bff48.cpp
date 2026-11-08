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

// Function: _rix_011
// Address: 0x1bff48 - 0x1c0040
void _rix_011_0x1bff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_011_0x1bff48");
#endif

    switch (ctx->pc) {
        case 0x1bffacu: goto label_1bffac;
        default: break;
    }

    ctx->pc = 0x1bff48u;

    // 0x1bff48: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1bff48u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bff4c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1bff4cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1bff50: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1bff50u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1bff54: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bff58: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bff5c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bff60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bff64: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bff68: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1bff68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bff6c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1bff6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff70: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1bff70u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bff74: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1bff74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bff78: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bff78u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bff7c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1bff7cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bff80: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1bff80u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1bff84: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1bff84u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bff88: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1bff88u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bff8c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bff90: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1bff90u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bff94: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1bff94u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1bff98: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1bff98u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1bff9c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1bff9cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1bffa0: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1bffa0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1bffa4: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BFFA4u;
    {
        const bool branch_taken_0x1bffa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFA4u;
        // 0x1bffa8: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffa4) {
            ctx->pc = 0x1C0020u;
            goto label_1c0020;
        }
    }
    ctx->pc = 0x1BFFACu;
label_1bffac:
    // 0x1bffac: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1bffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1bffb0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1bffb4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1bffb4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bffb8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1bffb8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bffbc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bffbcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bffc0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1bffc0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1bffc4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1bffc4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1bffc8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1bffc8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bffcc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bffccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bffd0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1bffd0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bffd4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1bffd4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bffd8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1bffd8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1bffdc: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1bffdcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bffe0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1bffe0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bffe4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1bffe4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1bffe8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1bffe8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1bffec: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1bffecu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1bfff0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1bfff0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1bfff4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1bfff4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1bfff8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1bfff8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1bfffc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1bfffcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c0000: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1c0000u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1c0004: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x1c0004u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x1c0008: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x1c0008u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x1c000c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1c000cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1c0010: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1c0014: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1c0014u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1c0018: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C0018u;
    {
        const bool branch_taken_0x1c0018 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0018u;
        // 0x1c001c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0018) {
            ctx->pc = 0x1BFFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bffac;
        }
    }
    ctx->pc = 0x1C0020u;
label_1c0020:
    // 0x1c0020: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0024: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0028: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c002c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c002cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c0030: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C0030u;
    {
        const bool branch_taken_0x1c0030 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0030u;
        // 0x1c0034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0030) {
            ctx->pc = 0x1BFFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bffac;
        }
    }
    ctx->pc = 0x1C0038u;
    // 0x1c0038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0040u;
}
