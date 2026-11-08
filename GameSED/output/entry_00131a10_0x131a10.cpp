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

// Function: entry_00131a10
// Address: 0x131a10 - 0x131a34
void entry_00131a10_0x131a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a10_0x131a10");
#endif

    switch (ctx->pc) {
        case 0x131a1cu: goto label_131a1c;
        case 0x131a30u: goto label_131a30;
        default: break;
    }

    ctx->pc = 0x131a10u;

    // 0x131a10: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x131a14: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x131A14u;
    SET_GPR_U32(ctx, 31, 0x131A1Cu);
    ctx->pc = 0x131A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A14u;
    // 0x131a18: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x131A14u, 0x131A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A1Cu;
label_131a1c:
    // 0x131a1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131a20: 0x24a562b8  addiu       $a1, $a1, 0x62B8
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25272));
    // 0x131a24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a28: 0xc068186  jal         func_1A0618
    ctx->pc = 0x131A28u;
    SET_GPR_U32(ctx, 31, 0x131A30u);
    ctx->pc = 0x131A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A28u;
    // 0x131a2c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131A28u, 0x131A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A30u;
label_131a30:
    // 0x131a30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x131a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x131a34u;
}
