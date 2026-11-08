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

// Function: entry_001c4780
// Address: 0x1c4780 - 0x1c47b8
void entry_001c4780_0x1c4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4780_0x1c4780");
#endif

    ctx->pc = 0x1c4780u;

label_1c4780:
    // 0x1c4780: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4784: 0x0  nop
    ctx->pc = 0x1c4784u;
    // NOP
    // 0x1c4788: 0x0  nop
    ctx->pc = 0x1c4788u;
    // NOP
    // 0x1c478c: 0x0  nop
    ctx->pc = 0x1c478cu;
    // NOP
    // 0x1c4790: 0x0  nop
    ctx->pc = 0x1c4790u;
    // NOP
    // 0x1c4794: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4794u;
    {
        const bool branch_taken_0x1c4794 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c4794) {
            ctx->pc = 0x1C4780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C479Cu;
    // 0x1c479c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c47a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c47a4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c47a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c47a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c47ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c47acu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1c47b0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c47b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c47b4: 0x0  nop
    ctx->pc = 0x1c47b4u;
    // NOP
    ctx->pc = 0x1c47b8u;
}
