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

// Function: entry_0018a8c4
// Address: 0x18a8c4 - 0x18a8dc
void entry_0018a8c4_0x18a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a8c4_0x18a8c4");
#endif

    ctx->pc = 0x18a8c4u;

    // 0x18a8c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18a8c8: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18a8cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A8CCu;
    {
        const bool branch_taken_0x18a8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8CCu;
        // 0x18a8d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8cc) {
            ctx->pc = 0x18A8DCu;
            return;
        }
    }
    ctx->pc = 0x18A8D4u;
    // 0x18a8d4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18A8D4u;
    SET_GPR_U32(ctx, 31, 0x18A8DCu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18A8D4u, 0x18A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8DCu;
}
