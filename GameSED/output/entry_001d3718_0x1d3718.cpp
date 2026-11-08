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

// Function: entry_001d3718
// Address: 0x1d3718 - 0x1d3744
void entry_001d3718_0x1d3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3718_0x1d3718");
#endif

    switch (ctx->pc) {
        case 0x1d372cu: goto label_1d372c;
        case 0x1d3740u: goto label_1d3740;
        default: break;
    }

    ctx->pc = 0x1d3718u;

    // 0x1d3718: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d3718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d371c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d371cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3724: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3724u;
    SET_GPR_U32(ctx, 31, 0x1D372Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3724u, 0x1D372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D372Cu;
label_1d372c:
    // 0x1d372c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d372cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3730: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3738: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3738u;
    SET_GPR_U32(ctx, 31, 0x1D3740u);
    ctx->pc = 0x1D373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3738u;
    // 0x1d373c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3738u, 0x1D3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3740u;
label_1d3740:
    // 0x1d3740: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3744u;
}
