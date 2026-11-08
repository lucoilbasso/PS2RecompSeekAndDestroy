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

// Function: entry_0010c920
// Address: 0x10c920 - 0x10c93c
void entry_0010c920_0x10c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c920_0x10c920");
#endif

    switch (ctx->pc) {
        case 0x10c930u: goto label_10c930;
        default: break;
    }

    ctx->pc = 0x10c920u;

    // 0x10c920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c924: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c928: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C928u;
    SET_GPR_U32(ctx, 31, 0x10C930u);
    ctx->pc = 0x10C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C928u;
    // 0x10c92c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C928u, 0x10C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C930u;
label_10c930:
    // 0x10c930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c934: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C934u;
    SET_GPR_U32(ctx, 31, 0x10C93Cu);
    ctx->pc = 0x10C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C934u;
    // 0x10c938: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C934u, 0x10C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C93Cu;
}
