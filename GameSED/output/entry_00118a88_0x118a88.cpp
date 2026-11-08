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

// Function: entry_00118a88
// Address: 0x118a88 - 0x118ac0
void entry_00118a88_0x118a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a88_0x118a88");
#endif

    ctx->pc = 0x118a88u;

    // 0x118a88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118a8c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x118a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x118a90: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x118a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x118a94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x118A94u;
    {
        const bool branch_taken_0x118a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A94u;
        // 0x118a98: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a94) {
            ctx->pc = 0x118A50u;
            return;
        }
    }
    ctx->pc = 0x118A9Cu;
    // 0x118a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x118aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118aac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118ab0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x118ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118ab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x118AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AB8u;
        // 0x118abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118AC0u;
}
