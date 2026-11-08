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

// Function: caseD_c
// Address: 0x154600 - 0x154610
void caseD_c_0x154600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x154600");
#endif

    ctx->pc = 0x154600u;

    // 0x154600: 0x26020344  addiu       $v0, $s0, 0x344
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
    // 0x154604: 0x26120338  addiu       $s2, $s0, 0x338
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
    // 0x154608: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x154608u;
    {
        const bool branch_taken_0x154608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154608u;
        // 0x15460c: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154608) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154610u;
}
