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

// Function: entry_001a17c0
// Address: 0x1a17c0 - 0x1a17e8
void entry_001a17c0_0x1a17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a17c0_0x1a17c0");
#endif

    switch (ctx->pc) {
        case 0x1a17c8u: goto label_1a17c8;
        default: break;
    }

    ctx->pc = 0x1a17c0u;

    // 0x1a17c0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A17C0u;
    SET_GPR_U32(ctx, 31, 0x1A17C8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A17C0u, 0x1A17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17C8u;
label_1a17c8:
    // 0x1a17c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a17cc: 0x24a590e8  addiu       $a1, $a1, -0x6F18
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
    // 0x1a17d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a17d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a17d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A17D8u;
    {
        const bool branch_taken_0x1a17d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17D8u;
        // 0x1a17dc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17d8) {
            ctx->pc = 0x1A17E8u;
            return;
        }
    }
    ctx->pc = 0x1A17E0u;
    // 0x1a17e0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A17E0u;
    SET_GPR_U32(ctx, 31, 0x1A17E8u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A17E0u, 0x1A17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17E8u;
}
