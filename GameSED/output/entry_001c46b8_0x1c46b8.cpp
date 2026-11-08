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

// Function: entry_001c46b8
// Address: 0x1c46b8 - 0x1c46f0
void entry_001c46b8_0x1c46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c46b8_0x1c46b8");
#endif

    ctx->pc = 0x1c46b8u;

label_1c46b8:
    // 0x1c46b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c46bc: 0x0  nop
    ctx->pc = 0x1c46bcu;
    // NOP
    // 0x1c46c0: 0x0  nop
    ctx->pc = 0x1c46c0u;
    // NOP
    // 0x1c46c4: 0x0  nop
    ctx->pc = 0x1c46c4u;
    // NOP
    // 0x1c46c8: 0x0  nop
    ctx->pc = 0x1c46c8u;
    // NOP
    // 0x1c46cc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C46CCu;
    {
        const bool branch_taken_0x1c46cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c46cc) {
            ctx->pc = 0x1C46B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c46b8;
        }
    }
    ctx->pc = 0x1C46D4u;
    // 0x1c46d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c46d8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x1c46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x1c46dc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c46dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c46e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c46e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c46e4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x1c46e8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c46ec: 0x0  nop
    ctx->pc = 0x1c46ecu;
    // NOP
    ctx->pc = 0x1c46f0u;
}
