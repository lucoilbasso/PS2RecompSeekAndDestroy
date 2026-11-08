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

// Function: entry_001ca3d8
// Address: 0x1ca3d8 - 0x1ca3f0
void entry_001ca3d8_0x1ca3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3d8_0x1ca3d8");
#endif

    ctx->pc = 0x1ca3d8u;

    // 0x1ca3d8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1ca3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1ca3dc: 0x46282b  sltu        $a1, $v0, $a2
    ctx->pc = 0x1ca3dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ca3e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA3E0u;
    {
        const bool branch_taken_0x1ca3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3E0u;
        // 0x1ca3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e0) {
            ctx->pc = 0x1CA3C0u;
            return;
        }
    }
    ctx->pc = 0x1CA3E8u;
    // 0x1ca3e8: 0xfd070010  sd          $a3, 0x10($t0)
    ctx->pc = 0x1ca3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 7));
    // 0x1ca3ec: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ca3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca3f0u;
}
