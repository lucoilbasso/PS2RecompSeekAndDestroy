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

// Function: entry_001d16e0
// Address: 0x1d16e0 - 0x1d1700
void entry_001d16e0_0x1d16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d16e0_0x1d16e0");
#endif

    switch (ctx->pc) {
        case 0x1d16ecu: goto label_1d16ec;
        default: break;
    }

    ctx->pc = 0x1d16e0u;

    // 0x1d16e0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d16e4: 0xc0758e0  jal         func_1D6380
    ctx->pc = 0x1D16E4u;
    SET_GPR_U32(ctx, 31, 0x1D16ECu);
    ctx->pc = 0x1D6380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6380u, 0x1D16E4u, 0x1D16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16ECu;
label_1d16ec:
    // 0x1d16ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16ECu;
    {
        const bool branch_taken_0x1d16ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16ECu;
        // 0x1d16f0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16ec) {
            ctx->pc = 0x1D1700u;
            return;
        }
    }
    ctx->pc = 0x1D16F4u;
    // 0x1d16f4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x1d16f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d16f8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1D16F8u;
    {
        const bool branch_taken_0x1d16f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16F8u;
        // 0x1d16fc: 0x2455c3e8  addiu       $s5, $v0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16f8) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D1700u;
}
