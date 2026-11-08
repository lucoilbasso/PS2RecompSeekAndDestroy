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

// Function: entry_00136cf0
// Address: 0x136cf0 - 0x136d10
void entry_00136cf0_0x136cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136cf0_0x136cf0");
#endif

    switch (ctx->pc) {
        case 0x136d00u: goto label_136d00;
        default: break;
    }

    ctx->pc = 0x136cf0u;

    // 0x136cf0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136cf4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136cf8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x136CF8u;
    SET_GPR_U32(ctx, 31, 0x136D00u);
    ctx->pc = 0x136CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CF8u;
    // 0x136cfc: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x136CF8u, 0x136D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D00u;
label_136d00:
    // 0x136d00: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x136d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x136d04: 0xae420404  sw          $v0, 0x404($s2)
    ctx->pc = 0x136d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 2));
    // 0x136d08: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x136D08u;
    SET_GPR_U32(ctx, 31, 0x136D10u);
    ctx->pc = 0x136D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D08u;
    // 0x136d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x136D08u, 0x136D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D10u;
}
