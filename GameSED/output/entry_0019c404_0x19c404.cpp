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

// Function: entry_0019c404
// Address: 0x19c404 - 0x19c43c
void entry_0019c404_0x19c404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c404_0x19c404");
#endif

    ctx->pc = 0x19c404u;

    // 0x19c404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c408: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c408u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c40c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c410: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c41c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c420: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c42c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c430: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C430u;
    {
        const bool branch_taken_0x19c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C430u;
        // 0x19c434: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c430) {
            ctx->pc = 0x19C43Cu;
            return;
        }
    }
    ctx->pc = 0x19C438u;
    // 0x19c438: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19c43cu;
}
