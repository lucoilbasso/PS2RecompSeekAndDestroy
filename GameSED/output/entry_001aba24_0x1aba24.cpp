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

// Function: entry_001aba24
// Address: 0x1aba24 - 0x1aba50
void entry_001aba24_0x1aba24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba24_0x1aba24");
#endif

    ctx->pc = 0x1aba24u;

    // 0x1aba24: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x1ABA24u;
    {
        const bool branch_taken_0x1aba24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA24u;
        // 0x1aba28: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba24) {
            ctx->pc = 0x1ABB18u;
            return;
        }
    }
    ctx->pc = 0x1ABA2Cu;
    // 0x1aba2c: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x1aba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x1aba30: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1aba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1aba34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aba38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1aba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1aba3c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABA3Cu;
    {
        const bool branch_taken_0x1aba3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA3Cu;
        // 0x1aba40: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba3c) {
            ctx->pc = 0x1ABA70u;
            return;
        }
    }
    ctx->pc = 0x1ABA44u;
    // 0x1aba44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1aba48: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x1aba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x1aba4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aba4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aba50u;
}
