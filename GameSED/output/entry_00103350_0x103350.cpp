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

// Function: entry_00103350
// Address: 0x103350 - 0x103360
void entry_00103350_0x103350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103350_0x103350");
#endif

    ctx->pc = 0x103350u;

    // 0x103350: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x103350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x103354: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x103354u;
    {
        const bool branch_taken_0x103354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x103354) {
            ctx->pc = 0x103358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103354u;
            // 0x103358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103380u;
            return;
        }
    }
    ctx->pc = 0x10335Cu;
    // 0x10335c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x10335cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x103360u;
}
