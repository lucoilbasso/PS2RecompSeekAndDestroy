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

// Function: entry_0012e7dc
// Address: 0x12e7dc - 0x12e7f8
void entry_0012e7dc_0x12e7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e7dc_0x12e7dc");
#endif

    switch (ctx->pc) {
        case 0x12e7f4u: goto label_12e7f4;
        default: break;
    }

    ctx->pc = 0x12e7dcu;

    // 0x12e7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12e7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12e7e8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x12e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12e7ec: 0xc04bb4e  jal         func_12ED38
    ctx->pc = 0x12E7ECu;
    SET_GPR_U32(ctx, 31, 0x12E7F4u);
    ctx->pc = 0x12E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7ECu;
    // 0x12e7f0: 0x24a50190  addiu       $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED38u, 0x12E7ECu, 0x12E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F4u;
label_12e7f4:
    // 0x12e7f4: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x12e7f8u;
}
