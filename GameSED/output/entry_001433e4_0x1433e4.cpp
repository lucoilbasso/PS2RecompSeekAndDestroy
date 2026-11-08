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

// Function: entry_001433e4
// Address: 0x1433e4 - 0x1433f8
void entry_001433e4_0x1433e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433e4_0x1433e4");
#endif

    ctx->pc = 0x1433e4u;

    // 0x1433e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1433e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1433e8: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1433E8u;
    {
        const bool branch_taken_0x1433e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1433e8) {
            ctx->pc = 0x1433ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433E8u;
            // 0x1433ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1433C8u;
            return;
        }
    }
    ctx->pc = 0x1433F0u;
    // 0x1433f0: 0xc050eb6  jal         func_143AD8
    ctx->pc = 0x1433F0u;
    SET_GPR_U32(ctx, 31, 0x1433F8u);
    ctx->pc = 0x1433F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433F0u;
    // 0x1433f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143AD8u, 0x1433F0u, 0x1433F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433F8u;
}
