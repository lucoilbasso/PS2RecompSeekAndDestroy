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

// Function: $L5
// Address: 0x1d0a34 - 0x1d0a5c
void ps2__L5_0x1d0a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x1d0a34");
#endif

    ctx->pc = 0x1d0a34u;

    // 0x1d0a34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1d0a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d0a38: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d0a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0a3c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1d0a3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0a40: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x1d0a40u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d0a44: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x1d0a44u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1d0a48: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x1d0a48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1d0a4c: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0A4Cu;
    {
        const bool branch_taken_0x1d0a4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a4c) {
            ctx->pc = 0x1D0A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0A4Cu;
            // 0x1d0a50: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0A10u;
            return;
        }
    }
    ctx->pc = 0x1D0A54u;
    // 0x1d0a54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D0A54u;
    {
        const bool branch_taken_0x1d0a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A54u;
        // 0x1d0a58: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a54) {
            ctx->pc = 0x1D0AC8u;
            return;
        }
    }
    ctx->pc = 0x1D0A5Cu;
}
