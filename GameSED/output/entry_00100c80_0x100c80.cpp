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

// Function: entry_00100c80
// Address: 0x100c80 - 0x100c90
void entry_00100c80_0x100c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100c80_0x100c80");
#endif

    ctx->pc = 0x100c80u;

    // 0x100c80: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x100c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x100C84u;
    {
        const bool branch_taken_0x100c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C84u;
        // 0x100c88: 0x8c510170  lw          $s1, 0x170($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c84) {
            ctx->pc = 0x100CB4u;
            return;
        }
    }
    ctx->pc = 0x100C8Cu;
    // 0x100c8c: 0x0  nop
    ctx->pc = 0x100c8cu;
    // NOP
    ctx->pc = 0x100c90u;
}
