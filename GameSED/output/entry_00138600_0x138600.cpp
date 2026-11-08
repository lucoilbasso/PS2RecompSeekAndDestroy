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

// Function: entry_00138600
// Address: 0x138600 - 0x13861c
void entry_00138600_0x138600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138600_0x138600");
#endif

    ctx->pc = 0x138600u;

    // 0x138600: 0x2902000a  slti        $v0, $t0, 0xA
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x138604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138604u;
        // 0x138608: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138604) {
            ctx->pc = 0x13861Cu;
            return;
        }
    }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x13860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x138610: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138614: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x138614u;
    {
        const bool branch_taken_0x138614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138614) {
            ctx->pc = 0x138618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138614u;
            // 0x138618: 0x8e020230  lw          $v0, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138530u;
            return;
        }
    }
    ctx->pc = 0x13861Cu;
}
