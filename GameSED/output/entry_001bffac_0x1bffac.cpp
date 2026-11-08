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

// Function: entry_001bffac
// Address: 0x1bffac - 0x1c0020
void entry_001bffac_0x1bffac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bffac_0x1bffac");
#endif

    ctx->pc = 0x1bffacu;

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
}
