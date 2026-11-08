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

// Function: entry_0019be20
// Address: 0x19be20 - 0x19be48
void entry_0019be20_0x19be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be20_0x19be20");
#endif

    ctx->pc = 0x19be20u;

    // 0x19be20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19be24: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19be28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19be2c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BE2Cu;
    {
        const bool branch_taken_0x19be2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be2c) {
            ctx->pc = 0x19BE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BE2Cu;
            // 0x19be30: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BE48u;
            return;
        }
    }
    ctx->pc = 0x19BE34u;
    // 0x19be34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19be38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19be3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19be40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BE40u;
    {
        const bool branch_taken_0x19be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE40u;
        // 0x19be44: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be40) {
            ctx->pc = 0x19BEC0u;
            return;
        }
    }
    ctx->pc = 0x19BE48u;
}
