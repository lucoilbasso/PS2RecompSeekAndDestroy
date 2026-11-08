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

// Function: entry_0017d868
// Address: 0x17d868 - 0x17d88c
void entry_0017d868_0x17d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d868_0x17d868");
#endif

    switch (ctx->pc) {
        case 0x17d870u: goto label_17d870;
        default: break;
    }

    ctx->pc = 0x17d868u;

    // 0x17d868: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D868u;
    SET_GPR_U32(ctx, 31, 0x17D870u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D868u, 0x17D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D870u;
label_17d870:
    // 0x17d870: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D870u;
    {
        const bool branch_taken_0x17d870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D870u;
        // 0x17d874: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d870) {
            ctx->pc = 0x17D88Cu;
            return;
        }
    }
    ctx->pc = 0x17D878u;
    // 0x17d878: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d880: 0x24a57c60  addiu       $a1, $a1, 0x7C60
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31840));
    // 0x17d884: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D884u;
    SET_GPR_U32(ctx, 31, 0x17D88Cu);
    ctx->pc = 0x17D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D884u;
    // 0x17d888: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D884u, 0x17D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D88Cu;
}
