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

// Function: entry_001cca38
// Address: 0x1cca38 - 0x1cca64
void entry_001cca38_0x1cca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca38_0x1cca38");
#endif

    ctx->pc = 0x1cca38u;

    // 0x1cca38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cca38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cca3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cca3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cca40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cca40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cca44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cca48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cca48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cca4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cca4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cca50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cca54: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1cca54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cca58: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1cca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA5Cu;
        // 0x1cca60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA64u;
}
