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

// Function: entry_0014c994
// Address: 0x14c994 - 0x14c9b0
void entry_0014c994_0x14c994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c994_0x14c994");
#endif

    ctx->pc = 0x14c994u;

    // 0x14c994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c99c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x14c9a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C9A0u;
    {
        const bool branch_taken_0x14c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A0u;
        // 0x14c9a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9a0) {
            ctx->pc = 0x14C9B0u;
            return;
        }
    }
    ctx->pc = 0x14C9A8u;
    // 0x14c9a8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14C9A8u;
    SET_GPR_U32(ctx, 31, 0x14C9B0u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14C9A8u, 0x14C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9B0u;
}
