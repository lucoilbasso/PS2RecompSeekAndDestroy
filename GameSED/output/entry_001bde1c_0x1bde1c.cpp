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

// Function: entry_001bde1c
// Address: 0x1bde1c - 0x1bde50
void entry_001bde1c_0x1bde1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bde1c_0x1bde1c");
#endif

    ctx->pc = 0x1bde1cu;

    // 0x1bde1c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bde20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bde24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bde24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bde28: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bde2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE2Cu;
    {
        const bool branch_taken_0x1bde2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE2Cu;
        // 0x1bde30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde2c) {
            ctx->pc = 0x1BDE50u;
            return;
        }
    }
    ctx->pc = 0x1BDE34u;
    // 0x1bde34: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bde38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bde3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bde40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bde44: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1bde44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x1bde48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bde48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bde4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bde4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bde50u;
}
