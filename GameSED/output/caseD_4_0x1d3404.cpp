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

// Function: caseD_4
// Address: 0x1d3404 - 0x1d3428
void caseD_4_0x1d3404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1d3404");
#endif

    ctx->pc = 0x1d3404u;

    // 0x1d3404: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3408: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d340c: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x1d340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d3410: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1d3410u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1d3414: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1d3418: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x1d341c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D341Cu;
    {
        const bool branch_taken_0x1d341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D341Cu;
        // 0x1d3420: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d341c) {
            ctx->pc = 0x1D344Cu;
            return;
        }
    }
    ctx->pc = 0x1D3424u;
    // 0x1d3424: 0x0  nop
    ctx->pc = 0x1d3424u;
    // NOP
    ctx->pc = 0x1d3428u;
}
