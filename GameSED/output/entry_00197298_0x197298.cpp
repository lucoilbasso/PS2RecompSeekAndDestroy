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

// Function: entry_00197298
// Address: 0x197298 - 0x1972c8
void entry_00197298_0x197298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197298_0x197298");
#endif

    switch (ctx->pc) {
        case 0x1972a0u: goto label_1972a0;
        default: break;
    }

    ctx->pc = 0x197298u;

    // 0x197298: 0xc061422  jal         func_185088
    ctx->pc = 0x197298u;
    SET_GPR_U32(ctx, 31, 0x1972A0u);
    ctx->pc = 0x19729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197298u;
    // 0x19729c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197298u, 0x1972A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972A0u;
label_1972a0:
    // 0x1972a0: 0x26c30110  addiu       $v1, $s6, 0x110
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
    // 0x1972a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1972a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1972a8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1972a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1972ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1972acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1972b0: 0xae5e03c0  sw          $fp, 0x3C0($s2)
    ctx->pc = 0x1972b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 960), GPR_U32(ctx, 30));
    // 0x1972b4: 0x8c4401a8  lw          $a0, 0x1A8($v0)
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x1972b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1972B8u;
    {
        const bool branch_taken_0x1972b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B8u;
        // 0x1972bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b8) {
            ctx->pc = 0x1972C8u;
            return;
        }
    }
    ctx->pc = 0x1972C0u;
    // 0x1972c0: 0x8fc201bc  lw          $v0, 0x1BC($fp)
    ctx->pc = 0x1972c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 444)));
    // 0x1972c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1972c8u;
}
