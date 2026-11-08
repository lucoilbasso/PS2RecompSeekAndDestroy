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

// Function: entry_001a0398
// Address: 0x1a0398 - 0x1a03b0
void entry_001a0398_0x1a0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0398_0x1a0398");
#endif

    ctx->pc = 0x1a0398u;

    // 0x1a0398: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0398u;
    {
        const bool branch_taken_0x1a0398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0398) {
            ctx->pc = 0x1A039Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0398u;
            // 0x1a039c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A03B0u;
            return;
        }
    }
    ctx->pc = 0x1A03A0u;
    // 0x1a03a0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a03a4: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A03A4u;
    {
        const bool branch_taken_0x1a03a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A4u;
        // 0x1a03a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03a4) {
            ctx->pc = 0x1A03CCu;
            return;
        }
    }
    ctx->pc = 0x1A03ACu;
    // 0x1a03ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1a03b0u;
}
