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

// Function: entry_001cfa88
// Address: 0x1cfa88 - 0x1cfab0
void entry_001cfa88_0x1cfa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfa88_0x1cfa88");
#endif

    ctx->pc = 0x1cfa88u;

    // 0x1cfa88: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1cfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x1cfa8c: 0x5000008  bltz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFA8Cu;
    {
        const bool branch_taken_0x1cfa8c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1CFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA8Cu;
        // 0x1cfa90: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa8c) {
            ctx->pc = 0x1CFAB0u;
            return;
        }
    }
    ctx->pc = 0x1CFA94u;
    // 0x1cfa94: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1cfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1cfa98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cfaa0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cfaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cfaa4: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1CFAA4u;
    {
        const bool branch_taken_0x1cfaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAA4u;
        // 0x1cfaa8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaa4) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CFAACu;
    // 0x1cfaac: 0x0  nop
    ctx->pc = 0x1cfaacu;
    // NOP
    ctx->pc = 0x1cfab0u;
}
