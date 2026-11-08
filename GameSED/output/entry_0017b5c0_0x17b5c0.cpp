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

// Function: entry_0017b5c0
// Address: 0x17b5c0 - 0x17b5ec
void entry_0017b5c0_0x17b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5c0_0x17b5c0");
#endif

    ctx->pc = 0x17b5c0u;

    // 0x17b5c0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17b5c4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x17b5c8: 0x661ffe5  bgez        $s3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17B5C8u;
    {
        const bool branch_taken_0x17b5c8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x17B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5C8u;
        // 0x17b5cc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5c8) {
            ctx->pc = 0x17B560u;
            return;
        }
    }
    ctx->pc = 0x17B5D0u;
    // 0x17b5d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b5d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b5d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b5e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5E4u;
        // 0x17b5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B5ECu;
}
