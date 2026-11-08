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

// Function: _ri0_111
// Address: 0x1c0720 - 0x1c0834
void _ri0_111_0x1c0720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_111_0x1c0720");
#endif

    switch (ctx->pc) {
        case 0x1c0748u: goto label_1c0748;
        case 0x1c0780u: goto label_1c0780;
        default: break;
    }

    ctx->pc = 0x1c0720u;

    // 0x1c0720: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0720u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0724: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0724u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0728: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1c0728u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1c072c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c0730: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0734: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0738: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c0738u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c073c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1c073cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0740: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0744: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c0744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0748:
    // 0x1c0748: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c074c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c074cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0750: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0750u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0754: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0754u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0758: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0758u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c075c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c075cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0760: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0760u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c0764: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c0764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c0768: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1c0768u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1c076c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c076cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0770: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c0770u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0774: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c0774u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0778: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0778u;
    {
        const bool branch_taken_0x1c0778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0778u;
        // 0x1c077c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0778) {
            ctx->pc = 0x1C07ECu;
            goto label_1c07ec;
        }
    }
    ctx->pc = 0x1C0780u;
label_1c0780:
    // 0x1c0780: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1c0780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1c0784: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c0784u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0788: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0788u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c078c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c078cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0790: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0790u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0794: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c0794u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0798: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0798u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c079c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c079cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c07a0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c07a4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c07a4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c07a8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c07a8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c07ac: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c07acu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c07b0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1c07b0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c07b4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1c07b4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1c07b8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1c07b8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c07bc: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1c07bcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1c07c0: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x1c07c0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x1c07c4: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1c07c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c07c8: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1c07c8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1c07cc: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1c07ccu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c07d0: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1c07d0u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1c07d4: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1c07d4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1c07d8: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1c07dc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c07dcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c07e0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1c07e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1c07e4: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C07E4u;
    {
        const bool branch_taken_0x1c07e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07E4u;
        // 0x1c07e8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07e4) {
            ctx->pc = 0x1C0780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0780;
        }
    }
    ctx->pc = 0x1C07ECu;
label_1c07ec:
    // 0x1c07ec: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1c07ecu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1c07f0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c07f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c07f8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c07fc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1c07fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1c0800: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C0800u;
    {
        const bool branch_taken_0x1c0800 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0800u;
        // 0x1c0804: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0800) {
            ctx->pc = 0x1C0780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0780;
        }
    }
    ctx->pc = 0x1C0808u;
    // 0x1c0808: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c080c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0810: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0814: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c0814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c0818: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c081c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c0820: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1c0820u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1c0824: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1C0824u;
    {
        const bool branch_taken_0x1c0824 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0824u;
        // 0x1c0828: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0824) {
            ctx->pc = 0x1C0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0748;
        }
    }
    ctx->pc = 0x1C082Cu;
    // 0x1c082c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0834u;
}
