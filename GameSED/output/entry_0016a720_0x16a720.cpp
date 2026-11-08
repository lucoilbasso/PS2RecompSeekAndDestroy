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

// Function: entry_0016a720
// Address: 0x16a720 - 0x16a730
void entry_0016a720_0x16a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a720_0x16a720");
#endif

    ctx->pc = 0x16a720u;

    // 0x16a720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a724: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a728: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16A728u;
    {
        const bool branch_taken_0x16a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A728u;
        // 0x16a72c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a728) {
            ctx->pc = 0x16A7B8u;
            return;
        }
    }
    ctx->pc = 0x16A730u;
}
