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

// Function: entry_001a440c
// Address: 0x1a440c - 0x1a4418
void entry_001a440c_0x1a440c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a440c_0x1a440c");
#endif

    switch (ctx->pc) {
        case 0x1a4414u: goto label_1a4414;
        default: break;
    }

    ctx->pc = 0x1a440cu;

    // 0x1a440c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A440Cu;
    SET_GPR_U32(ctx, 31, 0x1A4414u);
    ctx->pc = 0x1A4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A440Cu;
    // 0x1a4410: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A440Cu, 0x1A4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4414u;
label_1a4414:
    // 0x1a4414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a4418u;
}
