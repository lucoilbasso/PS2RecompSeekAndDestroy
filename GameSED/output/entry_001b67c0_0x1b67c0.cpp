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

// Function: entry_001b67c0
// Address: 0x1b67c0 - 0x1b67d4
void entry_001b67c0_0x1b67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67c0_0x1b67c0");
#endif

    ctx->pc = 0x1b67c0u;

    // 0x1b67c0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B67C0u;
    {
        const bool branch_taken_0x1b67c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67C0u;
        // 0x1b67c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67c0) {
            ctx->pc = 0x1B67D4u;
            return;
        }
    }
    ctx->pc = 0x1B67C8u;
    // 0x1b67c8: 0x9622b400  lhu         $v0, -0x4C00($s1)
    ctx->pc = 0x1b67c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294947840)));
    // 0x1b67cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B67CCu;
    {
        const bool branch_taken_0x1b67cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67CCu;
        // 0x1b67d0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67cc) {
            ctx->pc = 0x1B67ECu;
            return;
        }
    }
    ctx->pc = 0x1B67D4u;
}
