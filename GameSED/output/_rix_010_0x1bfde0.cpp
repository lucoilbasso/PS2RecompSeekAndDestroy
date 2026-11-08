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

// Function: _rix_010
// Address: 0x1bfde0 - 0x1bfe8c
void _rix_010_0x1bfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_010_0x1bfde0");
#endif

    switch (ctx->pc) {
        case 0x1bfe0cu: goto label_1bfe0c;
        default: break;
    }

    ctx->pc = 0x1bfde0u;

    // 0x1bfde0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1bfde0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfde4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1bfde4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1bfde8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfdec: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfdecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfdf0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfdf4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfdf8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfdfc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfe00: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bfe04: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1bfe04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1bfe08: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1bfe08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfe0c:
    // 0x1bfe0c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1bfe0cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfe10: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1bfe10u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfe14: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bfe14u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfe18: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1bfe18u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1bfe1c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1bfe1cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1bfe20: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1bfe20u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bfe24: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfe24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfe28: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1bfe28u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bfe2c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1bfe2cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfe30: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1bfe30u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1bfe34: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1bfe34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bfe38: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1bfe38u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bfe3c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1bfe3cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1bfe40: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1bfe40u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1bfe44: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x1bfe44u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1bfe48: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x1bfe48u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x1bfe4c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x1bfe4cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x1bfe50: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x1bfe50u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x1bfe54: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1bfe54u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1bfe58: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1bfe58u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1bfe5c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1bfe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1bfe60: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1bfe64: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1BFE64u;
    {
        const bool branch_taken_0x1bfe64 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE64u;
        // 0x1bfe68: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe64) {
            ctx->pc = 0x1BFE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfe0c;
        }
    }
    ctx->pc = 0x1BFE6Cu;
    // 0x1bfe6c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bfe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bfe70: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bfe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bfe74: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfe74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfe78: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1bfe78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1bfe7c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1BFE7Cu;
    {
        const bool branch_taken_0x1bfe7c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE7Cu;
        // 0x1bfe80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe7c) {
            ctx->pc = 0x1BFE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfe0c;
        }
    }
    ctx->pc = 0x1BFE84u;
    // 0x1bfe84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFE8Cu;
}
