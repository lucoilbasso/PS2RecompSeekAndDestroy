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

// Function: entry_001cb008
// Address: 0x1cb008 - 0x1cb01c
void entry_001cb008_0x1cb008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb008_0x1cb008");
#endif

    ctx->pc = 0x1cb008u;

    // 0x1cb008: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb00c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB00Cu;
    {
        const bool branch_taken_0x1cb00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB00Cu;
        // 0x1cb010: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb00c) {
            ctx->pc = 0x1CB01Cu;
            return;
        }
    }
    ctx->pc = 0x1CB014u;
    // 0x1cb014: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb018: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1cb018u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->pc = 0x1cb01cu;
}
