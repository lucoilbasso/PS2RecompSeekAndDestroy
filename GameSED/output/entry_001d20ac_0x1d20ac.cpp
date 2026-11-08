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

// Function: entry_001d20ac
// Address: 0x1d20ac - 0x1d20d8
void entry_001d20ac_0x1d20ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d20ac_0x1d20ac");
#endif

    ctx->pc = 0x1d20acu;

    // 0x1d20ac: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d20b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d20b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d20b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d20b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d20bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d20c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d20c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d20c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d20c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d20cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d20d0: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x1D20D0u;
    {
        const bool branch_taken_0x1d20d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D0u;
        // 0x1d20d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d0) {
            ctx->pc = 0x1D2784u;
            return;
        }
    }
    ctx->pc = 0x1D20D8u;
}
