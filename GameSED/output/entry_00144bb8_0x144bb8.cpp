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

// Function: entry_00144bb8
// Address: 0x144bb8 - 0x144bc8
void entry_00144bb8_0x144bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144bb8_0x144bb8");
#endif

    switch (ctx->pc) {
        case 0x144bc0u: goto label_144bc0;
        default: break;
    }

    ctx->pc = 0x144bb8u;

    // 0x144bb8: 0xc060a94  jal         func_182A50
    ctx->pc = 0x144BB8u;
    SET_GPR_U32(ctx, 31, 0x144BC0u);
    ctx->pc = 0x144BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BB8u;
    // 0x144bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A50u, 0x144BB8u, 0x144BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BC0u;
label_144bc0:
    // 0x144bc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144BC0u;
    {
        const bool branch_taken_0x144bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BC0u;
        // 0x144bc4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bc0) {
            ctx->pc = 0x144BE0u;
            return;
        }
    }
    ctx->pc = 0x144BC8u;
}
