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

// Function: entry_0011e1d0
// Address: 0x11e1d0 - 0x11e1f8
void entry_0011e1d0_0x11e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1d0_0x11e1d0");
#endif

    ctx->pc = 0x11e1d0u;

    // 0x11e1d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11e1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e1d8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e1dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E1DCu;
    {
        const bool branch_taken_0x11e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1DCu;
        // 0x11e1e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1dc) {
            ctx->pc = 0x11E234u;
            return;
        }
    }
    ctx->pc = 0x11E1E4u;
    // 0x11e1e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e1e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e1ec: 0x24485a50  addiu       $t0, $v0, 0x5A50
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e1f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e1f4: 0x0  nop
    ctx->pc = 0x11e1f4u;
    // NOP
    ctx->pc = 0x11e1f8u;
}
