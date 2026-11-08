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

// Function: entry_00165744
// Address: 0x165744 - 0x165770
void entry_00165744_0x165744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165744_0x165744");
#endif

    ctx->pc = 0x165744u;

    // 0x165744: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x165744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x165748: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16574c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x165750: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x165750u;
    {
        const bool branch_taken_0x165750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165750u;
        // 0x165754: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165750) {
            ctx->pc = 0x165728u;
            return;
        }
    }
    ctx->pc = 0x165758u;
    // 0x165758: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x165758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x16575c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165760: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x165760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x165764: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x165764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    // 0x165768: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16576c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x16576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x165770u;
}
