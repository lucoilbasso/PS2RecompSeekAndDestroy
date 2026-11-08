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

// Function: entry_001c1a60
// Address: 0x1c1a60 - 0x1c1a74
void entry_001c1a60_0x1c1a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a60_0x1c1a60");
#endif

    ctx->pc = 0x1c1a60u;

    // 0x1c1a60: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A60u;
        // 0x1c1a64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A74u;
            return;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c1a6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c1a70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1c1a74u;
}
