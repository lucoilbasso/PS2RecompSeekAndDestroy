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

// Function: entry_0014be04
// Address: 0x14be04 - 0x14be28
void entry_0014be04_0x14be04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be04_0x14be04");
#endif

    ctx->pc = 0x14be04u;

    // 0x14be04: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x14be08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14be0c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x14be0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14be10: 0x0  nop
    ctx->pc = 0x14be10u;
    // NOP
    // 0x14be14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14BE14u;
    {
        const bool branch_taken_0x14be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14be14) {
            ctx->pc = 0x14BE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BE14u;
            // 0x14be18: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BDF8u;
            return;
        }
    }
    ctx->pc = 0x14BE1Cu;
    // 0x14be1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14BE1Cu;
    {
        const bool branch_taken_0x14be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE1Cu;
        // 0x14be20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be1c) {
            ctx->pc = 0x14BE74u;
            return;
        }
    }
    ctx->pc = 0x14BE24u;
    // 0x14be24: 0x0  nop
    ctx->pc = 0x14be24u;
    // NOP
    ctx->pc = 0x14be28u;
}
