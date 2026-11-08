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

// Function: _Is_OutOfPlay__7ApcUnit
// Address: 0x1d9540 - 0x1d9570
void ps2__Is_OutOfPlay__7ApcUnit_0x1d9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Is_OutOfPlay__7ApcUnit_0x1d9540");
#endif

    ctx->pc = 0x1d9540u;

    // 0x1d9540: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9544: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x1d9544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x1d9548: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9548u;
    {
        const bool branch_taken_0x1d9548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9548u;
        // 0x1d954c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9548) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D9550u;
    // 0x1d9550: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x1d9554: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1d9554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x1d9558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d955c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D955Cu;
    {
        const bool branch_taken_0x1d955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d955c) {
            ctx->pc = 0x1D9568u;
            goto label_1d9568;
        }
    }
    ctx->pc = 0x1D9564u;
label_1d9564:
    // 0x1d9564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9568:
    // 0x1d9568: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9568u;
        // 0x1d956c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9570u;
}
