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

// Function: _ri0_110
// Address: 0x1c0530 - 0x1c0600
void _ri0_110_0x1c0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_110_0x1c0530");
#endif

    switch (ctx->pc) {
        case 0x1c0558u: goto label_1c0558;
        case 0x1c0560u: goto label_1c0560;
        default: break;
    }

    ctx->pc = 0x1c0530u;

    // 0x1c0530: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0530u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0534: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0534u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0538: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c053c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0540: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0540u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0544: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0548: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1c0548u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c054c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1c054cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0550: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0554: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c0558:
    // 0x1c0558: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c055c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1c055cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0560:
    // 0x1c0560: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c0560u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0564: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0564u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0568: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0568u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c056c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c056cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0570: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c0570u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0574: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0574u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c0578: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c0578u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c057c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c0580: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c0584: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c0584u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0588: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c0588u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c058c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c058cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0590: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1c0590u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0594: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1c0594u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1c0598: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c0598u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c059c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1c059cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c05a0: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1c05a0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1c05a4: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1c05a4u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c05a8: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1c05a8u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1c05ac: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1c05acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1c05b0: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c05b0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c05b4: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1c05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1c05b8: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C05B8u;
    {
        const bool branch_taken_0x1c05b8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B8u;
        // 0x1c05bc: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05b8) {
            ctx->pc = 0x1C0560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0560;
        }
    }
    ctx->pc = 0x1C05C0u;
    // 0x1c05c0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c05c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c05c4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c05c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c05c8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c05c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c05cc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c05ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c05d0: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C05D0u;
    {
        const bool branch_taken_0x1c05d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05D0u;
        // 0x1c05d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05d0) {
            ctx->pc = 0x1C0560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0560;
        }
    }
    ctx->pc = 0x1C05D8u;
    // 0x1c05d8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c05dc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c05e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c05e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c05e4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c05e8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c05ec: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c05ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c05f0: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C05F0u;
    {
        const bool branch_taken_0x1c05f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F0u;
        // 0x1c05f4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05f0) {
            ctx->pc = 0x1C0558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0558;
        }
    }
    ctx->pc = 0x1C05F8u;
    // 0x1c05f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C05F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C05F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0600u;
}
