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

// Function: entry_001c0848
// Address: 0x1c0848 - 0x1c0894
void entry_001c0848_0x1c0848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0848_0x1c0848");
#endif

    ctx->pc = 0x1c0848u;

label_1c0848:
    // 0x1c0848: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1c0848u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c084c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1c084cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1c0850: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x1c0850u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0854: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c0858: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1c0858u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c085c: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x1c085cu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x1c0860: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1c0860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c0864: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x1c0864u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1c0868: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x1c0868u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1c086c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1c086cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c0870: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x1c0870u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x1c0874: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c0874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c0878: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1c0878u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1c087c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1c0880: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x1c0880u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0884: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C0884u;
    {
        const bool branch_taken_0x1c0884 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0884u;
        // 0x1c0888: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0884) {
            ctx->pc = 0x1C0848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0848;
        }
    }
    ctx->pc = 0x1C088Cu;
    // 0x1c088c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0894u;
}
