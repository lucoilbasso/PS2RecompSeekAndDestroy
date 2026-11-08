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

// Function: entry_001a18d8
// Address: 0x1a18d8 - 0x1a18fc
void entry_001a18d8_0x1a18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a18d8_0x1a18d8");
#endif

    switch (ctx->pc) {
        case 0x1a18e0u: goto label_1a18e0;
        default: break;
    }

    ctx->pc = 0x1a18d8u;

    // 0x1a18d8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A18D8u;
    SET_GPR_U32(ctx, 31, 0x1A18E0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A18D8u, 0x1A18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18E0u;
label_1a18e0:
    // 0x1a18e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A18E0u;
    {
        const bool branch_taken_0x1a18e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18E0u;
        // 0x1a18e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18e0) {
            ctx->pc = 0x1A18FCu;
            return;
        }
    }
    ctx->pc = 0x1A18E8u;
    // 0x1a18e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a18ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a18ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f0: 0x24a590f8  addiu       $a1, $a1, -0x6F08
    ctx->pc = 0x1a18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
    // 0x1a18f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A18F4u;
    SET_GPR_U32(ctx, 31, 0x1A18FCu);
    ctx->pc = 0x1A18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18F4u;
    // 0x1a18f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A18F4u, 0x1A18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18FCu;
}
