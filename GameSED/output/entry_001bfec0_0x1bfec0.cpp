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

// Function: entry_001bfec0
// Address: 0x1bfec0 - 0x1bff48
void entry_001bfec0_0x1bfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfec0_0x1bfec0");
#endif

    ctx->pc = 0x1bfec0u;

label_1bfec0:
    // 0x1bfec0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1bfec0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfec4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1bfec4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfec8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1bfec8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1bfecc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bfeccu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfed0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1bfed0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfed4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1bfed4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1bfed8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfed8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfedc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bfee0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bfee4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1bfee4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfee8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1bfee8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfeec: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1bfeecu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bfef0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1bfef0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1bfef4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1bfef4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1bfef8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1bfef8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1bfefc: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1bfefcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1bff00: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BFF00u;
    {
        const bool branch_taken_0x1bff00 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF00u;
        // 0x1bff04: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff00) {
            ctx->pc = 0x1BFEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFF08u;
    // 0x1bff08: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1bff0c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1bff10: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bff14: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1bff14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1bff18: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1BFF18u;
    {
        const bool branch_taken_0x1bff18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF18u;
        // 0x1bff1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff18) {
            ctx->pc = 0x1BFEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFF20u;
    // 0x1bff20: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bff20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bff24: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bff24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bff28: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bff2c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1bff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1bff30: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1bff30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1bff34: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1bff38: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1BFF38u;
    {
        const bool branch_taken_0x1bff38 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF38u;
        // 0x1bff3c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff38) {
            ctx->pc = 0x1BFEB8u;
            return;
        }
    }
    ctx->pc = 0x1BFF40u;
    // 0x1bff40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF48u;
}
