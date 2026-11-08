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

// Function: entry_00136c44
// Address: 0x136c44 - 0x136c58
void entry_00136c44_0x136c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c44_0x136c44");
#endif

    ctx->pc = 0x136c44u;

    // 0x136c44: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136C44u;
    {
        const bool branch_taken_0x136c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x136c44) {
            ctx->pc = 0x136C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C44u;
            // 0x136c48: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136C10u;
            return;
        }
    }
    ctx->pc = 0x136C4Cu;
    // 0x136c4c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x136C4Cu;
    {
        const bool branch_taken_0x136c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C4Cu;
        // 0x136c50: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c4c) {
            ctx->pc = 0x136D14u;
            return;
        }
    }
    ctx->pc = 0x136C54u;
    // 0x136c54: 0x0  nop
    ctx->pc = 0x136c54u;
    // NOP
    ctx->pc = 0x136c58u;
}
