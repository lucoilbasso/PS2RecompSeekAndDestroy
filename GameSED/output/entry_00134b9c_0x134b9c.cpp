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

// Function: entry_00134b9c
// Address: 0x134b9c - 0x134bb8
void entry_00134b9c_0x134b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b9c_0x134b9c");
#endif

    switch (ctx->pc) {
        case 0x134bb0u: goto label_134bb0;
        default: break;
    }

    ctx->pc = 0x134b9cu;

    // 0x134b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134ba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134ba4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba8: 0xc04e7a8  jal         func_139EA0
    ctx->pc = 0x134BA8u;
    SET_GPR_U32(ctx, 31, 0x134BB0u);
    ctx->pc = 0x134BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA8u;
    // 0x134bac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139EA0u, 0x134BA8u, 0x134BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BB0u;
label_134bb0:
    // 0x134bb0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x134BB0u;
    {
        const bool branch_taken_0x134bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB0u;
        // 0x134bb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb0) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134BB8u;
}
