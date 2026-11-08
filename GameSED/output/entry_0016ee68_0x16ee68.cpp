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

// Function: entry_0016ee68
// Address: 0x16ee68 - 0x16ee84
void entry_0016ee68_0x16ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee68_0x16ee68");
#endif

    switch (ctx->pc) {
        case 0x16ee78u: goto label_16ee78;
        default: break;
    }

    ctx->pc = 0x16ee68u;

    // 0x16ee68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ee6c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16ee70: 0xc04110c  jal         func_104430
    ctx->pc = 0x16EE70u;
    SET_GPR_U32(ctx, 31, 0x16EE78u);
    ctx->pc = 0x16EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE70u;
    // 0x16ee74: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16EE70u, 0x16EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE78u;
label_16ee78:
    // 0x16ee78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16EE7Cu;
    SET_GPR_U32(ctx, 31, 0x16EE84u);
    ctx->pc = 0x16EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE7Cu;
    // 0x16ee80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16EE7Cu, 0x16EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE84u;
}
