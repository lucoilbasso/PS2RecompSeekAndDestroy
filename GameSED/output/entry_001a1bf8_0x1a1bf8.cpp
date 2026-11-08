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

// Function: entry_001a1bf8
// Address: 0x1a1bf8 - 0x1a1c20
void entry_001a1bf8_0x1a1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1bf8_0x1a1bf8");
#endif

    switch (ctx->pc) {
        case 0x1a1c00u: goto label_1a1c00;
        default: break;
    }

    ctx->pc = 0x1a1bf8u;

    // 0x1a1bf8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A1BF8u;
    SET_GPR_U32(ctx, 31, 0x1A1C00u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A1BF8u, 0x1A1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C00u;
label_1a1c00:
    // 0x1a1c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c04: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C04u;
    {
        const bool branch_taken_0x1a1c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C04u;
        // 0x1a1c08: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c04) {
            ctx->pc = 0x1A1C24u;
            return;
        }
    }
    ctx->pc = 0x1A1C0Cu;
    // 0x1a1c0c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c14: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x1a1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
    // 0x1a1c18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1C18u;
    SET_GPR_U32(ctx, 31, 0x1A1C20u);
    ctx->pc = 0x1A1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C18u;
    // 0x1a1c1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1C18u, 0x1A1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C20u;
}
