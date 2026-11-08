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

// Function: entry_00102bf0
// Address: 0x102bf0 - 0x102c18
void entry_00102bf0_0x102bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102bf0_0x102bf0");
#endif

    ctx->pc = 0x102bf0u;

    // 0x102bf0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x102bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102bf4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x102bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102bf8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x102bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x102bfc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x102bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102c00: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x102c00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x102c04: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x102c04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102c08: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x102c08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x102c0c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x102c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102c10: 0x3e00008  jr          $ra
    ctx->pc = 0x102C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C10u;
        // 0x102c14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C18u;
}
