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

// Function: entry_0010a7d0
// Address: 0x10a7d0 - 0x10a7e8
void entry_0010a7d0_0x10a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a7d0_0x10a7d0");
#endif

    switch (ctx->pc) {
        case 0x10a7dcu: goto label_10a7dc;
        default: break;
    }

    ctx->pc = 0x10a7d0u;

    // 0x10a7d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7d4: 0xc04292e  jal         func_10A4B8
    ctx->pc = 0x10A7D4u;
    SET_GPR_U32(ctx, 31, 0x10A7DCu);
    ctx->pc = 0x10A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7D4u;
    // 0x10a7d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4B8u, 0x10A7D4u, 0x10A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7DCu;
label_10a7dc:
    // 0x10a7dc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x10A7DCu;
    {
        const bool branch_taken_0x10a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7DCu;
        // 0x10a7e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7dc) {
            ctx->pc = 0x10A8E0u;
            return;
        }
    }
    ctx->pc = 0x10A7E4u;
    // 0x10a7e4: 0x0  nop
    ctx->pc = 0x10a7e4u;
    // NOP
    ctx->pc = 0x10a7e8u;
}
