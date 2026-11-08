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

// Function: entry_001d2d4c
// Address: 0x1d2d4c - 0x1d2d70
void entry_001d2d4c_0x1d2d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d4c_0x1d2d4c");
#endif

    ctx->pc = 0x1d2d4cu;

    // 0x1d2d4c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d2d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d2d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2D50u;
    {
        const bool branch_taken_0x1d2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D50u;
        // 0x1d2d54: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d50) {
            ctx->pc = 0x1D2D70u;
            return;
        }
    }
    ctx->pc = 0x1D2D58u;
    // 0x1d2d58: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2d5c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d2d60: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d2d64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2D64u;
    {
        const bool branch_taken_0x1d2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D64u;
        // 0x1d2d68: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d64) {
            ctx->pc = 0x1D2D80u;
            return;
        }
    }
    ctx->pc = 0x1D2D6Cu;
    // 0x1d2d6c: 0x0  nop
    ctx->pc = 0x1d2d6cu;
    // NOP
    ctx->pc = 0x1d2d70u;
}
