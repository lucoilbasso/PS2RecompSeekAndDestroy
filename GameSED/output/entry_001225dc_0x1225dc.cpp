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

// Function: entry_001225dc
// Address: 0x1225dc - 0x1225f0
void entry_001225dc_0x1225dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225dc_0x1225dc");
#endif

    ctx->pc = 0x1225dcu;

    // 0x1225dc: 0x8e300158  lw          $s0, 0x158($s1)
    ctx->pc = 0x1225dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1225e0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1225E0u;
    {
        const bool branch_taken_0x1225e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225e0) {
            ctx->pc = 0x1225E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225E0u;
            // 0x1225e4: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122620u;
            return;
        }
    }
    ctx->pc = 0x1225E8u;
    // 0x1225e8: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1225e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1225ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1225ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1225f0u;
}
