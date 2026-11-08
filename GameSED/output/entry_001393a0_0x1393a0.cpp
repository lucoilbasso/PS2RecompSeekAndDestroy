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

// Function: entry_001393a0
// Address: 0x1393a0 - 0x1393ac
void entry_001393a0_0x1393a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001393a0_0x1393a0");
#endif

    ctx->pc = 0x1393a0u;

    // 0x1393a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1393a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1393a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1393A4u;
    {
        const bool branch_taken_0x1393a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393a4) {
            ctx->pc = 0x1393C0u;
            return;
        }
    }
    ctx->pc = 0x1393ACu;
}
