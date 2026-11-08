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

// Function: entry_001b21e0
// Address: 0x1b21e0 - 0x1b2200
void entry_001b21e0_0x1b21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21e0_0x1b21e0");
#endif

    ctx->pc = 0x1b21e0u;

    // 0x1b21e0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1b21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b21e4: 0x1840007d  blez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1B21E4u;
    {
        const bool branch_taken_0x1b21e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21E4u;
        // 0x1b21e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21e4) {
            ctx->pc = 0x1B23DCu;
            return;
        }
    }
    ctx->pc = 0x1B21ECu;
    // 0x1b21ec: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b21f0: 0x1840007a  blez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1B21F0u;
    {
        const bool branch_taken_0x1b21f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21F0u;
        // 0x1b21f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21f0) {
            ctx->pc = 0x1B23DCu;
            return;
        }
    }
    ctx->pc = 0x1B21F8u;
    // 0x1b21f8: 0x24e50050  addiu       $a1, $a3, 0x50
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1b21fc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1b21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x1b2200u;
}
