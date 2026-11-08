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

// Function: entry_001101b0
// Address: 0x1101b0 - 0x1101d8
void entry_001101b0_0x1101b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001101b0_0x1101b0");
#endif

    switch (ctx->pc) {
        case 0x1101c0u: goto label_1101c0;
        default: break;
    }

    ctx->pc = 0x1101b0u;

    // 0x1101b0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1101B0u;
    {
        const bool branch_taken_0x1101b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101B0u;
        // 0x1101b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101b0) {
            ctx->pc = 0x1101DCu;
            return;
        }
    }
    ctx->pc = 0x1101B8u;
    // 0x1101b8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1101B8u;
    SET_GPR_U32(ctx, 31, 0x1101C0u);
    ctx->pc = 0x1101BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101B8u;
    // 0x1101bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1101B8u, 0x1101C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101C0u;
label_1101c0:
    // 0x1101c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1101c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1101c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1101c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c8: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x1101cc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1101ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1101d0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1101D0u;
    SET_GPR_U32(ctx, 31, 0x1101D8u);
    ctx->pc = 0x1101D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101D0u;
    // 0x1101d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1101D0u, 0x1101D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101D8u;
}
