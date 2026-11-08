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

// Function: entry_001b1e78
// Address: 0x1b1e78 - 0x1b1e9c
void entry_001b1e78_0x1b1e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e78_0x1b1e78");
#endif

    ctx->pc = 0x1b1e78u;

    // 0x1b1e78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b1e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e7c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1E7Cu;
    {
        const bool branch_taken_0x1b1e7c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1B1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E7Cu;
        // 0x1b1e80: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e7c) {
            ctx->pc = 0x1B1E9Cu;
            return;
        }
    }
    ctx->pc = 0x1B1E84u;
    // 0x1b1e84: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1b1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b1e88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1e8c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1b1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1b1e90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b1e94: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1b1e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1b1e98: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1b1e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1b1e9cu;
}
