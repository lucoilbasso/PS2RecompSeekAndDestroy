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

// Function: entry_0016e1e8
// Address: 0x16e1e8 - 0x16e20c
void entry_0016e1e8_0x16e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1e8_0x16e1e8");
#endif

    ctx->pc = 0x16e1e8u;

    // 0x16e1e8: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e1f0: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x16e1f4: 0xac8200e0  sw          $v0, 0xE0($a0)
    ctx->pc = 0x16e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 2));
    // 0x16e1f8: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    // 0x16e1fc: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x16e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x16e200: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x16e204: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E204u;
            // 0x16e208: 0xac6000e0  sw          $zero, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E20Cu;
            return;
        }
    }
    ctx->pc = 0x16E20Cu;
}
