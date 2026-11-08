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

// Function: entry_001cdc90
// Address: 0x1cdc90 - 0x1cdcbc
void entry_001cdc90_0x1cdc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc90_0x1cdc90");
#endif

    ctx->pc = 0x1cdc90u;

    // 0x1cdc90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1cdc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdca0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdca4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cdca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdca8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cdca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cdcac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cdcacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdcb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cdcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB4u;
        // 0x1cdcb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCBCu;
}
