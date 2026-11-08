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

// Function: entry_0013d048
// Address: 0x13d048 - 0x13d078
void entry_0013d048_0x13d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d048_0x13d048");
#endif

    ctx->pc = 0x13d048u;

    // 0x13d048: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x13d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d04c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x13d04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d050: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x13d050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d054: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x13d054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d058: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x13d058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d05c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x13d05cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13d060: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x13d060u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d064: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x13d064u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13d068: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x13d068u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d06c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x13d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13d070: 0x3e00008  jr          $ra
    ctx->pc = 0x13D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D070u;
        // 0x13d074: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D078u;
}
