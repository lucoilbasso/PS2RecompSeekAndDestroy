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

// Function: entry_00191180
// Address: 0x191180 - 0x1911a0
void entry_00191180_0x191180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191180_0x191180");
#endif

    ctx->pc = 0x191180u;

label_191180:
    // 0x191180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191184: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x191188: 0x0  nop
    ctx->pc = 0x191188u;
    // NOP
    // 0x19118c: 0x0  nop
    ctx->pc = 0x19118cu;
    // NOP
    // 0x191190: 0x0  nop
    ctx->pc = 0x191190u;
    // NOP
    // 0x191194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x191194u;
    {
        const bool branch_taken_0x191194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191194) {
            ctx->pc = 0x191180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191180;
        }
    }
    ctx->pc = 0x19119Cu;
    // 0x19119c: 0x0  nop
    ctx->pc = 0x19119cu;
    // NOP
    ctx->pc = 0x1911a0u;
}
