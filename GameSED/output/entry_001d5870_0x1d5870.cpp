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

// Function: entry_001d5870
// Address: 0x1d5870 - 0x1d5888
void entry_001d5870_0x1d5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5870_0x1d5870");
#endif

    ctx->pc = 0x1d5870u;

    // 0x1d5870: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d5874: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x1d5874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d5878: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5878u;
    {
        const bool branch_taken_0x1d5878 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5878u;
        // 0x1d587c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5878) {
            ctx->pc = 0x1D58E0u;
            return;
        }
    }
    ctx->pc = 0x1D5880u;
    // 0x1d5880: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x1d5880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5884: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5888u;
}
