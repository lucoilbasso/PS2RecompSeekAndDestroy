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

// Function: entry_00110e08
// Address: 0x110e08 - 0x110e20
void entry_00110e08_0x110e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e08_0x110e08");
#endif

    ctx->pc = 0x110e08u;

    // 0x110e08: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x110e08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x110e0c: 0x26d6f730  addiu       $s6, $s6, -0x8D0
    ctx->pc = 0x110e0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965040));
    // 0x110e10: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x110e14: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x110E14u;
    {
        const bool branch_taken_0x110e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E14u;
        // 0x110e18: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e14) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110E1Cu;
    // 0x110e1c: 0x0  nop
    ctx->pc = 0x110e1cu;
    // NOP
    ctx->pc = 0x110e20u;
}
