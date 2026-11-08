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

// Function: entry_001d24e0
// Address: 0x1d24e0 - 0x1d2548
void entry_001d24e0_0x1d24e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d24e0_0x1d24e0");
#endif

    switch (ctx->pc) {
        case 0x1d2530u: goto label_1d2530;
        default: break;
    }

    ctx->pc = 0x1d24e0u;

    // 0x1d24e0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d24e4: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x1d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d24e8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d24ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d24f0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d24f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d24f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d24fc: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2500: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1d2500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2508: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d250c: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x1d250cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2510: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d2510u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d2514: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d2514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d2518: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d251c: 0x14c000a2  bnez        $a2, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D251Cu;
    {
        const bool branch_taken_0x1d251c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D251Cu;
        // 0x1d2520: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d251c) {
            ctx->pc = 0x1D27A8u;
            return;
        }
    }
    ctx->pc = 0x1D2524u;
    // 0x1d2524: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2528: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2528u;
    SET_GPR_U32(ctx, 31, 0x1D2530u);
    ctx->pc = 0x1D252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2528u;
    // 0x1d252c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2528u, 0x1D2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2530u;
label_1d2530:
    // 0x1d2530: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D2530u;
    {
        const bool branch_taken_0x1d2530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2530u;
        // 0x1d2534: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2530) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2538u;
    // 0x1d2538: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d253c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D253Cu;
    {
        const bool branch_taken_0x1d253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D253Cu;
        // 0x1d2540: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d253c) {
            ctx->pc = 0x1D27A8u;
            return;
        }
    }
    ctx->pc = 0x1D2544u;
    // 0x1d2544: 0x0  nop
    ctx->pc = 0x1d2544u;
    // NOP
    ctx->pc = 0x1d2548u;
}
