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

// Function: entry_0019edc8
// Address: 0x19edc8 - 0x19edd8
void entry_0019edc8_0x19edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019edc8_0x19edc8");
#endif

    ctx->pc = 0x19edc8u;

    // 0x19edc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EDC8u;
    {
        const bool branch_taken_0x19edc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19edc8) {
            ctx->pc = 0x19EDD8u;
            return;
        }
    }
    ctx->pc = 0x19EDD0u;
    // 0x19edd0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19edd4: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19edd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19edd8u;
}
