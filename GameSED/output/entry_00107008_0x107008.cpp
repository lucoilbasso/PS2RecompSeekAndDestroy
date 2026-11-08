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

// Function: entry_00107008
// Address: 0x107008 - 0x107018
void entry_00107008_0x107008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107008_0x107008");
#endif

    switch (ctx->pc) {
        case 0x107014u: goto label_107014;
        default: break;
    }

    ctx->pc = 0x107008u;

    // 0x107008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10700c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x10700Cu;
    SET_GPR_U32(ctx, 31, 0x107014u);
    ctx->pc = 0x107010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10700Cu;
    // 0x107010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10700Cu, 0x107014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107014u;
label_107014:
    // 0x107014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x107018u;
}
