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

// Function: entry_00103538
// Address: 0x103538 - 0x103550
void entry_00103538_0x103538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103538_0x103538");
#endif

    ctx->pc = 0x103538u;

    // 0x103538: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103538u;
    {
        const bool branch_taken_0x103538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103538u;
        // 0x10353c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103538) {
            ctx->pc = 0x103550u;
            return;
        }
    }
    ctx->pc = 0x103540u;
    // 0x103540: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x103544: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x103548: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x103548u;
    {
        const bool branch_taken_0x103548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103548u;
        // 0x10354c: 0x8c620044  lw          $v0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103548) {
            ctx->pc = 0x10364Cu;
            return;
        }
    }
    ctx->pc = 0x103550u;
}
