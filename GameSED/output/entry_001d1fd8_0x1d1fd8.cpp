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

// Function: entry_001d1fd8
// Address: 0x1d1fd8 - 0x1d2020
void entry_001d1fd8_0x1d1fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1fd8_0x1d1fd8");
#endif

    switch (ctx->pc) {
        case 0x1d2010u: goto label_1d2010;
        default: break;
    }

    ctx->pc = 0x1d1fd8u;

    // 0x1d1fd8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1fdc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1d1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1d1fe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1fe8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d1fec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1ff4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1ff4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1ff8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1ffc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1FFCu;
    {
        const bool branch_taken_0x1d1ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FFCu;
        // 0x1d2000: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ffc) {
            ctx->pc = 0x1D2020u;
            return;
        }
    }
    ctx->pc = 0x1D2004u;
    // 0x1d2004: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2008: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2008u;
    SET_GPR_U32(ctx, 31, 0x1D2010u);
    ctx->pc = 0x1D200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2008u;
    // 0x1d200c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2008u, 0x1D2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2010u;
label_1d2010:
    // 0x1d2010: 0x14400238  bnez        $v0, . + 4 + (0x238 << 2)
    ctx->pc = 0x1D2010u;
    {
        const bool branch_taken_0x1d2010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2010u;
        // 0x1d2014: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2010) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2018u;
    // 0x1d2018: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d201c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2020u;
}
