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

// Function: entry_001c58a8
// Address: 0x1c58a8 - 0x1c58c4
void entry_001c58a8_0x1c58a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c58a8_0x1c58a8");
#endif

    ctx->pc = 0x1c58a8u;

    // 0x1c58a8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C58A8u;
    {
        const bool branch_taken_0x1c58a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58A8u;
        // 0x1c58ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58a8) {
            ctx->pc = 0x1C58D4u;
            return;
        }
    }
    ctx->pc = 0x1C58B0u;
    // 0x1c58b0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C58B0u;
    {
        const bool branch_taken_0x1c58b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58B0u;
        // 0x1c58b4: 0xae60ddf8  sw          $zero, -0x2208($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294958584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58b0) {
            ctx->pc = 0x1C58C4u;
            return;
        }
    }
    ctx->pc = 0x1C58B8u;
    // 0x1c58b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c58bc: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x1c58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410400u));
    // 0x1c58c0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1c58c4u;
}
