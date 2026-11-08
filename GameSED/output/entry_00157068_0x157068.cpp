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

// Function: entry_00157068
// Address: 0x157068 - 0x157080
void entry_00157068_0x157068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157068_0x157068");
#endif

    ctx->pc = 0x157068u;

    // 0x157068: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x157068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15706c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15706cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x157070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x157074: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x157074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x157078: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x157078u;
    {
        const bool branch_taken_0x157078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157078u;
        // 0x15707c: 0xac60026c  sw          $zero, 0x26C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157078) {
            ctx->pc = 0x157038u;
            return;
        }
    }
    ctx->pc = 0x157080u;
}
