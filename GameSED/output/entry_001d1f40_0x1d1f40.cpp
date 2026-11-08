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

// Function: entry_001d1f40
// Address: 0x1d1f40 - 0x1d1fb4
void entry_001d1f40_0x1d1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f40_0x1d1f40");
#endif

    switch (ctx->pc) {
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1fa4u: goto label_1d1fa4;
        default: break;
    }

    ctx->pc = 0x1d1f40u;

    // 0x1d1f40: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x1D1F40u;
    {
        const bool branch_taken_0x1d1f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F40u;
        // 0x1d1f44: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f40) {
            ctx->pc = 0x1D2548u;
            return;
        }
    }
    ctx->pc = 0x1D1F48u;
    // 0x1d1f48: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d1f48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d1f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f50: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D1F50u;
    SET_GPR_U32(ctx, 31, 0x1D1F58u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D1F50u, 0x1D1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F58u;
label_1d1f58:
    // 0x1d1f58: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D1F58u;
    {
        const bool branch_taken_0x1d1f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F58u;
        // 0x1d1f5c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f58) {
            ctx->pc = 0x1D20D8u;
            return;
        }
    }
    ctx->pc = 0x1D1F60u;
    // 0x1d1f60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f64: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d1f68: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1d1f6c: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x1d1f70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1f74: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1f78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1f88: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1f88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1f8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1f90: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1F90u;
    {
        const bool branch_taken_0x1d1f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F90u;
        // 0x1d1f94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f90) {
            ctx->pc = 0x1D1FB4u;
            return;
        }
    }
    ctx->pc = 0x1D1F98u;
    // 0x1d1f98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1f9c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1FA4u);
    ctx->pc = 0x1D1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F9Cu;
    // 0x1d1fa0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1F9Cu, 0x1D1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FA4u;
label_1d1fa4:
    // 0x1d1fa4: 0x14400253  bnez        $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x1D1FA4u;
    {
        const bool branch_taken_0x1d1fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FA4u;
        // 0x1d1fa8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fa4) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1FACu;
    // 0x1d1fac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1fb0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d1fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1fb4u;
}
