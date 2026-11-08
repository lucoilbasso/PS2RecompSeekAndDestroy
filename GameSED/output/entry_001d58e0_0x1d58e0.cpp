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

// Function: entry_001d58e0
// Address: 0x1d58e0 - 0x1d5900
void entry_001d58e0_0x1d58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d58e0_0x1d58e0");
#endif

    ctx->pc = 0x1d58e0u;

    // 0x1d58e0: 0x24c02  srl         $t1, $v0, 16
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d58e4: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D58E4u;
    {
        const bool branch_taken_0x1d58e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E4u;
        // 0x1d58e8: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58e4) {
            ctx->pc = 0x1D5954u;
            return;
        }
    }
    ctx->pc = 0x1D58ECu;
    // 0x1d58ec: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x1d58ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d58f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d58f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58fc: 0x0  nop
    ctx->pc = 0x1d58fcu;
    // NOP
    ctx->pc = 0x1d5900u;
}
