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

// Function: entry_0019b3ec
// Address: 0x19b3ec - 0x19b400
void entry_0019b3ec_0x19b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b3ec_0x19b3ec");
#endif

    ctx->pc = 0x19b3ecu;

    // 0x19b3ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3f0: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B3F0u;
    {
        const bool branch_taken_0x19b3f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b3f0) {
            ctx->pc = 0x19B3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B3F0u;
            // 0x19b3f4: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B44Cu;
            return;
        }
    }
    ctx->pc = 0x19B3F8u;
    // 0x19b3f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b3fc: 0x0  nop
    ctx->pc = 0x19b3fcu;
    // NOP
    ctx->pc = 0x19b400u;
}
