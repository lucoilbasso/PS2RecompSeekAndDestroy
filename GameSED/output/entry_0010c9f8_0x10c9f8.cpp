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

// Function: entry_0010c9f8
// Address: 0x10c9f8 - 0x10ca2c
void entry_0010c9f8_0x10c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9f8_0x10c9f8");
#endif

    switch (ctx->pc) {
        case 0x10ca00u: goto label_10ca00;
        case 0x10ca28u: goto label_10ca28;
        default: break;
    }

    ctx->pc = 0x10c9f8u;

    // 0x10c9f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C9F8u;
    SET_GPR_U32(ctx, 31, 0x10CA00u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C9F8u, 0x10CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA00u;
label_10ca00:
    // 0x10ca00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10ca04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ca0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ca0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ca18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CA18u;
    {
        const bool branch_taken_0x10ca18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca18) {
            ctx->pc = 0x10CA2Cu;
            return;
        }
    }
    ctx->pc = 0x10CA20u;
    // 0x10ca20: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x10CA20u;
    SET_GPR_U32(ctx, 31, 0x10CA28u);
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x10CA20u, 0x10CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA28u;
label_10ca28:
    // 0x10ca28: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10ca28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ca2cu;
}
