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

// Function: entry_0018ced0
// Address: 0x18ced0 - 0x18cee0
void entry_0018ced0_0x18ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ced0_0x18ced0");
#endif

    ctx->pc = 0x18ced0u;

    // 0x18ced0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x18ced4: 0x18d102a  slt         $v0, $t4, $t5
    ctx->pc = 0x18ced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x18ced8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x18CED8u;
    {
        const bool branch_taken_0x18ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ced8) {
            ctx->pc = 0x18CE58u;
            return;
        }
    }
    ctx->pc = 0x18CEE0u;
}
