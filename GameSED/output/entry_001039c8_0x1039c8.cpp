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

// Function: entry_001039c8
// Address: 0x1039c8 - 0x1039e4
void entry_001039c8_0x1039c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001039c8_0x1039c8");
#endif

    ctx->pc = 0x1039c8u;

    // 0x1039c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1039cc: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x1039ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
    // 0x1039d0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1039D0u;
    {
        const bool branch_taken_0x1039d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1039d0) {
            ctx->pc = 0x1039D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1039D0u;
            // 0x1039d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1039E8u;
            return;
        }
    }
    ctx->pc = 0x1039D8u;
    // 0x1039d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1039d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1039dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1039dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1039e0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x1039e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1039e4u;
}
