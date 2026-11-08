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

// Function: entry_00156100
// Address: 0x156100 - 0x15611c
void entry_00156100_0x156100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156100_0x156100");
#endif

    ctx->pc = 0x156100u;

    // 0x156100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156104: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x156108: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15610c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x15610cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156114: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x156118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156114u;
        // 0x156118: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156114) {
            ctx->pc = 0x15612Cu;
            return;
        }
    }
    ctx->pc = 0x15611Cu;
}
