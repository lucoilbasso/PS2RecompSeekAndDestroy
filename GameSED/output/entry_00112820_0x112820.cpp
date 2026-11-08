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

// Function: entry_00112820
// Address: 0x112820 - 0x11283c
void entry_00112820_0x112820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112820_0x112820");
#endif

    ctx->pc = 0x112820u;

    // 0x112820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112824: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112824u;
    {
        const bool branch_taken_0x112824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112824u;
        // 0x112828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112824) {
            ctx->pc = 0x11283Cu;
            return;
        }
    }
    ctx->pc = 0x11282Cu;
    // 0x11282c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11282cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112830: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x112830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x112834: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112834u;
    SET_GPR_U32(ctx, 31, 0x11283Cu);
    ctx->pc = 0x112838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112834u;
    // 0x112838: 0x24a53e50  addiu       $a1, $a1, 0x3E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112834u, 0x11283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11283Cu;
}
