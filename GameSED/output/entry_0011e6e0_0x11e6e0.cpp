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

// Function: entry_0011e6e0
// Address: 0x11e6e0 - 0x11e6f8
void entry_0011e6e0_0x11e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e6e0_0x11e6e0");
#endif

    ctx->pc = 0x11e6e0u;

    // 0x11e6e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E6E0u;
    {
        const bool branch_taken_0x11e6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E0u;
        // 0x11e6e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e0) {
            ctx->pc = 0x11E72Cu;
            return;
        }
    }
    ctx->pc = 0x11E6E8u;
    // 0x11e6e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e6ec: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x11e6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11e6f0: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e6f4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e6f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x11e6f8u;
}
