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

// Function: entry_0014339c
// Address: 0x14339c - 0x1433b8
void entry_0014339c_0x14339c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014339c_0x14339c");
#endif

    ctx->pc = 0x14339cu;

    // 0x14339c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14339cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1433a0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1433a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1433a4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1433A4u;
    {
        const bool branch_taken_0x1433a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433a4) {
            ctx->pc = 0x1433A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433A4u;
            // 0x1433a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143380u;
            return;
        }
    }
    ctx->pc = 0x1433ACu;
    // 0x1433ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1433ACu;
    {
        const bool branch_taken_0x1433ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433ACu;
        // 0x1433b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433ac) {
            ctx->pc = 0x143408u;
            return;
        }
    }
    ctx->pc = 0x1433B4u;
    // 0x1433b4: 0x0  nop
    ctx->pc = 0x1433b4u;
    // NOP
    ctx->pc = 0x1433b8u;
}
