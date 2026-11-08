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

// Function: entry_001d6dfc
// Address: 0x1d6dfc - 0x1d6e20
void entry_001d6dfc_0x1d6dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6dfc_0x1d6dfc");
#endif

    switch (ctx->pc) {
        case 0x1d6e04u: goto label_1d6e04;
        default: break;
    }

    ctx->pc = 0x1d6dfcu;

    // 0x1d6dfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6DFCu;
    SET_GPR_U32(ctx, 31, 0x1D6E04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6DFCu, 0x1D6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E04u;
label_1d6e04:
    // 0x1d6e04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6E04u;
    {
        const bool branch_taken_0x1d6e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E04u;
        // 0x1d6e08: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e04) {
            ctx->pc = 0x1D6E20u;
            return;
        }
    }
    ctx->pc = 0x1D6E0Cu;
    // 0x1d6e0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e14: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x1d6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
    // 0x1d6e18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6E18u;
    SET_GPR_U32(ctx, 31, 0x1D6E20u);
    ctx->pc = 0x1D6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E18u;
    // 0x1d6e1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6E18u, 0x1D6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E20u;
}
