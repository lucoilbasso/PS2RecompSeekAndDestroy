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

// Function: entry_00105b00
// Address: 0x105b00 - 0x105b0c
void entry_00105b00_0x105b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b00_0x105b00");
#endif

    ctx->pc = 0x105b00u;

    // 0x105b00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x105b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x105b04: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105B04u;
    SET_GPR_U32(ctx, 31, 0x105B0Cu);
    ctx->pc = 0x105B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B04u;
    // 0x105b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105B04u, 0x105B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B0Cu;
}
