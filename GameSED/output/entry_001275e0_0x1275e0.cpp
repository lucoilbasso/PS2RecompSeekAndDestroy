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

// Function: entry_001275e0
// Address: 0x1275e0 - 0x127610
void entry_001275e0_0x1275e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001275e0_0x1275e0");
#endif

    ctx->pc = 0x1275e0u;

    // 0x1275e0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1275e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1275e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1275e8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1275ec: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1275ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1275f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1275F0u;
    {
        const bool branch_taken_0x1275f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275f0) {
            ctx->pc = 0x1275F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275F0u;
            // 0x1275f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127610u;
            return;
        }
    }
    ctx->pc = 0x1275F8u;
    // 0x1275f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1275fc: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x127600: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x127600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x127604: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x127604u;
    {
        const bool branch_taken_0x127604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127604) {
            ctx->pc = 0x127608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127604u;
            // 0x127608: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127618u;
            return;
        }
    }
    ctx->pc = 0x12760Cu;
    // 0x12760c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x127610u;
}
