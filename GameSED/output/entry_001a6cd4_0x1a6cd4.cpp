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

// Function: entry_001a6cd4
// Address: 0x1a6cd4 - 0x1a6cf8
void entry_001a6cd4_0x1a6cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6cd4_0x1a6cd4");
#endif

    ctx->pc = 0x1a6cd4u;

    // 0x1a6cd4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A6CD4u;
    {
        const bool branch_taken_0x1a6cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD4u;
        // 0x1a6cd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cd4) {
            ctx->pc = 0x1A6D2Cu;
            return;
        }
    }
    ctx->pc = 0x1A6CDCu;
    // 0x1a6cdc: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6CDCu;
    {
        const bool branch_taken_0x1a6cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6cdc) {
            ctx->pc = 0x1A6CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6CDCu;
            // 0x1a6ce0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6CF8u;
            return;
        }
    }
    ctx->pc = 0x1A6CE4u;
    // 0x1a6ce4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a6ce8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6cec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6D2Cu;
            return;
        }
    }
    ctx->pc = 0x1A6CF4u;
    // 0x1a6cf4: 0x0  nop
    ctx->pc = 0x1a6cf4u;
    // NOP
    ctx->pc = 0x1a6cf8u;
}
