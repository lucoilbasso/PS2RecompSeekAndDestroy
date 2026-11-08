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

// Function: entry_0013c1d0
// Address: 0x13c1d0 - 0x13c1ec
void entry_0013c1d0_0x13c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c1d0_0x13c1d0");
#endif

    ctx->pc = 0x13c1d0u;

    // 0x13c1d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13C1D0u;
    {
        const bool branch_taken_0x13c1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1D0u;
        // 0x13c1d4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1d0) {
            ctx->pc = 0x13C210u;
            return;
        }
    }
    ctx->pc = 0x13C1D8u;
    // 0x13c1d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13c1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13c1dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C1DCu;
    {
        const bool branch_taken_0x13c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c1dc) {
            ctx->pc = 0x13C1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C1DCu;
            // 0x13c1e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C1F8u;
            return;
        }
    }
    ctx->pc = 0x13C1E4u;
    // 0x13c1e4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13C1E4u;
    {
        const bool branch_taken_0x13c1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c1e4) {
            ctx->pc = 0x13C1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C1E4u;
            // 0x13c1e8: 0x8ce401e0  lw          $a0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C22Cu;
            return;
        }
    }
    ctx->pc = 0x13C1ECu;
}
