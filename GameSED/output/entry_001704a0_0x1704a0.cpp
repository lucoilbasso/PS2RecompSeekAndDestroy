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

// Function: entry_001704a0
// Address: 0x1704a0 - 0x1704c0
void entry_001704a0_0x1704a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001704a0_0x1704a0");
#endif

    ctx->pc = 0x1704a0u;

    // 0x1704a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1704A0u;
    {
        const bool branch_taken_0x1704a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704A0u;
        // 0x1704a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704a0) {
            ctx->pc = 0x1704C0u;
            return;
        }
    }
    ctx->pc = 0x1704A8u;
    // 0x1704a8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1704ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704b0: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x1704b4: 0x805c46a  j           func_1711A8
    ctx->pc = 0x1704B4u;
    ctx->pc = 0x1704B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704B4u;
    // 0x1704b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1711A8u;
    audioDecIsPreset_0x1711a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1704BCu;
    // 0x1704bc: 0x0  nop
    ctx->pc = 0x1704bcu;
    // NOP
    ctx->pc = 0x1704c0u;
}
