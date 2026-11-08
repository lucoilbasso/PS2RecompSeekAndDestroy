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

// Function: entry_0017f118
// Address: 0x17f118 - 0x17f148
void entry_0017f118_0x17f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f118_0x17f118");
#endif

    ctx->pc = 0x17f118u;

    // 0x17f118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17f118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f11c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17f11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17f120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f124: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17f124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f128: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17f128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f12c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17f12cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f130: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17f130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f134: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17f134u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17f138: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17f138u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f13c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17f140: 0x3e00008  jr          $ra
    ctx->pc = 0x17F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F140u;
        // 0x17f144: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F148u;
}
