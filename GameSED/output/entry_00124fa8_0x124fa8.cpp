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

// Function: entry_00124fa8
// Address: 0x124fa8 - 0x124fc8
void entry_00124fa8_0x124fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fa8_0x124fa8");
#endif

    ctx->pc = 0x124fa8u;

label_124fa8:
    // 0x124fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124fac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124fb0: 0x0  nop
    ctx->pc = 0x124fb0u;
    // NOP
    // 0x124fb4: 0x0  nop
    ctx->pc = 0x124fb4u;
    // NOP
    // 0x124fb8: 0x0  nop
    ctx->pc = 0x124fb8u;
    // NOP
    // 0x124fbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124FBCu;
    {
        const bool branch_taken_0x124fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fbc) {
            ctx->pc = 0x124FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124fa8;
        }
    }
    ctx->pc = 0x124FC4u;
    // 0x124fc4: 0x0  nop
    ctx->pc = 0x124fc4u;
    // NOP
    ctx->pc = 0x124fc8u;
}
