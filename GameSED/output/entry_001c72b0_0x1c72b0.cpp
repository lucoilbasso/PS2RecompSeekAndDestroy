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

// Function: entry_001c72b0
// Address: 0x1c72b0 - 0x1c72c8
void entry_001c72b0_0x1c72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c72b0_0x1c72b0");
#endif

    ctx->pc = 0x1c72b0u;

    // 0x1c72b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C72B0u;
    {
        const bool branch_taken_0x1c72b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B0u;
        // 0x1c72b4: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72b0) {
            ctx->pc = 0x1C72C8u;
            return;
        }
    }
    ctx->pc = 0x1C72B8u;
    // 0x1c72b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c72bc: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1c72c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72C0u;
        // 0x1c72c4: 0x3f5c3  sra         $fp, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C72E4u;
            return;
        }
    }
    ctx->pc = 0x1C72C8u;
}
