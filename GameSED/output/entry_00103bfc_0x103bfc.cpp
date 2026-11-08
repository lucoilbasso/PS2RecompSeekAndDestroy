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

// Function: entry_00103bfc
// Address: 0x103bfc - 0x103c1c
void entry_00103bfc_0x103bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103bfc_0x103bfc");
#endif

    ctx->pc = 0x103bfcu;

    // 0x103bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x103c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x103c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c10: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x103c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x103c14: 0x3e00008  jr          $ra
    ctx->pc = 0x103C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C14u;
        // 0x103c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C1Cu;
}
