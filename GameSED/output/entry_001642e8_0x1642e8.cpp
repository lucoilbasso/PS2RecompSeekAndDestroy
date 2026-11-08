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

// Function: entry_001642e8
// Address: 0x1642e8 - 0x1642f8
void entry_001642e8_0x1642e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642e8_0x1642e8");
#endif

    ctx->pc = 0x1642e8u;

    // 0x1642e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1642ec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1642ECu;
    {
        const bool branch_taken_0x1642ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642ECu;
        // 0x1642f0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642ec) {
            ctx->pc = 0x164440u;
            return;
        }
    }
    ctx->pc = 0x1642F4u;
    // 0x1642f4: 0x0  nop
    ctx->pc = 0x1642f4u;
    // NOP
    ctx->pc = 0x1642f8u;
}
