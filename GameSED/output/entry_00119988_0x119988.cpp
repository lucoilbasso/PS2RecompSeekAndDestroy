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

// Function: entry_00119988
// Address: 0x119988 - 0x1199c0
void entry_00119988_0x119988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119988_0x119988");
#endif

    ctx->pc = 0x119988u;

label_119988:
    // 0x119988: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11998c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x119990: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x119994: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x119994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x119998: 0x0  nop
    ctx->pc = 0x119998u;
    // NOP
    // 0x11999c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11999Cu;
    {
        const bool branch_taken_0x11999c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1199A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11999Cu;
        // 0x1199a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11999c) {
            ctx->pc = 0x119988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119988;
        }
    }
    ctx->pc = 0x1199A4u;
    // 0x1199a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1199a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1199a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1199a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1199ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1199acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1199b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1199b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1199b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1199b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1199b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1199B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1199BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199B8u;
        // 0x1199bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1199C0u;
}
