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

// Function: entry_00100908
// Address: 0x100908 - 0x100918
void entry_00100908_0x100908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100908_0x100908");
#endif

    switch (ctx->pc) {
        case 0x100914u: goto label_100914;
        default: break;
    }

    ctx->pc = 0x100908u;

    // 0x100908: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10090c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x10090Cu;
    SET_GPR_U32(ctx, 31, 0x100914u);
    ctx->pc = 0x100910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10090Cu;
    // 0x100910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10090Cu, 0x100914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100914u;
label_100914:
    // 0x100914: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->pc = 0x100918u;
}
