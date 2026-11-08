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

// Function: entry_00142824
// Address: 0x142824 - 0x142854
void entry_00142824_0x142824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142824_0x142824");
#endif

    switch (ctx->pc) {
        case 0x142834u: goto label_142834;
        default: break;
    }

    ctx->pc = 0x142824u;

    // 0x142824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142828: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14282c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x14282Cu;
    SET_GPR_U32(ctx, 31, 0x142834u);
    ctx->pc = 0x142830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14282Cu;
    // 0x142830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x14282Cu, 0x142834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142834u;
label_142834:
    // 0x142834: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x142838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14283c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142840: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x142840u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x142844: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x142844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x142848: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14284c: 0xc050494  jal         func_141250
    ctx->pc = 0x14284Cu;
    SET_GPR_U32(ctx, 31, 0x142854u);
    ctx->pc = 0x142850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14284Cu;
    // 0x142850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x14284Cu, 0x142854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142854u;
}
