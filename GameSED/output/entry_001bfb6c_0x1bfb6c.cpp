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

// Function: entry_001bfb6c
// Address: 0x1bfb6c - 0x1bfbbc
void entry_001bfb6c_0x1bfb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfb6c_0x1bfb6c");
#endif

    ctx->pc = 0x1bfb6cu;

label_1bfb6c:
    // 0x1bfb6c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfb70: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfb70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfb74: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1bfb74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfb78: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1bfb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1bfb7c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1bfb7cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfb80: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1bfb80u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bfb84: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1bfb84u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1bfb88: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x1bfb88u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x1bfb8c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1bfb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1bfb90: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x1bfb90u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x1bfb94: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BFB94u;
    {
        const bool branch_taken_0x1bfb94 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb94) {
            ctx->pc = 0x1BFB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfb6c;
        }
    }
    ctx->pc = 0x1BFB9Cu;
    // 0x1bfb9c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bfb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bfba0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bfba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bfba4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfba8: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x1bfba8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x1bfbac: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BFBACu;
    {
        const bool branch_taken_0x1bfbac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBACu;
        // 0x1bfbb0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbac) {
            ctx->pc = 0x1BFB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfb6c;
        }
    }
    ctx->pc = 0x1BFBB4u;
    // 0x1bfbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFBBCu;
}
