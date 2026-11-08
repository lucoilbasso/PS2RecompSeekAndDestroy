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

// Function: entry_001044e0
// Address: 0x1044e0 - 0x1044f0
void entry_001044e0_0x1044e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044e0_0x1044e0");
#endif

    ctx->pc = 0x1044e0u;

    // 0x1044e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1044E0u;
    {
        const bool branch_taken_0x1044e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1044E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044E0u;
        // 0x1044e4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044e0) {
            ctx->pc = 0x1044F0u;
            return;
        }
    }
    ctx->pc = 0x1044E8u;
    // 0x1044e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1044e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1044ec: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->pc = 0x1044f0u;
}
