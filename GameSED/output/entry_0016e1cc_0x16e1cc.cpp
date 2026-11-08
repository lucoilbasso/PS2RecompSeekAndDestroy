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

// Function: entry_0016e1cc
// Address: 0x16e1cc - 0x16e1e8
void entry_0016e1cc_0x16e1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1cc_0x16e1cc");
#endif

    ctx->pc = 0x16e1ccu;

    // 0x16e1cc: 0x8e2402dc  lw          $a0, 0x2DC($s1)
    ctx->pc = 0x16e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1d0: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x16e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x16e1d4: 0x4420078  bltzl       $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x16E1D4u;
    {
        const bool branch_taken_0x16e1d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e1d4) {
            ctx->pc = 0x16E1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1D4u;
            // 0x16e1d8: 0xac8000e0  sw          $zero, 0xE0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3B8u;
            return;
        }
    }
    ctx->pc = 0x16E1DCu;
    // 0x16e1dc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x16E1DCu;
    {
        const bool branch_taken_0x16e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1DCu;
        // 0x16e1e0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1dc) {
            ctx->pc = 0x16E3BCu;
            return;
        }
    }
    ctx->pc = 0x16E1E4u;
    // 0x16e1e4: 0x0  nop
    ctx->pc = 0x16e1e4u;
    // NOP
    ctx->pc = 0x16e1e8u;
}
