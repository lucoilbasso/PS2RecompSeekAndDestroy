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

// Function: entry_001cfe90
// Address: 0x1cfe90 - 0x1cfeb8
void entry_001cfe90_0x1cfe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe90_0x1cfe90");
#endif

    ctx->pc = 0x1cfe90u;

    // 0x1cfe90: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cfe98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe9c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1cfe9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cfea0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cfea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cfea4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cfea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cfea8: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1cfea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1cfeac: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1CFEACu;
    {
        const bool branch_taken_0x1cfeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEACu;
        // 0x1cfeb0: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeac) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CFEB4u;
    // 0x1cfeb4: 0x0  nop
    ctx->pc = 0x1cfeb4u;
    // NOP
    ctx->pc = 0x1cfeb8u;
}
