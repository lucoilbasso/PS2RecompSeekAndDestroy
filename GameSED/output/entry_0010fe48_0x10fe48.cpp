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

// Function: entry_0010fe48
// Address: 0x10fe48 - 0x10fe7c
void entry_0010fe48_0x10fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe48_0x10fe48");
#endif

    switch (ctx->pc) {
        case 0x10fe5cu: goto label_10fe5c;
        case 0x10fe6cu: goto label_10fe6c;
        default: break;
    }

    ctx->pc = 0x10fe48u;

    // 0x10fe48: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10fe48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10fe4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe54: 0xc0618c2  jal         func_186308
    ctx->pc = 0x10FE54u;
    SET_GPR_U32(ctx, 31, 0x10FE5Cu);
    ctx->pc = 0x10FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE54u;
    // 0x10fe58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10FE54u, 0x10FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE5Cu;
label_10fe5c:
    // 0x10fe5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe64: 0xc0618da  jal         func_186368
    ctx->pc = 0x10FE64u;
    SET_GPR_U32(ctx, 31, 0x10FE6Cu);
    ctx->pc = 0x10FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE64u;
    // 0x10fe68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10FE64u, 0x10FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE6Cu;
label_10fe6c:
    // 0x10fe6c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x10fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x10fe70: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x10fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x10fe74: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x10fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x10fe78: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10fe78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fe7cu;
}
