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

// Function: entry_00131ad0
// Address: 0x131ad0 - 0x131aec
void entry_00131ad0_0x131ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ad0_0x131ad0");
#endif

    switch (ctx->pc) {
        case 0x131ad8u: goto label_131ad8;
        default: break;
    }

    ctx->pc = 0x131ad0u;

    // 0x131ad0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x131AD0u;
    SET_GPR_U32(ctx, 31, 0x131AD8u);
    ctx->pc = 0x131AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AD0u;
    // 0x131ad4: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x131AD0u, 0x131AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AD8u;
label_131ad8:
    // 0x131ad8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131adc: 0x24a56300  addiu       $a1, $a1, 0x6300
    ctx->pc = 0x131adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25344));
    // 0x131ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ae4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x131AE4u;
    SET_GPR_U32(ctx, 31, 0x131AECu);
    ctx->pc = 0x131AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AE4u;
    // 0x131ae8: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131AE4u, 0x131AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AECu;
}
