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

// Function: entry_00177c60
// Address: 0x177c60 - 0x177c7c
void entry_00177c60_0x177c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c60_0x177c60");
#endif

    switch (ctx->pc) {
        case 0x177c6cu: goto label_177c6c;
        default: break;
    }

    ctx->pc = 0x177c60u;

    // 0x177c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177c64: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C64u;
    SET_GPR_U32(ctx, 31, 0x177C6Cu);
    ctx->pc = 0x177C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C64u;
    // 0x177c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C64u, 0x177C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C6Cu;
label_177c6c:
    // 0x177c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177c70: 0x2606005c  addiu       $a2, $s0, 0x5C
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x177c74: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C74u;
    SET_GPR_U32(ctx, 31, 0x177C7Cu);
    ctx->pc = 0x177C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C74u;
    // 0x177c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C74u, 0x177C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C7Cu;
}
