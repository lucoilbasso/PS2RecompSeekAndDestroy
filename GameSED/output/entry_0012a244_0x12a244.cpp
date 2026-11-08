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

// Function: entry_0012a244
// Address: 0x12a244 - 0x12a270
void entry_0012a244_0x12a244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a244_0x12a244");
#endif

    ctx->pc = 0x12a244u;

    // 0x12a244: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x12a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a248: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12a24c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12a24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12a250: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A250u;
    {
        const bool branch_taken_0x12a250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A250u;
        // 0x12a254: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a250) {
            ctx->pc = 0x12A270u;
            return;
        }
    }
    ctx->pc = 0x12A258u;
    // 0x12a258: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12a25c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12a260: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12a260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12a264: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12A264u;
    {
        const bool branch_taken_0x12a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A264u;
        // 0x12a268: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a264) {
            ctx->pc = 0x12A2C4u;
            return;
        }
    }
    ctx->pc = 0x12A26Cu;
    // 0x12a26c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x12a270u;
}
