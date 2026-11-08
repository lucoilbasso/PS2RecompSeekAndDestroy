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

// Function: entry_001bfc9c
// Address: 0x1bfc9c - 0x1bfcec
void entry_001bfc9c_0x1bfc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfc9c_0x1bfc9c");
#endif

    ctx->pc = 0x1bfc9cu;

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
}
