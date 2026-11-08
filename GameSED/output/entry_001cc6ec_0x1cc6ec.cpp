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

// Function: entry_001cc6ec
// Address: 0x1cc6ec - 0x1cc708
void entry_001cc6ec_0x1cc6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc6ec_0x1cc6ec");
#endif

    ctx->pc = 0x1cc6ecu;

    // 0x1cc6ec: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC6ECu;
    {
        const bool branch_taken_0x1cc6ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ECu;
        // 0x1cc6f0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6ec) {
            ctx->pc = 0x1CC708u;
            return;
        }
    }
    ctx->pc = 0x1CC6F4u;
    // 0x1cc6f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cc6f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cc6fc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1CC6FCu;
    {
        const bool branch_taken_0x1cc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6fc) {
            ctx->pc = 0x1CC8B0u;
            return;
        }
    }
    ctx->pc = 0x1CC704u;
    // 0x1cc704: 0x0  nop
    ctx->pc = 0x1cc704u;
    // NOP
    ctx->pc = 0x1cc708u;
}
