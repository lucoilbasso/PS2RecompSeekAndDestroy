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

// Function: entry_00135998
// Address: 0x135998 - 0x1359bc
void entry_00135998_0x135998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135998_0x135998");
#endif

    switch (ctx->pc) {
        case 0x1359b4u: goto label_1359b4;
        default: break;
    }

    ctx->pc = 0x135998u;

    // 0x135998: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13599c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1359a0: 0x10740006  beq         $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1359A0u;
    {
        const bool branch_taken_0x1359a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1359A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359A0u;
        // 0x1359a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1359a0) {
            ctx->pc = 0x1359BCu;
            return;
        }
    }
    ctx->pc = 0x1359A8u;
    // 0x1359a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1359a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359ac: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1359ACu;
    SET_GPR_U32(ctx, 31, 0x1359B4u);
    ctx->pc = 0x1359B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359ACu;
    // 0x1359b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1359ACu, 0x1359B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359B4u;
label_1359b4:
    // 0x1359b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1359b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1359bcu;
}
