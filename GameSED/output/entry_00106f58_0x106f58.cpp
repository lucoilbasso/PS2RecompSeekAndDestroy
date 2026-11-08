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

// Function: entry_00106f58
// Address: 0x106f58 - 0x106f70
void entry_00106f58_0x106f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f58_0x106f58");
#endif

    switch (ctx->pc) {
        case 0x106f68u: goto label_106f68;
        default: break;
    }

    ctx->pc = 0x106f58u;

    // 0x106f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f60: 0xc04110c  jal         func_104430
    ctx->pc = 0x106F60u;
    SET_GPR_U32(ctx, 31, 0x106F68u);
    ctx->pc = 0x106F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F60u;
    // 0x106f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106F60u, 0x106F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F68u;
label_106f68:
    // 0x106f68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x106f70u;
}
