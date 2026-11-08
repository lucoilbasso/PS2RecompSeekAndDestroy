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

// Function: entry_001d1ecc
// Address: 0x1d1ecc - 0x1d1f14
void entry_001d1ecc_0x1d1ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1ecc_0x1d1ecc");
#endif

    switch (ctx->pc) {
        case 0x1d1f04u: goto label_1d1f04;
        default: break;
    }

    ctx->pc = 0x1d1eccu;

    // 0x1d1ecc: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1ed0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1ed4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ed8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1ee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1ee8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1eec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1ef0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1EF0u;
    {
        const bool branch_taken_0x1d1ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EF0u;
        // 0x1d1ef4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ef0) {
            ctx->pc = 0x1D1F14u;
            return;
        }
    }
    ctx->pc = 0x1D1EF8u;
    // 0x1d1ef8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1efc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1EFCu;
    SET_GPR_U32(ctx, 31, 0x1D1F04u);
    ctx->pc = 0x1D1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EFCu;
    // 0x1d1f00: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1EFCu, 0x1D1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F04u;
label_1d1f04:
    // 0x1d1f04: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x1D1F04u;
    {
        const bool branch_taken_0x1d1f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F04u;
        // 0x1d1f08: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f04) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1F0Cu;
    // 0x1d1f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d1f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1f10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1f14u;
}
