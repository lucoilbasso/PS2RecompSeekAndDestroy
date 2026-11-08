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

// Function: entry_00103314
// Address: 0x103314 - 0x10332c
void entry_00103314_0x103314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103314_0x103314");
#endif

    ctx->pc = 0x103314u;

    // 0x103314: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x103314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103318: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x103318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x10331c: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x10331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x103320: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x10332Cu;
            return;
        }
    }
    ctx->pc = 0x103328u;
    // 0x103328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x10332cu;
}
