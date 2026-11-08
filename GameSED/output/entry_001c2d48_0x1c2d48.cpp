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

// Function: entry_001c2d48
// Address: 0x1c2d48 - 0x1c2d84
void entry_001c2d48_0x1c2d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d48_0x1c2d48");
#endif

    ctx->pc = 0x1c2d48u;

    // 0x1c2d48: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2D48u;
    {
        const bool branch_taken_0x1c2d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d48) {
            ctx->pc = 0x1C2D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D48u;
            // 0x1c2d4c: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D84u;
            return;
        }
    }
    ctx->pc = 0x1C2D50u;
    // 0x1c2d50: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2d54: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x1c2d58: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x1c2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
    // 0x1c2d5c: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2d60: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x1c2d64: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x1c2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x1c2d68: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x1c2d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2d6c: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x1c2d70: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x1c2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
    // 0x1c2d74: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x1c2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
    // 0x1c2d78: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
    // 0x1c2d7c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x1c2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x1c2d80: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    ctx->pc = 0x1c2d84u;
}
