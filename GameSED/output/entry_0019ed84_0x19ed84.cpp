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

// Function: entry_0019ed84
// Address: 0x19ed84 - 0x19ed94
void entry_0019ed84_0x19ed84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed84_0x19ed84");
#endif

    ctx->pc = 0x19ed84u;

    // 0x19ed84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19ED84u;
    {
        const bool branch_taken_0x19ed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed84) {
            ctx->pc = 0x19ED94u;
            return;
        }
    }
    ctx->pc = 0x19ED8Cu;
    // 0x19ed8c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ed90: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ed90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19ed94u;
}
