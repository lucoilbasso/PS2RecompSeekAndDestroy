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

// Function: kFindAddress
// Address: 0x1b6c90 - 0x1b6cd0
void kFindAddress_0x1b6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kFindAddress_0x1b6c90");
#endif

    switch (ctx->pc) {
        case 0x1b6ca8u: goto label_1b6ca8;
        default: break;
    }

    ctx->pc = 0x1b6c90u;

    // 0x1b6c90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6c94: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6C94u;
    {
        const bool branch_taken_0x1b6c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C94u;
        // 0x1b6c98: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c94) {
            ctx->pc = 0x1B6CC4u;
            goto label_1b6cc4;
        }
    }
    ctx->pc = 0x1B6C9Cu;
    // 0x1b6c9c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6C9Cu;
    {
        const bool branch_taken_0x1b6c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c9c) {
            ctx->pc = 0x1B6CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C9Cu;
            // 0x1b6ca0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CC8u;
            goto label_1b6cc8;
        }
    }
    ctx->pc = 0x1B6CA4u;
    // 0x1b6ca4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b6ca8:
    // 0x1b6ca8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6cac: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6CACu;
    {
        const bool branch_taken_0x1b6cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CACu;
        // 0x1b6cb0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cac) {
            ctx->pc = 0x1B6CC4u;
            goto label_1b6cc4;
        }
    }
    ctx->pc = 0x1B6CB4u;
    // 0x1b6cb4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B6CB4u;
    {
        const bool branch_taken_0x1b6cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cb4) {
            ctx->pc = 0x1B6CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CB4u;
            // 0x1b6cb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6ca8;
        }
    }
    ctx->pc = 0x1B6CBCu;
    // 0x1b6cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6CBCu;
    {
        const bool branch_taken_0x1b6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CBCu;
        // 0x1b6cc0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cbc) {
            ctx->pc = 0x1B6CC8u;
            goto label_1b6cc8;
        }
    }
    ctx->pc = 0x1B6CC4u;
label_1b6cc4:
    // 0x1b6cc4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1b6cc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1b6cc8:
    // 0x1b6cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CC8u;
        // 0x1b6ccc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6CD0u;
}
