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

// Function: entry_0011e4d0
// Address: 0x11e4d0 - 0x11e4e8
void entry_0011e4d0_0x11e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4d0_0x11e4d0");
#endif

    ctx->pc = 0x11e4d0u;

    // 0x11e4d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E4D0u;
    {
        const bool branch_taken_0x11e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D0u;
        // 0x11e4d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d0) {
            ctx->pc = 0x11E51Cu;
            return;
        }
    }
    ctx->pc = 0x11E4D8u;
    // 0x11e4d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e4dc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x11e4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11e4e0: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e4e4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e4e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x11e4e8u;
}
