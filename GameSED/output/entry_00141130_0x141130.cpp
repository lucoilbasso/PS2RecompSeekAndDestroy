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

// Function: entry_00141130
// Address: 0x141130 - 0x14113c
void entry_00141130_0x141130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141130_0x141130");
#endif

    ctx->pc = 0x141130u;

    // 0x141130: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x141134: 0xc067586  jal         func_19D618
    ctx->pc = 0x141134u;
    SET_GPR_U32(ctx, 31, 0x14113Cu);
    ctx->pc = 0x141138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141134u;
    // 0x141138: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x141134u, 0x14113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14113Cu;
}
