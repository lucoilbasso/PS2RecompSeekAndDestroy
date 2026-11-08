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

// Function: entry_001287a8
// Address: 0x1287a8 - 0x1287d0
void entry_001287a8_0x1287a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287a8_0x1287a8");
#endif

    ctx->pc = 0x1287a8u;

    // 0x1287a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1287ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1287acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1287b0: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1287b4: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1287b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1287B8u;
    {
        const bool branch_taken_0x1287b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1287b8) {
            ctx->pc = 0x1287BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287B8u;
            // 0x1287bc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1287D0u;
            return;
        }
    }
    ctx->pc = 0x1287C0u;
    // 0x1287c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1287c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1287c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1287C4u;
    {
        const bool branch_taken_0x1287c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287C4u;
        // 0x1287c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287c4) {
            ctx->pc = 0x1287E8u;
            return;
        }
    }
    ctx->pc = 0x1287CCu;
    // 0x1287cc: 0x0  nop
    ctx->pc = 0x1287ccu;
    // NOP
    ctx->pc = 0x1287d0u;
}
