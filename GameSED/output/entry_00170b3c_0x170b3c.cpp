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

// Function: entry_00170b3c
// Address: 0x170b3c - 0x170b60
void entry_00170b3c_0x170b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b3c_0x170b3c");
#endif

    ctx->pc = 0x170b3cu;

    // 0x170b3c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x170b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x170b40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x170b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170b44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x170b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x170b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x170b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170b50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x170b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170b54: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x170b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170b58: 0x3e00008  jr          $ra
    ctx->pc = 0x170B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B58u;
        // 0x170b5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B60u;
}
