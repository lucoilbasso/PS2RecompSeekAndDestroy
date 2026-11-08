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

// Function: _ri0_101
// Address: 0x1c0370 - 0x1c0454
void _ri0_101_0x1c0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_101_0x1c0370");
#endif

    switch (ctx->pc) {
        case 0x1c0398u: goto label_1c0398;
        case 0x1c03b8u: goto label_1c03b8;
        default: break;
    }

    ctx->pc = 0x1c0370u;

    // 0x1c0370: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0370u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0374: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0374u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0378: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c037c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0380: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0384: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c0384u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0388: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1c0388u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c038c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c038cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0390: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1c0390u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1c0394: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0394u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1c0398:
    // 0x1c0398: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c039c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c039cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c03a0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c03a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c03a4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c03a4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c03a8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c03a8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c03ac: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1c03acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1c03b0: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C03B0u;
    {
        const bool branch_taken_0x1c03b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B0u;
        // 0x1c03b4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b0) {
            ctx->pc = 0x1C040Cu;
            goto label_1c040c;
        }
    }
    ctx->pc = 0x1C03B8u;
label_1c03b8:
    // 0x1c03b8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c03bc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1c03c0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c03c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c03c4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c03c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c03c8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c03c8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c03cc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c03ccu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c03d0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x1c03d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c03d4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c03d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c03d8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1c03d8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1c03dc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1c03dcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c03e0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1c03e0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1c03e4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c03e4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c03e8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1c03e8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c03ec: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1c03ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1c03f0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1c03f0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c03f4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1c03f4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1c03f8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1c03f8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1c03fc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c03fcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c0400: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1c0400u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1c0404: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C0404u;
    {
        const bool branch_taken_0x1c0404 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0404u;
        // 0x1c0408: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0404) {
            ctx->pc = 0x1C03B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c03b8;
        }
    }
    ctx->pc = 0x1C040Cu;
label_1c040c:
    // 0x1c040c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1c040cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1c0410: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c0414: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0418: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c0418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c041c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1c041cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1c0420: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C0420u;
    {
        const bool branch_taken_0x1c0420 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0420u;
        // 0x1c0424: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0420) {
            ctx->pc = 0x1C03B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c03b8;
        }
    }
    ctx->pc = 0x1C0428u;
    // 0x1c0428: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c042c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c042cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0430: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0434: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c0438: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c043c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c0440: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1c0440u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1c0444: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C0444u;
    {
        const bool branch_taken_0x1c0444 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0444u;
        // 0x1c0448: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0444) {
            ctx->pc = 0x1C0398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0398;
        }
    }
    ctx->pc = 0x1C044Cu;
    // 0x1c044c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C044Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0454u;
}
