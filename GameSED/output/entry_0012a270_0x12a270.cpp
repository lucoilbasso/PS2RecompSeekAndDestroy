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

// Function: entry_0012a270
// Address: 0x12a270 - 0x12a298
void entry_0012a270_0x12a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a270_0x12a270");
#endif

    ctx->pc = 0x12a270u;

    // 0x12a270: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a274: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A278u;
    {
        const bool branch_taken_0x12a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A278u;
        // 0x12a27c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a278) {
            ctx->pc = 0x12A298u;
            return;
        }
    }
    ctx->pc = 0x12A280u;
    // 0x12a280: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x12a284: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a288: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a28c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12A28Cu;
    {
        const bool branch_taken_0x12a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A28Cu;
        // 0x12a290: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a28c) {
            ctx->pc = 0x12A2C4u;
            return;
        }
    }
    ctx->pc = 0x12A294u;
    // 0x12a294: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x12a298u;
}
