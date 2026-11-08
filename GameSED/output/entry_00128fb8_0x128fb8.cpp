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

// Function: entry_00128fb8
// Address: 0x128fb8 - 0x128fec
void entry_00128fb8_0x128fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128fb8_0x128fb8");
#endif

    ctx->pc = 0x128fb8u;

    // 0x128fb8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x128fbc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x128fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128fc4: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x128fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x128fc8: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x128fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x128fcc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x128FCCu;
    {
        const bool branch_taken_0x128fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128fcc) {
            ctx->pc = 0x128FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FCCu;
            // 0x128fd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FECu;
            return;
        }
    }
    ctx->pc = 0x128FD4u;
    // 0x128fd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x128fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x128fd8: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x128fdc: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x128fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x128fe0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x128FE0u;
    {
        const bool branch_taken_0x128fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128fe0) {
            ctx->pc = 0x128FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FE0u;
            // 0x128fe4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FF8u;
            return;
        }
    }
    ctx->pc = 0x128FE8u;
    // 0x128fe8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x128fecu;
}
