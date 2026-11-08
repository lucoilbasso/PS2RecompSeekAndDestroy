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

// Function: entry_001388bc
// Address: 0x1388bc - 0x1388d4
void entry_001388bc_0x1388bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388bc_0x1388bc");
#endif

    ctx->pc = 0x1388bcu;

    // 0x1388bc: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x1388c0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1388c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1388c8: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x1388c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1388cc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1388CCu;
    {
        const bool branch_taken_0x1388cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1388D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388CCu;
        // 0x1388d0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388cc) {
            ctx->pc = 0x1387F0u;
            return;
        }
    }
    ctx->pc = 0x1388D4u;
}
