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

// Function: entry_001165d0
// Address: 0x1165d0 - 0x1165e8
void entry_001165d0_0x1165d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001165d0_0x1165d0");
#endif

    ctx->pc = 0x1165d0u;

    // 0x1165d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1165d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1165d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1165D4u;
    {
        const bool branch_taken_0x1165d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1165D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165D4u;
        // 0x1165d8: 0x29a03  sra         $s3, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165d4) {
            ctx->pc = 0x1165E8u;
            return;
        }
    }
    ctx->pc = 0x1165DCu;
    // 0x1165dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1165e0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1165E0u;
    {
        const bool branch_taken_0x1165e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165E0u;
        // 0x1165e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165e0) {
            ctx->pc = 0x116734u;
            return;
        }
    }
    ctx->pc = 0x1165E8u;
}
