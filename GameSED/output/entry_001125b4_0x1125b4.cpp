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

// Function: entry_001125b4
// Address: 0x1125b4 - 0x1125d8
void entry_001125b4_0x1125b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125b4_0x1125b4");
#endif

    switch (ctx->pc) {
        case 0x1125ccu: goto label_1125cc;
        default: break;
    }

    ctx->pc = 0x1125b4u;

    // 0x1125b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1125b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1125b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1125bc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1125BCu;
    {
        const bool branch_taken_0x1125bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125BCu;
        // 0x1125c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125bc) {
            ctx->pc = 0x1125D8u;
            return;
        }
    }
    ctx->pc = 0x1125C4u;
    // 0x1125c4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1125C4u;
    SET_GPR_U32(ctx, 31, 0x1125CCu);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1125C4u, 0x1125CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125CCu;
label_1125cc:
    // 0x1125cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1125CCu;
    {
        const bool branch_taken_0x1125cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125CCu;
        // 0x1125d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125cc) {
            ctx->pc = 0x1125ECu;
            return;
        }
    }
    ctx->pc = 0x1125D4u;
    // 0x1125d4: 0x0  nop
    ctx->pc = 0x1125d4u;
    // NOP
    ctx->pc = 0x1125d8u;
}
