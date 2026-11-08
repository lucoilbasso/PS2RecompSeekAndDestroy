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

// Function: entry_0016fdfc
// Address: 0x16fdfc - 0x16fe14
void entry_0016fdfc_0x16fdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fdfc_0x16fdfc");
#endif

    ctx->pc = 0x16fdfcu;

    // 0x16fdfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fe00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fe00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fe04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fe08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16fe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE0Cu;
        // 0x16fe10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE14u;
}
