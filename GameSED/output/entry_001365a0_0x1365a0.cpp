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

// Function: entry_001365a0
// Address: 0x1365a0 - 0x1365b8
void entry_001365a0_0x1365a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001365a0_0x1365a0");
#endif

    ctx->pc = 0x1365a0u;

    // 0x1365a0: 0x12620029  beq         $s3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1365A0u;
    {
        const bool branch_taken_0x1365a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1365A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365A0u;
        // 0x1365a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365a0) {
            ctx->pc = 0x136648u;
            return;
        }
    }
    ctx->pc = 0x1365A8u;
    // 0x1365a8: 0x1262005f  beq         $s3, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1365A8u;
    {
        const bool branch_taken_0x1365a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1365a8) {
            ctx->pc = 0x136728u;
            return;
        }
    }
    ctx->pc = 0x1365B0u;
    // 0x1365b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1365B0u;
    {
        const bool branch_taken_0x1365b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365B0u;
        // 0x1365b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365b0) {
            ctx->pc = 0x136738u;
            return;
        }
    }
    ctx->pc = 0x1365B8u;
}
