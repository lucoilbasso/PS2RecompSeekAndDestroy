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

// Function: entry_001d23f8
// Address: 0x1d23f8 - 0x1d2438
void entry_001d23f8_0x1d23f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d23f8_0x1d23f8");
#endif

    ctx->pc = 0x1d23f8u;

    // 0x1d23f8: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1D23F8u;
    {
        const bool branch_taken_0x1d23f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23F8u;
        // 0x1d23fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23f8) {
            ctx->pc = 0x1D27A8u;
            return;
        }
    }
    ctx->pc = 0x1D2400u;
    // 0x1d2400: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d2404: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1d2404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1d2408: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x1d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x1d240c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d2410: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2414: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2418: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d241c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2424: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2424u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2428: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d242c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D242Cu;
    {
        const bool branch_taken_0x1d242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D242Cu;
        // 0x1d2430: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d242c) {
            ctx->pc = 0x1D2784u;
            return;
        }
    }
    ctx->pc = 0x1D2434u;
    // 0x1d2434: 0x0  nop
    ctx->pc = 0x1d2434u;
    // NOP
    ctx->pc = 0x1d2438u;
}
