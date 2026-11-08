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

// Function: entry_00132cc0
// Address: 0x132cc0 - 0x132ce0
void entry_00132cc0_0x132cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132cc0_0x132cc0");
#endif

    ctx->pc = 0x132cc0u;

    // 0x132cc0: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x132CC0u;
    {
        const bool branch_taken_0x132cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x132CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CC0u;
        // 0x132cc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cc0) {
            ctx->pc = 0x132D10u;
            return;
        }
    }
    ctx->pc = 0x132CC8u;
    // 0x132cc8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132ccc: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x132cd0: 0x2463c060  addiu       $v1, $v1, -0x3FA0
    ctx->pc = 0x132cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951008));
    // 0x132cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cdc: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x132ce0u;
}
