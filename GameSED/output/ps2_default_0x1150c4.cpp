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

// Function: default
// Address: 0x1150c4 - 0x1150ec
void ps2_default_0x1150c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1150c4");
#endif

    ctx->pc = 0x1150c4u;

    // 0x1150c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1150c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1150c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1150cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1150ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1150d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1150d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1150d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1150d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1150d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1150d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1150dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1150e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1150e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1150e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1150E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1150E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150E4u;
        // 0x1150e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1150ECu;
}
