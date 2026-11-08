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

// Function: entry_0011edfc
// Address: 0x11edfc - 0x11ee1c
void entry_0011edfc_0x11edfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edfc_0x11edfc");
#endif

    ctx->pc = 0x11edfcu;

    // 0x11edfc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11edfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11ee00: 0x10a30060  beq         $a1, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x11EE00u;
    {
        const bool branch_taken_0x11ee00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x11EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE00u;
        // 0x11ee04: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee00) {
            ctx->pc = 0x11EF84u;
            return;
        }
    }
    ctx->pc = 0x11EE08u;
    // 0x11ee08: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EE08u;
    {
        const bool branch_taken_0x11ee08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE08u;
        // 0x11ee0c: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee08) {
            ctx->pc = 0x11EE1Cu;
            return;
        }
    }
    ctx->pc = 0x11EE10u;
    // 0x11ee10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ee14: 0x14a2005b  bne         $a1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11EE14u;
    {
        const bool branch_taken_0x11ee14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ee14) {
            ctx->pc = 0x11EF84u;
            return;
        }
    }
    ctx->pc = 0x11EE1Cu;
}
