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

// Function: entry_001a6930
// Address: 0x1a6930 - 0x1a6948
void entry_001a6930_0x1a6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6930_0x1a6930");
#endif

    ctx->pc = 0x1a6930u;

    // 0x1a6930: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6930u;
    {
        const bool branch_taken_0x1a6930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6930) {
            ctx->pc = 0x1A6934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6930u;
            // 0x1a6934: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6950u;
            return;
        }
    }
    ctx->pc = 0x1A6938u;
    // 0x1a6938: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a693c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a6940: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6940u;
    {
        const bool branch_taken_0x1a6940 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6940) {
            ctx->pc = 0x1A6944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6940u;
            // 0x1a6944: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6948u;
            return;
        }
    }
    ctx->pc = 0x1A6948u;
}
