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

// Function: entry_0011e304
// Address: 0x11e304 - 0x11e330
void entry_0011e304_0x11e304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e304_0x11e304");
#endif

    ctx->pc = 0x11e304u;

    // 0x11e304: 0x15000022  bnez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11E304u;
    {
        const bool branch_taken_0x11e304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E304u;
        // 0x11e308: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e304) {
            ctx->pc = 0x11E390u;
            return;
        }
    }
    ctx->pc = 0x11E30Cu;
    // 0x11e30c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e314: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e318: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11E318u;
    {
        const bool branch_taken_0x11e318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E318u;
        // 0x11e31c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e318) {
            ctx->pc = 0x11E36Cu;
            return;
        }
    }
    ctx->pc = 0x11E320u;
    // 0x11e320: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e324: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x11e324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e328: 0x24485a50  addiu       $t0, $v0, 0x5A50
    ctx->pc = 0x11e328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e32c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x11e330u;
}
