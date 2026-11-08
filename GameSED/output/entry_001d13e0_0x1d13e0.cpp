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

// Function: entry_001d13e0
// Address: 0x1d13e0 - 0x1d1430
void entry_001d13e0_0x1d13e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d13e0_0x1d13e0");
#endif

    switch (ctx->pc) {
        case 0x1d1420u: goto label_1d1420;
        default: break;
    }

    ctx->pc = 0x1d13e0u;

    // 0x1d13e0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D13E0u;
    {
        const bool branch_taken_0x1d13e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13e0) {
            ctx->pc = 0x1D143Cu;
            return;
        }
    }
    ctx->pc = 0x1D13E8u;
    // 0x1d13e8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x1d13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1d13ec: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d13f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d13f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d13f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d13fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1400: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d1404: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1404u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1408: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d140c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D140Cu;
    {
        const bool branch_taken_0x1d140c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D140Cu;
        // 0x1d1410: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d140c) {
            ctx->pc = 0x1D1430u;
            return;
        }
    }
    ctx->pc = 0x1D1414u;
    // 0x1d1414: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1418: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1418u;
    SET_GPR_U32(ctx, 31, 0x1D1420u);
    ctx->pc = 0x1D141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1418u;
    // 0x1d141c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1418u, 0x1D1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1420u;
label_1d1420:
    // 0x1d1420: 0x14400534  bnez        $v0, . + 4 + (0x534 << 2)
    ctx->pc = 0x1D1420u;
    {
        const bool branch_taken_0x1d1420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1420u;
        // 0x1d1424: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1420) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1428u;
    // 0x1d1428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d1428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d142c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d142cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1430u;
}
