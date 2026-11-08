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

// Function: entry_001254e0
// Address: 0x1254e0 - 0x125510
void entry_001254e0_0x1254e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001254e0_0x1254e0");
#endif

    ctx->pc = 0x1254e0u;

    // 0x1254e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1254e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1254e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1254e8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1254ec: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1254ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1254f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1254F0u;
    {
        const bool branch_taken_0x1254f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1254f0) {
            ctx->pc = 0x1254F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1254F0u;
            // 0x1254f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125510u;
            return;
        }
    }
    ctx->pc = 0x1254F8u;
    // 0x1254f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1254fc: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x125500: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x125500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x125504: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125504u;
    {
        const bool branch_taken_0x125504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125504) {
            ctx->pc = 0x125520u;
            return;
        }
    }
    ctx->pc = 0x12550Cu;
    // 0x12550c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x125510u;
}
