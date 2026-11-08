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

// Function: entry_001c0780
// Address: 0x1c0780 - 0x1c07ec
void entry_001c0780_0x1c0780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0780_0x1c0780");
#endif

    ctx->pc = 0x1c0780u;

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
}
