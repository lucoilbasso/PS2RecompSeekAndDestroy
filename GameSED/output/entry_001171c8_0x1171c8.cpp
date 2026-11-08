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

// Function: entry_001171c8
// Address: 0x1171c8 - 0x1171e0
void entry_001171c8_0x1171c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171c8_0x1171c8");
#endif

    ctx->pc = 0x1171c8u;

    // 0x1171c8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1171C8u;
    {
        const bool branch_taken_0x1171c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C8u;
        // 0x1171cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c8) {
            ctx->pc = 0x1171E0u;
            return;
        }
    }
    ctx->pc = 0x1171D0u;
    // 0x1171d0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1171D0u;
    {
        const bool branch_taken_0x1171d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1171D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D0u;
        // 0x1171d4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d0) {
            ctx->pc = 0x1171E0u;
            return;
        }
    }
    ctx->pc = 0x1171D8u;
    // 0x1171d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1171D8u;
    {
        const bool branch_taken_0x1171d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1171d8) {
            ctx->pc = 0x1171DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1171D8u;
            // 0x1171dc: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117200u;
            return;
        }
    }
    ctx->pc = 0x1171E0u;
}
