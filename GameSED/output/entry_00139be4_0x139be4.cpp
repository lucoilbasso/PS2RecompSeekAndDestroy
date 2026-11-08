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

// Function: entry_00139be4
// Address: 0x139be4 - 0x139c10
void entry_00139be4_0x139be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139be4_0x139be4");
#endif

    ctx->pc = 0x139be4u;

    // 0x139be4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x139be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139be8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x139be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139bec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x139becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139bf0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x139bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139bf4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x139bf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139bf8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x139bf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139bfc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x139bfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139c00: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x139c00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139c04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x139c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139c08: 0x3e00008  jr          $ra
    ctx->pc = 0x139C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C08u;
        // 0x139c0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C10u;
}
