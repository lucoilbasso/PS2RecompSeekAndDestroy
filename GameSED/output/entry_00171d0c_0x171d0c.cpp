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

// Function: entry_00171d0c
// Address: 0x171d0c - 0x171d18
void entry_00171d0c_0x171d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d0c_0x171d0c");
#endif

    ctx->pc = 0x171d0cu;

    // 0x171d0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x171d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x171d10: 0xc05d78e  jal         func_175E38
    ctx->pc = 0x171D10u;
    SET_GPR_U32(ctx, 31, 0x171D18u);
    ctx->pc = 0x171D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D10u;
    // 0x171d14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175E38u, 0x171D10u, 0x171D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D18u;
}
