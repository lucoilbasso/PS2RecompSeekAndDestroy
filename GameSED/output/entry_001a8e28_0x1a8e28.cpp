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

// Function: entry_001a8e28
// Address: 0x1a8e28 - 0x1a8e58
void entry_001a8e28_0x1a8e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e28_0x1a8e28");
#endif

    ctx->pc = 0x1a8e28u;

    // 0x1a8e28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8e2c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8E2Cu;
    {
        const bool branch_taken_0x1a8e2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E2Cu;
        // 0x1a8e30: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e2c) {
            ctx->pc = 0x1A8DF8u;
            return;
        }
    }
    ctx->pc = 0x1A8E34u;
    // 0x1a8e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8e40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8e44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8e48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8e48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E50u;
        // 0x1a8e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E58u;
}
