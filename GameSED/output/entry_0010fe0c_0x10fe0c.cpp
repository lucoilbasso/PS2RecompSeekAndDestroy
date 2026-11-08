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

// Function: entry_0010fe0c
// Address: 0x10fe0c - 0x10fe48
void entry_0010fe0c_0x10fe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe0c_0x10fe0c");
#endif

    switch (ctx->pc) {
        case 0x10fe30u: goto label_10fe30;
        case 0x10fe40u: goto label_10fe40;
        default: break;
    }

    ctx->pc = 0x10fe0cu;

    // 0x10fe0c: 0x8f82911c  lw          $v0, -0x6EE4($gp)
    ctx->pc = 0x10fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10fe10: 0x8f839120  lw          $v1, -0x6EE0($gp)
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
    // 0x10fe14: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10fe14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x10fe18: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x10FE18u;
    {
        const bool branch_taken_0x10fe18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE18u;
        // 0x10fe1c: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe18) {
            ctx->pc = 0x10FE48u;
            return;
        }
    }
    ctx->pc = 0x10FE20u;
    // 0x10fe20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10fe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe28: 0xc0618c2  jal         func_186308
    ctx->pc = 0x10FE28u;
    SET_GPR_U32(ctx, 31, 0x10FE30u);
    ctx->pc = 0x10FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE28u;
    // 0x10fe2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10FE28u, 0x10FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE30u;
label_10fe30:
    // 0x10fe30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fe34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe38: 0xc0618da  jal         func_186368
    ctx->pc = 0x10FE38u;
    SET_GPR_U32(ctx, 31, 0x10FE40u);
    ctx->pc = 0x10FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE38u;
    // 0x10fe3c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10FE38u, 0x10FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE40u;
label_10fe40:
    // 0x10fe40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10FE40u;
    {
        const bool branch_taken_0x10fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE40u;
        // 0x10fe44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe40) {
            ctx->pc = 0x10FE7Cu;
            return;
        }
    }
    ctx->pc = 0x10FE48u;
}
