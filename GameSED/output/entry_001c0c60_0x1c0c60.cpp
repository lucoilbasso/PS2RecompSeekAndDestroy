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

// Function: entry_001c0c60
// Address: 0x1c0c60 - 0x1c0c74
void entry_001c0c60_0x1c0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c60_0x1c0c60");
#endif

    ctx->pc = 0x1c0c60u;

    // 0x1c0c60: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C60u;
    {
        const bool branch_taken_0x1c0c60 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C60u;
        // 0x1c0c64: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c60) {
            ctx->pc = 0x1C0C74u;
            return;
        }
    }
    ctx->pc = 0x1C0C68u;
    // 0x1c0c68: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1c0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c0c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C6Cu;
    {
        const bool branch_taken_0x1c0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C6Cu;
        // 0x1c0c70: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c6c) {
            ctx->pc = 0x1C0C78u;
            return;
        }
    }
    ctx->pc = 0x1C0C74u;
}
