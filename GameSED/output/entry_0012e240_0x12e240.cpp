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

// Function: entry_0012e240
// Address: 0x12e240 - 0x12e25c
void entry_0012e240_0x12e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e240_0x12e240");
#endif

    switch (ctx->pc) {
        case 0x12e248u: goto label_12e248;
        default: break;
    }

    ctx->pc = 0x12e240u;

    // 0x12e240: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12E240u;
    SET_GPR_U32(ctx, 31, 0x12E248u);
    ctx->pc = 0x12E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E240u;
    // 0x12e244: 0x24845eb0  addiu       $a0, $a0, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12E240u, 0x12E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E248u;
label_12e248:
    // 0x12e248: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e24c: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
    // 0x12e250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e254: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E254u;
    SET_GPR_U32(ctx, 31, 0x12E25Cu);
    ctx->pc = 0x12E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E254u;
    // 0x12e258: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E254u, 0x12E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E25Cu;
}
