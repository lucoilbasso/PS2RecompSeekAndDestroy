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

// Function: entry_00142cf8
// Address: 0x142cf8 - 0x142d18
void entry_00142cf8_0x142cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142cf8_0x142cf8");
#endif

    switch (ctx->pc) {
        case 0x142d00u: goto label_142d00;
        case 0x142d10u: goto label_142d10;
        default: break;
    }

    ctx->pc = 0x142cf8u;

    // 0x142cf8: 0xc055c5e  jal         func_157178
    ctx->pc = 0x142CF8u;
    SET_GPR_U32(ctx, 31, 0x142D00u);
    ctx->pc = 0x157178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157178u, 0x142CF8u, 0x142D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D00u;
label_142d00:
    // 0x142d00: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x142d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x142d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d08: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x142D08u;
    SET_GPR_U32(ctx, 31, 0x142D10u);
    ctx->pc = 0x142D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D08u;
    // 0x142d0c: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x142D08u, 0x142D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D10u;
label_142d10:
    // 0x142d10: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x142D10u;
    SET_GPR_U32(ctx, 31, 0x142D18u);
    ctx->pc = 0x142D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D10u;
    // 0x142d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x142D10u, 0x142D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D18u;
}
