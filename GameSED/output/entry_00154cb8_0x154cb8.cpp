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

// Function: entry_00154cb8
// Address: 0x154cb8 - 0x154cd8
void entry_00154cb8_0x154cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154cb8_0x154cb8");
#endif

    ctx->pc = 0x154cb8u;

    // 0x154cb8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154CB8u;
    {
        const bool branch_taken_0x154cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154cb8) {
            ctx->pc = 0x154CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CB8u;
            // 0x154cbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CD8u;
            return;
        }
    }
    ctx->pc = 0x154CC0u;
    // 0x154cc0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154cc4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x154cc8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x154CCCu;
    {
        const bool branch_taken_0x154ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CCCu;
        // 0x154cd0: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ccc) {
            ctx->pc = 0x154CF0u;
            return;
        }
    }
    ctx->pc = 0x154CD4u;
    // 0x154cd4: 0x0  nop
    ctx->pc = 0x154cd4u;
    // NOP
    ctx->pc = 0x154cd8u;
}
