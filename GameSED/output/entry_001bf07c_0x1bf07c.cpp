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

// Function: entry_001bf07c
// Address: 0x1bf07c - 0x1bf094
void entry_001bf07c_0x1bf07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf07c_0x1bf07c");
#endif

    switch (ctx->pc) {
        case 0x1bf08cu: goto label_1bf08c;
        default: break;
    }

    ctx->pc = 0x1bf07cu;

    // 0x1bf07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf080: 0x24a5b478  addiu       $a1, $a1, -0x4B88
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947960));
    // 0x1bf084: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF084u;
    SET_GPR_U32(ctx, 31, 0x1BF08Cu);
    ctx->pc = 0x1BF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF084u;
    // 0x1bf088: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF084u, 0x1BF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF08Cu;
label_1bf08c:
    // 0x1bf08c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1BF08Cu;
    {
        const bool branch_taken_0x1bf08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF08Cu;
        // 0x1bf090: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf08c) {
            ctx->pc = 0x1BF2E4u;
            return;
        }
    }
    ctx->pc = 0x1BF094u;
}
