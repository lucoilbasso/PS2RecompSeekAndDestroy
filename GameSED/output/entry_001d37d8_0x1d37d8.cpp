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

// Function: entry_001d37d8
// Address: 0x1d37d8 - 0x1d37f8
void entry_001d37d8_0x1d37d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d37d8_0x1d37d8");
#endif

    switch (ctx->pc) {
        case 0x1d37f4u: goto label_1d37f4;
        default: break;
    }

    ctx->pc = 0x1d37d8u;

    // 0x1d37d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d37d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d37e0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d37e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d37e8: 0xdc84c678  ld          $a0, -0x3988($a0)
    ctx->pc = 0x1d37e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294952568)));
    // 0x1d37ec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D37ECu;
    SET_GPR_U32(ctx, 31, 0x1D37F4u);
    ctx->pc = 0x1D37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37ECu;
    // 0x1d37f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D37ECu, 0x1D37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37F4u;
label_1d37f4:
    // 0x1d37f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d37f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d37f8u;
}
