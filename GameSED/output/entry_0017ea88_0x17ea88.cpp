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

// Function: entry_0017ea88
// Address: 0x17ea88 - 0x17ea9c
void entry_0017ea88_0x17ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea88_0x17ea88");
#endif

    ctx->pc = 0x17ea88u;

    // 0x17ea88: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17ea8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EA8Cu;
    {
        const bool branch_taken_0x17ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA8Cu;
        // 0x17ea90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea8c) {
            ctx->pc = 0x17EA9Cu;
            return;
        }
    }
    ctx->pc = 0x17EA94u;
    // 0x17ea94: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EA94u;
    SET_GPR_U32(ctx, 31, 0x17EA9Cu);
    ctx->pc = 0x17EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA94u;
    // 0x17ea98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EA94u, 0x17EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA9Cu;
}
