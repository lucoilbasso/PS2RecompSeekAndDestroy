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

// Function: entry_0019f3c8
// Address: 0x19f3c8 - 0x19f3f0
void entry_0019f3c8_0x19f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3c8_0x19f3c8");
#endif

    ctx->pc = 0x19f3c8u;

    // 0x19f3c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19f3cc: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x19f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x19f3d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f3d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f3d8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3D8u;
    {
        const bool branch_taken_0x19f3d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D8u;
        // 0x19f3dc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3d8) {
            ctx->pc = 0x19F3F0u;
            return;
        }
    }
    ctx->pc = 0x19F3E0u;
    // 0x19f3e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x19f3e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3E4u;
    {
        const bool branch_taken_0x19f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3E4u;
        // 0x19f3e8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3e4) {
            ctx->pc = 0x19F3FCu;
            return;
        }
    }
    ctx->pc = 0x19F3ECu;
    // 0x19f3ec: 0x0  nop
    ctx->pc = 0x19f3ecu;
    // NOP
    ctx->pc = 0x19f3f0u;
}
