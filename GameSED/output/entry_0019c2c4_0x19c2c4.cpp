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

// Function: entry_0019c2c4
// Address: 0x19c2c4 - 0x19c2fc
void entry_0019c2c4_0x19c2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c2c4_0x19c2c4");
#endif

    ctx->pc = 0x19c2c4u;

    // 0x19c2c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c2c8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c2cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c2d0: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c2d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c2d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c2dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c2e0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c2e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c2e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c2ec: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c2f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C2F0u;
    {
        const bool branch_taken_0x19c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2F0u;
        // 0x19c2f4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2f0) {
            ctx->pc = 0x19C2FCu;
            return;
        }
    }
    ctx->pc = 0x19C2F8u;
    // 0x19c2f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19c2fcu;
}
