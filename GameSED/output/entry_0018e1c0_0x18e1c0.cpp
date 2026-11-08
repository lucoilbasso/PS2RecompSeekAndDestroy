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

// Function: entry_0018e1c0
// Address: 0x18e1c0 - 0x18e1e0
void entry_0018e1c0_0x18e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e1c0_0x18e1c0");
#endif

    ctx->pc = 0x18e1c0u;

    // 0x18e1c0: 0x55200011  bnel        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18E1C0u;
    {
        const bool branch_taken_0x18e1c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1c0) {
            ctx->pc = 0x18E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E1C0u;
            // 0x18e1c4: 0x8d040210  lw          $a0, 0x210($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E208u;
            return;
        }
    }
    ctx->pc = 0x18E1C8u;
    // 0x18e1c8: 0x8d050210  lw          $a1, 0x210($t0)
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
    // 0x18e1cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1d0: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18E1D0u;
    {
        const bool branch_taken_0x18e1d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1D0u;
        // 0x18e1d4: 0x8d020218  lw          $v0, 0x218($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1d0) {
            ctx->pc = 0x18E234u;
            return;
        }
    }
    ctx->pc = 0x18E1D8u;
    // 0x18e1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1dc: 0x2407bfff  addiu       $a3, $zero, -0x4001
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    ctx->pc = 0x18e1e0u;
}
