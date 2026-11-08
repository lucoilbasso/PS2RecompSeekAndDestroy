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

// Function: entry_0013ddcc
// Address: 0x13ddcc - 0x13dde8
void entry_0013ddcc_0x13ddcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ddcc_0x13ddcc");
#endif

    ctx->pc = 0x13ddccu;

    // 0x13ddcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ddd0: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13ddd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13ddd8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13dddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DDDCu;
    {
        const bool branch_taken_0x13dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDDCu;
        // 0x13dde0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dddc) {
            ctx->pc = 0x13DDECu;
            return;
        }
    }
    ctx->pc = 0x13DDE4u;
    // 0x13dde4: 0x0  nop
    ctx->pc = 0x13dde4u;
    // NOP
    ctx->pc = 0x13dde8u;
}
