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

// Function: entry_0016ab04
// Address: 0x16ab04 - 0x16ab30
void entry_0016ab04_0x16ab04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab04_0x16ab04");
#endif

    ctx->pc = 0x16ab04u;

    // 0x16ab04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ab08: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x16ab0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16ab0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab10: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x16ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x16ab14: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x16ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16ab18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AB18u;
    {
        const bool branch_taken_0x16ab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB18u;
        // 0x16ab1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab18) {
            ctx->pc = 0x16AB30u;
            return;
        }
    }
    ctx->pc = 0x16AB20u;
    // 0x16ab20: 0x8cc301b4  lw          $v1, 0x1B4($a2)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x16ab24: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16ab28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AB28u;
    {
        const bool branch_taken_0x16ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB28u;
        // 0x16ab2c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab28) {
            ctx->pc = 0x16AB34u;
            return;
        }
    }
    ctx->pc = 0x16AB30u;
}
