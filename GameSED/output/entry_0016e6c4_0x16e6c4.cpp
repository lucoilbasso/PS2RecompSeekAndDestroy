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

// Function: entry_0016e6c4
// Address: 0x16e6c4 - 0x16e6d4
void entry_0016e6c4_0x16e6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e6c4_0x16e6c4");
#endif

    switch (ctx->pc) {
        case 0x16e6ccu: goto label_16e6cc;
        default: break;
    }

    ctx->pc = 0x16e6c4u;

    // 0x16e6c4: 0xc061422  jal         func_185088
    ctx->pc = 0x16E6C4u;
    SET_GPR_U32(ctx, 31, 0x16E6CCu);
    ctx->pc = 0x16E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6C4u;
    // 0x16e6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E6C4u, 0x16E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x16e6d0: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->pc = 0x16e6d4u;
}
