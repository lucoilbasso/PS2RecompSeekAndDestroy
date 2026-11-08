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

// Function: entry_00186d00
// Address: 0x186d00 - 0x186d1c
void entry_00186d00_0x186d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186d00_0x186d00");
#endif

    switch (ctx->pc) {
        case 0x186d08u: goto label_186d08;
        case 0x186d18u: goto label_186d18;
        default: break;
    }

    ctx->pc = 0x186d00u;

    // 0x186d00: 0xc061422  jal         func_185088
    ctx->pc = 0x186D00u;
    SET_GPR_U32(ctx, 31, 0x186D08u);
    ctx->pc = 0x186D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D00u;
    // 0x186d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x186D00u, 0x186D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D08u;
label_186d08:
    // 0x186d08: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186d0c: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x186d10: 0xc06eec8  jal         func_1BBB20
    ctx->pc = 0x186D10u;
    SET_GPR_U32(ctx, 31, 0x186D18u);
    ctx->pc = 0x186D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D10u;
    // 0x186d14: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB20u, 0x186D10u, 0x186D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D18u;
label_186d18:
    // 0x186d18: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x186d1cu;
}
