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

// Function: entry_001a1108
// Address: 0x1a1108 - 0x1a1120
void entry_001a1108_0x1a1108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1108_0x1a1108");
#endif

    ctx->pc = 0x1a1108u;

    // 0x1a1108: 0x54450029  bnel        $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A1108u;
    {
        const bool branch_taken_0x1a1108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a1108) {
            ctx->pc = 0x1A110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1108u;
            // 0x1a110c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11B0u;
            return;
        }
    }
    ctx->pc = 0x1A1110u;
    // 0x1a1110: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1110u;
    {
        const bool branch_taken_0x1a1110 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1110u;
        // 0x1a1114: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1110) {
            ctx->pc = 0x1A1120u;
            return;
        }
    }
    ctx->pc = 0x1A1118u;
    // 0x1a1118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1118u;
    {
        const bool branch_taken_0x1a1118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1118u;
        // 0x1a111c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1118) {
            ctx->pc = 0x1A1124u;
            return;
        }
    }
    ctx->pc = 0x1A1120u;
}
