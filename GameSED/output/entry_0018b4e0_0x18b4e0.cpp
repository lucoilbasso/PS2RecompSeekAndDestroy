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

// Function: entry_0018b4e0
// Address: 0x18b4e0 - 0x18b4f0
void entry_0018b4e0_0x18b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4e0_0x18b4e0");
#endif

    ctx->pc = 0x18b4e0u;

    // 0x18b4e0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B4E0u;
            // 0x18b4e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B504u;
            return;
        }
    }
    ctx->pc = 0x18B4E8u;
    // 0x18b4e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18b4ec: 0x0  nop
    ctx->pc = 0x18b4ecu;
    // NOP
    ctx->pc = 0x18b4f0u;
}
