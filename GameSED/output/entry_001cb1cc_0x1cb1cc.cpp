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

// Function: entry_001cb1cc
// Address: 0x1cb1cc - 0x1cb1ec
void entry_001cb1cc_0x1cb1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb1cc_0x1cb1cc");
#endif

    ctx->pc = 0x1cb1ccu;

    // 0x1cb1cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb1d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1cb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cb1d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cb1d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB1D8u;
    {
        const bool branch_taken_0x1cb1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1D8u;
        // 0x1cb1dc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d8) {
            ctx->pc = 0x1CB1ECu;
            return;
        }
    }
    ctx->pc = 0x1CB1E0u;
    // 0x1cb1e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb1e4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB1E4u;
    {
        const bool branch_taken_0x1cb1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1e4) {
            ctx->pc = 0x1CB1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB1E4u;
            // 0x1cb1e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB274u;
            return;
        }
    }
    ctx->pc = 0x1CB1ECu;
}
