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

// Function: entry_001cff10
// Address: 0x1cff10 - 0x1cff38
void entry_001cff10_0x1cff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff10_0x1cff10");
#endif

    ctx->pc = 0x1cff10u;

    // 0x1cff10: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cff18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff1c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1cff1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cff20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cff24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cff28: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1cff28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1cff2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CFF2Cu;
    {
        const bool branch_taken_0x1cff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF2Cu;
        // 0x1cff30: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff2c) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CFF34u;
    // 0x1cff34: 0x0  nop
    ctx->pc = 0x1cff34u;
    // NOP
    ctx->pc = 0x1cff38u;
}
