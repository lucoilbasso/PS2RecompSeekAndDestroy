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

// Function: entry_0013fa68
// Address: 0x13fa68 - 0x13fa84
void entry_0013fa68_0x13fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fa68_0x13fa68");
#endif

    switch (ctx->pc) {
        case 0x13fa74u: goto label_13fa74;
        default: break;
    }

    ctx->pc = 0x13fa68u;

    // 0x13fa68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa6c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FA6Cu;
    SET_GPR_U32(ctx, 31, 0x13FA74u);
    ctx->pc = 0x13FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA6Cu;
    // 0x13fa70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FA6Cu, 0x13FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA74u;
label_13fa74:
    // 0x13fa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa78: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13fa7c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13FA7Cu;
    SET_GPR_U32(ctx, 31, 0x13FA84u);
    ctx->pc = 0x13FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA7Cu;
    // 0x13fa80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FA7Cu, 0x13FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA84u;
}
