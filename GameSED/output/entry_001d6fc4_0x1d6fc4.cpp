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

// Function: entry_001d6fc4
// Address: 0x1d6fc4 - 0x1d6fe8
void entry_001d6fc4_0x1d6fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6fc4_0x1d6fc4");
#endif

    switch (ctx->pc) {
        case 0x1d6fccu: goto label_1d6fcc;
        default: break;
    }

    ctx->pc = 0x1d6fc4u;

    // 0x1d6fc4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6FC4u;
    SET_GPR_U32(ctx, 31, 0x1D6FCCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6FC4u, 0x1D6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FCCu;
label_1d6fcc:
    // 0x1d6fcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6FCCu;
    {
        const bool branch_taken_0x1d6fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FCCu;
        // 0x1d6fd0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fcc) {
            ctx->pc = 0x1D6FE8u;
            return;
        }
    }
    ctx->pc = 0x1D6FD4u;
    // 0x1d6fd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fdc: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x1d6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
    // 0x1d6fe0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6FE0u;
    SET_GPR_U32(ctx, 31, 0x1D6FE8u);
    ctx->pc = 0x1D6FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6FE0u;
    // 0x1d6fe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6FE0u, 0x1D6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FE8u;
}
