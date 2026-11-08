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

// Function: entry_0016a18c
// Address: 0x16a18c - 0x16a1a4
void entry_0016a18c_0x16a18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a18c_0x16a18c");
#endif

    ctx->pc = 0x16a18cu;

    // 0x16a18c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A18Cu;
    {
        const bool branch_taken_0x16a18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A18Cu;
        // 0x16a190: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a18c) {
            ctx->pc = 0x16A1A4u;
            return;
        }
    }
    ctx->pc = 0x16A194u;
    // 0x16a194: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a198: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A198u;
    {
        const bool branch_taken_0x16a198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A198u;
        // 0x16a19c: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a198) {
            ctx->pc = 0x16A1C4u;
            return;
        }
    }
    ctx->pc = 0x16A1A0u;
    // 0x16a1a0: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x16a1a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    ctx->pc = 0x16a1a4u;
}
