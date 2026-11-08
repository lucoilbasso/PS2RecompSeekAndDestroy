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

// Function: entry_00107380
// Address: 0x107380 - 0x1073a0
void entry_00107380_0x107380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107380_0x107380");
#endif

    switch (ctx->pc) {
        case 0x107388u: goto label_107388;
        default: break;
    }

    ctx->pc = 0x107380u;

    // 0x107380: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x107380u;
    SET_GPR_U32(ctx, 31, 0x107388u);
    ctx->pc = 0x107384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107380u;
    // 0x107384: 0x24843ad8  addiu       $a0, $a0, 0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x107380u, 0x107388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107388u;
label_107388:
    // 0x107388: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10738c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107390: 0x24a5d150  addiu       $a1, $a1, -0x2EB0
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
    // 0x107394: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x107394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x107398: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107398u;
    SET_GPR_U32(ctx, 31, 0x1073A0u);
    ctx->pc = 0x10739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107398u;
    // 0x10739c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107398u, 0x1073A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073A0u;
}
