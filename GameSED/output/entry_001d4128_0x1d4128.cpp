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

// Function: entry_001d4128
// Address: 0x1d4128 - 0x1d4138
void entry_001d4128_0x1d4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4128_0x1d4128");
#endif

    ctx->pc = 0x1d4128u;

    // 0x1d4128: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d412c: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D412Cu;
    {
        const bool branch_taken_0x1d412c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d412c) {
            ctx->pc = 0x1D4130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D412Cu;
            // 0x1d4130: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4158u;
            return;
        }
    }
    ctx->pc = 0x1D4134u;
    // 0x1d4134: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d4134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->pc = 0x1d4138u;
}
