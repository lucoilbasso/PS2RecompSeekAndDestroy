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

// Function: entry_0019ee34
// Address: 0x19ee34 - 0x19ee40
void entry_0019ee34_0x19ee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee34_0x19ee34");
#endif

    ctx->pc = 0x19ee34u;

    // 0x19ee34: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EE34u;
    {
        const bool branch_taken_0x19ee34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE34u;
        // 0x19ee38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee34) {
            ctx->pc = 0x19EE40u;
            return;
        }
    }
    ctx->pc = 0x19EE3Cu;
    // 0x19ee3c: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ee3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19ee40u;
}
