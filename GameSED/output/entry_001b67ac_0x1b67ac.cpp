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

// Function: entry_001b67ac
// Address: 0x1b67ac - 0x1b67c0
void entry_001b67ac_0x1b67ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67ac_0x1b67ac");
#endif

    ctx->pc = 0x1b67acu;

    // 0x1b67ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B67ACu;
    {
        const bool branch_taken_0x1b67ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67ACu;
        // 0x1b67b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67ac) {
            ctx->pc = 0x1B67C0u;
            return;
        }
    }
    ctx->pc = 0x1B67B4u;
    // 0x1b67b4: 0x9222b400  lbu         $v0, -0x4C00($s1)
    ctx->pc = 0x1b67b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294947840)));
    // 0x1b67b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B67B8u;
    {
        const bool branch_taken_0x1b67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67B8u;
        // 0x1b67bc: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67b8) {
            ctx->pc = 0x1B67ECu;
            return;
        }
    }
    ctx->pc = 0x1B67C0u;
}
