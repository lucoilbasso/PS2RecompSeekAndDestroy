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

// Function: entry_001a1bd4
// Address: 0x1a1bd4 - 0x1a1bf8
void entry_001a1bd4_0x1a1bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1bd4_0x1a1bd4");
#endif

    switch (ctx->pc) {
        case 0x1a1bdcu: goto label_1a1bdc;
        default: break;
    }

    ctx->pc = 0x1a1bd4u;

    // 0x1a1bd4: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x1A1BD4u;
    SET_GPR_U32(ctx, 31, 0x1A1BDCu);
    ctx->pc = 0x1A1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BD4u;
    // 0x1a1bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x1A1BD4u, 0x1A1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BDCu;
label_1a1bdc:
    // 0x1a1bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1be0: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1BE0u;
    {
        const bool branch_taken_0x1a1be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BE0u;
        // 0x1a1be4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1be0) {
            ctx->pc = 0x1A1C24u;
            return;
        }
    }
    ctx->pc = 0x1A1BE8u;
    // 0x1a1be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bec: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1BECu;
    {
        const bool branch_taken_0x1a1bec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BECu;
        // 0x1a1bf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bec) {
            ctx->pc = 0x1A1BF8u;
            return;
        }
    }
    ctx->pc = 0x1A1BF4u;
    // 0x1a1bf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1a1bf8u;
}
