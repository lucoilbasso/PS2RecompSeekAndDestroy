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

// Function: entry_0014f4ac
// Address: 0x14f4ac - 0x14f4b8
void entry_0014f4ac_0x14f4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4ac_0x14f4ac");
#endif

    ctx->pc = 0x14f4acu;

    // 0x14f4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4ACu;
    {
        const bool branch_taken_0x14f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4ACu;
        // 0x14f4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ac) {
            ctx->pc = 0x14F4BCu;
            return;
        }
    }
    ctx->pc = 0x14F4B4u;
    // 0x14f4b4: 0x0  nop
    ctx->pc = 0x14f4b4u;
    // NOP
    ctx->pc = 0x14f4b8u;
}
