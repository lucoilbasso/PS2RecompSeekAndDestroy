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

// Function: entry_0015a9e4
// Address: 0x15a9e4 - 0x15a9f4
void entry_0015a9e4_0x15a9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a9e4_0x15a9e4");
#endif

    switch (ctx->pc) {
        case 0x15a9f0u: goto label_15a9f0;
        default: break;
    }

    ctx->pc = 0x15a9e4u;

    // 0x15a9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9e8: 0xc0580c0  jal         func_160300
    ctx->pc = 0x15A9E8u;
    SET_GPR_U32(ctx, 31, 0x15A9F0u);
    ctx->pc = 0x15A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9E8u;
    // 0x15a9ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160300u, 0x15A9E8u, 0x15A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9F0u;
label_15a9f0:
    // 0x15a9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15a9f4u;
}
