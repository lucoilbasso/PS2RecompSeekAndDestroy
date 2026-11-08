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

// Function: entry_0018852c
// Address: 0x18852c - 0x188564
void entry_0018852c_0x18852c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018852c_0x18852c");
#endif

    ctx->pc = 0x18852cu;

    // 0x18852c: 0x6a1ff56  bgez        $s5, . + 4 + (-0xAA << 2)
    ctx->pc = 0x18852Cu;
    {
        const bool branch_taken_0x18852c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x188530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18852Cu;
        // 0x188530: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18852c) {
            ctx->pc = 0x188288u;
            return;
        }
    }
    ctx->pc = 0x188534u;
    // 0x188534: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x188534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188538: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x188538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18853c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18853cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188540: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x188540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188544: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x188544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188548: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x188548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18854c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x18854cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188550: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x188550u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188554: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x188554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188558: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x188558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18855c: 0x3e00008  jr          $ra
    ctx->pc = 0x18855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18855Cu;
        // 0x188560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188564u;
}
