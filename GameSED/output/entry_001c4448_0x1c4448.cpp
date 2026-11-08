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

// Function: entry_001c4448
// Address: 0x1c4448 - 0x1c4478
void entry_001c4448_0x1c4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4448_0x1c4448");
#endif

    ctx->pc = 0x1c4448u;

label_1c4448:
    // 0x1c4448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c444c: 0x0  nop
    ctx->pc = 0x1c444cu;
    // NOP
    // 0x1c4450: 0x0  nop
    ctx->pc = 0x1c4450u;
    // NOP
    // 0x1c4454: 0x0  nop
    ctx->pc = 0x1c4454u;
    // NOP
    // 0x1c4458: 0x0  nop
    ctx->pc = 0x1c4458u;
    // NOP
    // 0x1c445c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C445Cu;
    {
        const bool branch_taken_0x1c445c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c445c) {
            ctx->pc = 0x1C4448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4448;
        }
    }
    ctx->pc = 0x1C4464u;
    // 0x1c4464: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4468: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c4468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c446c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c4470: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c4470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c4474: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1c4474u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
    ctx->pc = 0x1c4478u;
}
