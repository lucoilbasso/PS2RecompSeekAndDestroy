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

// Function: entry_00109b88
// Address: 0x109b88 - 0x109ba8
void entry_00109b88_0x109b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109b88_0x109b88");
#endif

    switch (ctx->pc) {
        case 0x109b9cu: goto label_109b9c;
        default: break;
    }

    ctx->pc = 0x109b88u;

    // 0x109b88: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x109B88u;
    {
        const bool branch_taken_0x109b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B88u;
        // 0x109b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b88) {
            ctx->pc = 0x109BA8u;
            return;
        }
    }
    ctx->pc = 0x109B90u;
    // 0x109b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b94: 0xc0416fe  jal         func_105BF8
    ctx->pc = 0x109B94u;
    SET_GPR_U32(ctx, 31, 0x109B9Cu);
    ctx->pc = 0x109B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B94u;
    // 0x109b98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BF8u, 0x109B94u, 0x109B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B9Cu;
label_109b9c:
    // 0x109b9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x109B9Cu;
    {
        const bool branch_taken_0x109b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B9Cu;
        // 0x109ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b9c) {
            ctx->pc = 0x109BB8u;
            return;
        }
    }
    ctx->pc = 0x109BA4u;
    // 0x109ba4: 0x0  nop
    ctx->pc = 0x109ba4u;
    // NOP
    ctx->pc = 0x109ba8u;
}
