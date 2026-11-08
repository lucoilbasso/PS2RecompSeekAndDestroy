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

// Function: entry_00175180
// Address: 0x175180 - 0x175188
void entry_00175180_0x175180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175180_0x175180");
#endif

    ctx->pc = 0x175180u;

    // 0x175180: 0xc05d468  jal         func_1751A0
    ctx->pc = 0x175180u;
    SET_GPR_U32(ctx, 31, 0x175188u);
    ctx->pc = 0x175184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175180u;
    // 0x175184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751A0u, 0x175180u, 0x175188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175188u;
}
