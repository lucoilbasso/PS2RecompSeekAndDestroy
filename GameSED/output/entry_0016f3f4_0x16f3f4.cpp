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

// Function: entry_0016f3f4
// Address: 0x16f3f4 - 0x16f428
void entry_0016f3f4_0x16f3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3f4_0x16f3f4");
#endif

    ctx->pc = 0x16f3f4u;

    // 0x16f3f4: 0x27858b68  addiu       $a1, $gp, -0x7498
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937448));
    // 0x16f3f8: 0x8f868b64  lw          $a2, -0x749C($gp)
    ctx->pc = 0x16f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x16f3fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f404: 0xaf828b60  sw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 2));
    // 0x16f408: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16f410: 0x3c010027  lui         $at, 0x27
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)39 << 16));
    // 0x16f414: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x16f414u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x16f418: 0xac26ba00  sw          $a2, -0x4600($at)
    ctx->pc = 0x16f418u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), GPR_U32(ctx, 6));
    // 0x16f41c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x16f420: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16F420u;
    {
        const bool branch_taken_0x16f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F420u;
        // 0x16f424: 0xaf808b64  sw          $zero, -0x749C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f420) {
            ctx->pc = 0x16F48Cu;
            return;
        }
    }
    ctx->pc = 0x16F428u;
}
