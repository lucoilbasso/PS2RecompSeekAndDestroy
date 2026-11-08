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

// Function: entry_001617ec
// Address: 0x1617ec - 0x1617f8
void entry_001617ec_0x1617ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617ec_0x1617ec");
#endif

    switch (ctx->pc) {
        case 0x1617f4u: goto label_1617f4;
        default: break;
    }

    ctx->pc = 0x1617ecu;

    // 0x1617ec: 0xc0618da  jal         func_186368
    ctx->pc = 0x1617ECu;
    SET_GPR_U32(ctx, 31, 0x1617F4u);
    ctx->pc = 0x1617F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617ECu;
    // 0x1617f0: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1617ECu, 0x1617F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617F4u;
label_1617f4:
    // 0x1617f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1617f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1617f8u;
}
