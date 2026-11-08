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

// Function: entry_00193918
// Address: 0x193918 - 0x19392c
void entry_00193918_0x193918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193918_0x193918");
#endif

    switch (ctx->pc) {
        case 0x193928u: goto label_193928;
        default: break;
    }

    ctx->pc = 0x193918u;

    // 0x193918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19391c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x193920: 0xc04110c  jal         func_104430
    ctx->pc = 0x193920u;
    SET_GPR_U32(ctx, 31, 0x193928u);
    ctx->pc = 0x193924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193920u;
    // 0x193924: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x193920u, 0x193928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193928u;
label_193928:
    // 0x193928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19392cu;
}
