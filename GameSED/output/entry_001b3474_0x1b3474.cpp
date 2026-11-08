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

// Function: entry_001b3474
// Address: 0x1b3474 - 0x1b349c
void entry_001b3474_0x1b3474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3474_0x1b3474");
#endif

    ctx->pc = 0x1b3474u;

    // 0x1b3474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3478: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3478u;
    {
        const bool branch_taken_0x1b3478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3478u;
        // 0x1b347c: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3478) {
            ctx->pc = 0x1B3520u;
            return;
        }
    }
    ctx->pc = 0x1B3480u;
    // 0x1b3480: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b3480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b3484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3484u;
    {
        const bool branch_taken_0x1b3484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3484u;
        // 0x1b3488: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3484) {
            ctx->pc = 0x1B349Cu;
            return;
        }
    }
    ctx->pc = 0x1B348Cu;
    // 0x1b348c: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B348Cu;
    {
        const bool branch_taken_0x1b348c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x1b348c) {
            ctx->pc = 0x1B3490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B348Cu;
            // 0x1b3490: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B34ACu;
            return;
        }
    }
    ctx->pc = 0x1B3494u;
    // 0x1b3494: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B3494u;
    {
        const bool branch_taken_0x1b3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3494u;
        // 0x1b3498: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3494) {
            ctx->pc = 0x1B3588u;
            return;
        }
    }
    ctx->pc = 0x1B349Cu;
}
