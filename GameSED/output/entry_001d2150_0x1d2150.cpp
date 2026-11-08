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

// Function: entry_001d2150
// Address: 0x1d2150 - 0x1d2198
void entry_001d2150_0x1d2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2150_0x1d2150");
#endif

    switch (ctx->pc) {
        case 0x1d2188u: goto label_1d2188;
        default: break;
    }

    ctx->pc = 0x1d2150u;

    // 0x1d2150: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2154: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1d2158: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d215c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2160: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d2160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d2164: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d216c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d216cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2170: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d2170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2174: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2174u;
    {
        const bool branch_taken_0x1d2174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2174u;
        // 0x1d2178: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2174) {
            ctx->pc = 0x1D2198u;
            return;
        }
    }
    ctx->pc = 0x1D217Cu;
    // 0x1d217c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2180: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2180u;
    SET_GPR_U32(ctx, 31, 0x1D2188u);
    ctx->pc = 0x1D2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2180u;
    // 0x1d2184: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2180u, 0x1D2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2188u;
label_1d2188:
    // 0x1d2188: 0x144001da  bnez        $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1D2188u;
    {
        const bool branch_taken_0x1d2188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2188u;
        // 0x1d218c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2188) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2190u;
    // 0x1d2190: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2194: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2198u;
}
