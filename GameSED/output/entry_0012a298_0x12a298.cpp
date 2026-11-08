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

// Function: entry_0012a298
// Address: 0x12a298 - 0x12a2c0
void entry_0012a298_0x12a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a298_0x12a298");
#endif

    ctx->pc = 0x12a298u;

    // 0x12a298: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a29c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a2a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A2A0u;
    {
        const bool branch_taken_0x12a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2a0) {
            ctx->pc = 0x12A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A2A0u;
            // 0x12a2a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A2C0u;
            return;
        }
    }
    ctx->pc = 0x12A2A8u;
    // 0x12a2a8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x12a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x12a2ac: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a2b0: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a2b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A2B4u;
    {
        const bool branch_taken_0x12a2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2B4u;
        // 0x12a2b8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2b4) {
            ctx->pc = 0x12A2C4u;
            return;
        }
    }
    ctx->pc = 0x12A2BCu;
    // 0x12a2bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12a2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12a2c0u;
}
