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

// Function: entry_0010f548
// Address: 0x10f548 - 0x10f554
void entry_0010f548_0x10f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f548_0x10f548");
#endif

    switch (ctx->pc) {
        case 0x10f550u: goto label_10f550;
        default: break;
    }

    ctx->pc = 0x10f548u;

    // 0x10f548: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x10F548u;
    SET_GPR_U32(ctx, 31, 0x10F550u);
    ctx->pc = 0x10F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F548u;
    // 0x10f54c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x10F548u, 0x10F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F550u;
label_10f550:
    // 0x10f550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f554u;
}
