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

// Function: entry_0012c6c4
// Address: 0x12c6c4 - 0x12c6e8
void entry_0012c6c4_0x12c6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6c4_0x12c6c4");
#endif

    switch (ctx->pc) {
        case 0x12c6d0u: goto label_12c6d0;
        default: break;
    }

    ctx->pc = 0x12c6c4u;

    // 0x12c6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6c8: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C6C8u;
    SET_GPR_U32(ctx, 31, 0x12C6D0u);
    ctx->pc = 0x12C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6C8u;
    // 0x12c6cc: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C6C8u, 0x12C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6D0u;
label_12c6d0:
    // 0x12c6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C6D8u;
    {
        const bool branch_taken_0x12c6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6D8u;
        // 0x12c6dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6d8) {
            ctx->pc = 0x12C6E8u;
            return;
        }
    }
    ctx->pc = 0x12C6E0u;
    // 0x12c6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C6E0u;
    {
        const bool branch_taken_0x12c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6E0u;
        // 0x12c6e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6e0) {
            ctx->pc = 0x12C6FCu;
            return;
        }
    }
    ctx->pc = 0x12C6E8u;
}
