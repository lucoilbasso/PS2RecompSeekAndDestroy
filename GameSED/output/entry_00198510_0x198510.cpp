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

// Function: entry_00198510
// Address: 0x198510 - 0x198530
void entry_00198510_0x198510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198510_0x198510");
#endif

    ctx->pc = 0x198510u;

label_198510:
    // 0x198510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198514: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198518: 0x0  nop
    ctx->pc = 0x198518u;
    // NOP
    // 0x19851c: 0x0  nop
    ctx->pc = 0x19851cu;
    // NOP
    // 0x198520: 0x0  nop
    ctx->pc = 0x198520u;
    // NOP
    // 0x198524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198524u;
    {
        const bool branch_taken_0x198524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198524) {
            ctx->pc = 0x198510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198510;
        }
    }
    ctx->pc = 0x19852Cu;
    // 0x19852c: 0x0  nop
    ctx->pc = 0x19852cu;
    // NOP
    ctx->pc = 0x198530u;
}
