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

// Function: entry_001c0484
// Address: 0x1c0484 - 0x1c052c
void entry_001c0484_0x1c0484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0484_0x1c0484");
#endif

    ctx->pc = 0x1c0484u;

label_1c0484:
    // 0x1c0484: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1c0484u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0488: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1c0488u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c048c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c048cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0490: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1c0490u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1c0494: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1c0494u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1c0498: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1c0498u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c049c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c049cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c04a0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1c04a0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c04a4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c04a4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c04a8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1c04a8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1c04ac: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1c04acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c04b0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1c04b0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c04b4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1c04b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1c04b8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1c04b8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1c04bc: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x1c04bcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1c04c0: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x1c04c0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x1c04c4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x1c04c4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x1c04c8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x1c04c8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x1c04cc: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x1c04ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c04d0: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x1c04d0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1c04d4: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1c04d4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1c04d8: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1c04d8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1c04dc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1c04dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c04e0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1c04e0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c04e4: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1c04e4u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c04e8: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1c04e8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1c04ec: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1c04ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1c04f0: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1c04f0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c04f4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1c04f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1c04f8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1c04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1c04fc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c04fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c0500: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1c0504: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C0504u;
    {
        const bool branch_taken_0x1c0504 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0504u;
        // 0x1c0508: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0504) {
            ctx->pc = 0x1C0484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0484;
        }
    }
    ctx->pc = 0x1C050Cu;
    // 0x1c050c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0510: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0514: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0518: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1c0518u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c051c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C051Cu;
    {
        const bool branch_taken_0x1c051c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C051Cu;
        // 0x1c0520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c051c) {
            ctx->pc = 0x1C0484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0484;
        }
    }
    ctx->pc = 0x1C0524u;
    // 0x1c0524: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C052Cu;
}
