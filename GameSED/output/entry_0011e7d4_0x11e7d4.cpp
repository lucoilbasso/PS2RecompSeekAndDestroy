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

// Function: entry_0011e7d4
// Address: 0x11e7d4 - 0x11e7f8
void entry_0011e7d4_0x11e7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7d4_0x11e7d4");
#endif

    ctx->pc = 0x11e7d4u;

    // 0x11e7d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e7dc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e7e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E7E0u;
    {
        const bool branch_taken_0x11e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7E0u;
        // 0x11e7e4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7e0) {
            ctx->pc = 0x11E830u;
            return;
        }
    }
    ctx->pc = 0x11E7E8u;
    // 0x11e7e8: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x11e7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11e7ec: 0x24465a50  addiu       $a2, $v0, 0x5A50
    ctx->pc = 0x11e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e7f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e7f4: 0x0  nop
    ctx->pc = 0x11e7f4u;
    // NOP
    ctx->pc = 0x11e7f8u;
}
