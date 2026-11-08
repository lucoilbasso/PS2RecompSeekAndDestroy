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

// Function: entry_0010dd94
// Address: 0x10dd94 - 0x10ddc0
void entry_0010dd94_0x10dd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd94_0x10dd94");
#endif

    switch (ctx->pc) {
        case 0x10dda0u: goto label_10dda0;
        case 0x10dda8u: goto label_10dda8;
        case 0x10ddbcu: goto label_10ddbc;
        default: break;
    }

    ctx->pc = 0x10dd94u;

    // 0x10dd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd98: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DD98u;
    SET_GPR_U32(ctx, 31, 0x10DDA0u);
    ctx->pc = 0x10DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD98u;
    // 0x10dd9c: 0x8e1001b8  lw          $s0, 0x1B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DD98u, 0x10DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA0u;
label_10dda0:
    // 0x10dda0: 0xc065448  jal         func_195120
    ctx->pc = 0x10DDA0u;
    SET_GPR_U32(ctx, 31, 0x10DDA8u);
    ctx->pc = 0x10DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDA0u;
    // 0x10dda4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195120u, 0x10DDA0u, 0x10DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA8u;
label_10dda8:
    // 0x10dda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ddb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb4: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x10DDB4u;
    SET_GPR_U32(ctx, 31, 0x10DDBCu);
    ctx->pc = 0x10DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDB4u;
    // 0x10ddb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x10DDB4u, 0x10DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDBCu;
label_10ddbc:
    // 0x10ddbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ddc0u;
}
