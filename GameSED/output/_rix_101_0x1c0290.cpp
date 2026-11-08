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

// Function: _rix_101
// Address: 0x1c0290 - 0x1c036c
void _rix_101_0x1c0290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_101_0x1c0290");
#endif

    switch (ctx->pc) {
        case 0x1c02d4u: goto label_1c02d4;
        default: break;
    }

    ctx->pc = 0x1c0290u;

    // 0x1c0290: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0290u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0294: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0294u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0298: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c029c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c029cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c02a0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c02a4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c02a8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c02a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c02ac: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c02b0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1c02b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c02b4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1c02b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c02b8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c02b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c02bc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1c02bcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c02c0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1c02c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1c02c4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c02c4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c02c8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c02cc: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C02CCu;
    {
        const bool branch_taken_0x1c02cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02CCu;
        // 0x1c02d0: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02cc) {
            ctx->pc = 0x1C034Cu;
            goto label_1c034c;
        }
    }
    ctx->pc = 0x1C02D4u;
label_1c02d4:
    // 0x1c02d4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c02d8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1c02dc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1c02dcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c02e0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1c02e0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c02e4: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1c02e4u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1c02e8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1c02e8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c02ec: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c02ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c02f0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1c02f0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c02f4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1c02f4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1c02f8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1c02f8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1c02fc: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1c02fcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c0300: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1c0300u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1c0304: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1c0304u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c0308: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1c0308u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1c030c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x1c030cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x1c0310: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x1c0310u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x1c0314: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x1c0314u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c0318: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x1c0318u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1c031c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1c031cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1c0320: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1c0320u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1c0324: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1c0324u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c0328: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1c0328u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c032c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1c032cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c0330: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1c0330u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1c0334: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1c0334u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1c0338: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1c0338u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c033c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1c033cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1c0340: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1c0340u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1c0344: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C0344u;
    {
        const bool branch_taken_0x1c0344 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0344u;
        // 0x1c0348: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0344) {
            ctx->pc = 0x1C02D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02d4;
        }
    }
    ctx->pc = 0x1C034Cu;
label_1c034c:
    // 0x1c034c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0350: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0354: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0358: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c0358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c035c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C035Cu;
    {
        const bool branch_taken_0x1c035c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c035c) {
            ctx->pc = 0x1C02D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02d4;
        }
    }
    ctx->pc = 0x1C0364u;
    // 0x1c0364: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C036Cu;
}
