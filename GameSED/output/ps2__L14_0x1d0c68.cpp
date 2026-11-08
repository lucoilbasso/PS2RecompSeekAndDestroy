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

// Function: $L14
// Address: 0x1d0c68 - 0x1d0c94
void ps2__L14_0x1d0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L14_0x1d0c68");
#endif

    ctx->pc = 0x1d0c68u;

label_1d0c68:
    // 0x1d0c68: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d0c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0c6c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x1d0c6cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1d0c70: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x1d0c70u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1d0c74: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1d0c74u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d0c78: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x1d0c78u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1d0c7c: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x1d0c7cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x1d0c80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d0c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d0c84: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0C84u;
    {
        const bool branch_taken_0x1d0c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c84) {
            ctx->pc = 0x1D0C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0C84u;
            // 0x1d0c88: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C8Cu;
    // 0x1d0c8c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0C8Cu;
    {
        const bool branch_taken_0x1d0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C8Cu;
        // 0x1d0c90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c8c) {
            ctx->pc = 0x1D0D04u;
            return;
        }
    }
    ctx->pc = 0x1D0C94u;
}
