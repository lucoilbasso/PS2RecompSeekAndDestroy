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

// Function: entry_0014f5bc
// Address: 0x14f5bc - 0x14f5c8
void entry_0014f5bc_0x14f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5bc_0x14f5bc");
#endif

    ctx->pc = 0x14f5bcu;

    // 0x14f5bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F5BCu;
    {
        const bool branch_taken_0x14f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5BCu;
        // 0x14f5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5bc) {
            ctx->pc = 0x14F5CCu;
            return;
        }
    }
    ctx->pc = 0x14F5C4u;
    // 0x14f5c4: 0x0  nop
    ctx->pc = 0x14f5c4u;
    // NOP
    ctx->pc = 0x14f5c8u;
}
