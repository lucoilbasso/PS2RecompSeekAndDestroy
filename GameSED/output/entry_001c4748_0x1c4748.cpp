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

// Function: entry_001c4748
// Address: 0x1c4748 - 0x1c4780
void entry_001c4748_0x1c4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4748_0x1c4748");
#endif

    ctx->pc = 0x1c4748u;

label_1c4748:
    // 0x1c4748: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1c4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c474c: 0x0  nop
    ctx->pc = 0x1c474cu;
    // NOP
    // 0x1c4750: 0x0  nop
    ctx->pc = 0x1c4750u;
    // NOP
    // 0x1c4754: 0x0  nop
    ctx->pc = 0x1c4754u;
    // NOP
    // 0x1c4758: 0x0  nop
    ctx->pc = 0x1c4758u;
    // NOP
    // 0x1c475c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C475Cu;
    {
        const bool branch_taken_0x1c475c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c475c) {
            ctx->pc = 0x1C4748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4748;
        }
    }
    ctx->pc = 0x1C4764u;
    // 0x1c4764: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c4764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4768: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x1c476c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c4770: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c4770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4774: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c4774u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x1c4778: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c4778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c477c: 0x0  nop
    ctx->pc = 0x1c477cu;
    // NOP
    ctx->pc = 0x1c4780u;
}
