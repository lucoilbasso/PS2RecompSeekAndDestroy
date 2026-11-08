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

// Function: entry_00166460
// Address: 0x166460 - 0x166480
void entry_00166460_0x166460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166460_0x166460");
#endif

    ctx->pc = 0x166460u;

    // 0x166460: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166464: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x166464u;
    {
        const bool branch_taken_0x166464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166464u;
        // 0x166468: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166464) {
            ctx->pc = 0x16659Cu;
            return;
        }
    }
    ctx->pc = 0x16646Cu;
    // 0x16646c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x166470: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x166470u;
    {
        const bool branch_taken_0x166470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166470) {
            ctx->pc = 0x166474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166470u;
            // 0x166474: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166430u;
            return;
        }
    }
    ctx->pc = 0x166478u;
    // 0x166478: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x166478u;
    {
        const bool branch_taken_0x166478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166478u;
        // 0x16647c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166478) {
            ctx->pc = 0x1665A0u;
            return;
        }
    }
    ctx->pc = 0x166480u;
}
