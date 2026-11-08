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

// Function: entry_0010225c
// Address: 0x10225c - 0x102278
void entry_0010225c_0x10225c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010225c_0x10225c");
#endif

    ctx->pc = 0x10225cu;

    // 0x10225c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10225Cu;
    {
        const bool branch_taken_0x10225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10225Cu;
        // 0x102260: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10225c) {
            ctx->pc = 0x102278u;
            return;
        }
    }
    ctx->pc = 0x102264u;
    // 0x102264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102268: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x102268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x10226c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102270: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102270u;
    SET_GPR_U32(ctx, 31, 0x102278u);
    ctx->pc = 0x102274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102270u;
    // 0x102274: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102270u, 0x102278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102278u;
}
