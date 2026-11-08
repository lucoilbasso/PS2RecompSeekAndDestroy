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

// Function: entry_001d30c0
// Address: 0x1d30c0 - 0x1d30e8
void entry_001d30c0_0x1d30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d30c0_0x1d30c0");
#endif

    ctx->pc = 0x1d30c0u;

    // 0x1d30c0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d30c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D30C4u;
    {
        const bool branch_taken_0x1d30c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30C4u;
        // 0x1d30c8: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30c4) {
            ctx->pc = 0x1D3128u;
            return;
        }
    }
    ctx->pc = 0x1D30CCu;
    // 0x1d30cc: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d30d0: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x1d30d4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1d30d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1d30d8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d30dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D30DCu;
    {
        const bool branch_taken_0x1d30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30DCu;
        // 0x1d30e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30dc) {
            ctx->pc = 0x1D3128u;
            return;
        }
    }
    ctx->pc = 0x1D30E4u;
    // 0x1d30e4: 0x0  nop
    ctx->pc = 0x1d30e4u;
    // NOP
    ctx->pc = 0x1d30e8u;
}
