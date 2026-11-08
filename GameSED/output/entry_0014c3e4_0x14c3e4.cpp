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

// Function: entry_0014c3e4
// Address: 0x14c3e4 - 0x14c3fc
void entry_0014c3e4_0x14c3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c3e4_0x14c3e4");
#endif

    switch (ctx->pc) {
        case 0x14c3ecu: goto label_14c3ec;
        default: break;
    }

    ctx->pc = 0x14c3e4u;

    // 0x14c3e4: 0xc053106  jal         func_14C418
    ctx->pc = 0x14C3E4u;
    SET_GPR_U32(ctx, 31, 0x14C3ECu);
    ctx->pc = 0x14C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3E4u;
    // 0x14c3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C418u, 0x14C3E4u, 0x14C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3ECu;
label_14c3ec:
    // 0x14c3ec: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x14c3f0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14c3f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14c3f8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x14c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x14c3fcu;
}
