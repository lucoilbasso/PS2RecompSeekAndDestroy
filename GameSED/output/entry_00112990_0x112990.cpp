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

// Function: entry_00112990
// Address: 0x112990 - 0x11299c
void entry_00112990_0x112990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112990_0x112990");
#endif

    ctx->pc = 0x112990u;

    // 0x112990: 0x2610f710  addiu       $s0, $s0, -0x8F0
    ctx->pc = 0x112990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965008));
    // 0x112994: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x112994u;
    SET_GPR_U32(ctx, 31, 0x11299Cu);
    ctx->pc = 0x112998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112994u;
    // 0x112998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x112994u, 0x11299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11299Cu;
}
