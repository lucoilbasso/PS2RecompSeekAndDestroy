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

// Function: entry_00164b2c
// Address: 0x164b2c - 0x164b54
void entry_00164b2c_0x164b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b2c_0x164b2c");
#endif

    ctx->pc = 0x164b2cu;

    // 0x164b2c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x164b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x164b30: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164B30u;
            // 0x164b34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164AF8u;
            return;
        }
    }
    ctx->pc = 0x164B38u;
    // 0x164b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x164B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B4Cu;
        // 0x164b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B54u;
}
