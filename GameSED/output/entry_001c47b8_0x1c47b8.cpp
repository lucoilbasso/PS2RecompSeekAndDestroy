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

// Function: entry_001c47b8
// Address: 0x1c47b8 - 0x1c47e8
void entry_001c47b8_0x1c47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c47b8_0x1c47b8");
#endif

    ctx->pc = 0x1c47b8u;

label_1c47b8:
    // 0x1c47b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c47bc: 0x0  nop
    ctx->pc = 0x1c47bcu;
    // NOP
    // 0x1c47c0: 0x0  nop
    ctx->pc = 0x1c47c0u;
    // NOP
    // 0x1c47c4: 0x0  nop
    ctx->pc = 0x1c47c4u;
    // NOP
    // 0x1c47c8: 0x0  nop
    ctx->pc = 0x1c47c8u;
    // NOP
    // 0x1c47cc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C47CCu;
    {
        const bool branch_taken_0x1c47cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c47cc) {
            ctx->pc = 0x1C47B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c47b8;
        }
    }
    ctx->pc = 0x1C47D4u;
    // 0x1c47d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c47d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c47dc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c47dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c47e0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c47e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c47e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c47e4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    ctx->pc = 0x1c47e8u;
}
