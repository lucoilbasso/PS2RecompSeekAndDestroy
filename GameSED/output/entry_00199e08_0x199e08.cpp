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

// Function: entry_00199e08
// Address: 0x199e08 - 0x199e14
void entry_00199e08_0x199e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199e08_0x199e08");
#endif

    ctx->pc = 0x199e08u;

    // 0x199e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e0c: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x199E0Cu;
    SET_GPR_U32(ctx, 31, 0x199E14u);
    ctx->pc = 0x199E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E0Cu;
    // 0x199e10: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x199E0Cu, 0x199E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E14u;
}
