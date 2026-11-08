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

// Function: entry_0018c368
// Address: 0x18c368 - 0x18c388
void entry_0018c368_0x18c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c368_0x18c368");
#endif

    ctx->pc = 0x18c368u;

label_18c368:
    // 0x18c368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c36c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18c370: 0x0  nop
    ctx->pc = 0x18c370u;
    // NOP
    // 0x18c374: 0x0  nop
    ctx->pc = 0x18c374u;
    // NOP
    // 0x18c378: 0x0  nop
    ctx->pc = 0x18c378u;
    // NOP
    // 0x18c37c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18C37Cu;
    {
        const bool branch_taken_0x18c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c37c) {
            ctx->pc = 0x18C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c368;
        }
    }
    ctx->pc = 0x18C384u;
    // 0x18c384: 0x0  nop
    ctx->pc = 0x18c384u;
    // NOP
    ctx->pc = 0x18c388u;
}
