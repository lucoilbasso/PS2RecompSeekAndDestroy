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

// Function: entry_0010e848
// Address: 0x10e848 - 0x10e858
void entry_0010e848_0x10e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e848_0x10e848");
#endif

    ctx->pc = 0x10e848u;

    // 0x10e848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e84c: 0x24a53d90  addiu       $a1, $a1, 0x3D90
    ctx->pc = 0x10e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
    // 0x10e850: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10E850u;
    SET_GPR_U32(ctx, 31, 0x10E858u);
    ctx->pc = 0x10E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E850u;
    // 0x10e854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E850u, 0x10E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E858u;
}
