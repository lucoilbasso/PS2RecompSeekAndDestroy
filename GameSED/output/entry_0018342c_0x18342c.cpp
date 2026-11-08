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

// Function: entry_0018342c
// Address: 0x18342c - 0x183460
void entry_0018342c_0x18342c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018342c_0x18342c");
#endif

    switch (ctx->pc) {
        case 0x183440u: goto label_183440;
        default: break;
    }

    ctx->pc = 0x18342cu;

    // 0x18342c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x18342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x183430: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x183434: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x183438: 0xc067294  jal         func_19CA50
    ctx->pc = 0x183438u;
    SET_GPR_U32(ctx, 31, 0x183440u);
    ctx->pc = 0x18343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183438u;
    // 0x18343c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x183438u, 0x183440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183440u;
label_183440:
    // 0x183440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18344c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183450: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x183450u;
    {
        const bool branch_taken_0x183450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x183454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183450u;
        // 0x183454: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183450) {
            ctx->pc = 0x183460u;
            return;
        }
    }
    ctx->pc = 0x183458u;
    // 0x183458: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x183458u;
    SET_GPR_U32(ctx, 31, 0x183460u);
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x183458u, 0x183460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183460u;
}
