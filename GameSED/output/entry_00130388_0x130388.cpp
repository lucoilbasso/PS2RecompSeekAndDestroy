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

// Function: entry_00130388
// Address: 0x130388 - 0x1303a4
void entry_00130388_0x130388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130388_0x130388");
#endif

    switch (ctx->pc) {
        case 0x130390u: goto label_130390;
        case 0x1303a0u: goto label_1303a0;
        default: break;
    }

    ctx->pc = 0x130388u;

    // 0x130388: 0xc04844a  jal         func_121128
    ctx->pc = 0x130388u;
    SET_GPR_U32(ctx, 31, 0x130390u);
    ctx->pc = 0x13038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130388u;
    // 0x13038c: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130388u, 0x130390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130390u;
label_130390:
    // 0x130390: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x130394: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x130398: 0xc04844a  jal         func_121128
    ctx->pc = 0x130398u;
    SET_GPR_U32(ctx, 31, 0x1303A0u);
    ctx->pc = 0x13039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130398u;
    // 0x13039c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130398u, 0x1303A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A0u;
label_1303a0:
    // 0x1303a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1303a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1303a4u;
}
