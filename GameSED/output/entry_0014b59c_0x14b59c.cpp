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

// Function: entry_0014b59c
// Address: 0x14b59c - 0x14b5b8
void entry_0014b59c_0x14b59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b59c_0x14b59c");
#endif

    ctx->pc = 0x14b59cu;

    // 0x14b59c: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14B59Cu;
    {
        const bool branch_taken_0x14b59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b59c) {
            ctx->pc = 0x14B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B59Cu;
            // 0x14b5a0: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B5F4u;
            return;
        }
    }
    ctx->pc = 0x14B5A4u;
    // 0x14b5a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14b5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x14b5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5ac: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B5ACu;
    {
        const bool branch_taken_0x14b5ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5ACu;
        // 0x14b5b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5ac) {
            ctx->pc = 0x14B5B8u;
            return;
        }
    }
    ctx->pc = 0x14B5B4u;
    // 0x14b5b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x14b5b8u;
}
