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

// Function: entry_0013faa0
// Address: 0x13faa0 - 0x13fabc
void entry_0013faa0_0x13faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013faa0_0x13faa0");
#endif

    ctx->pc = 0x13faa0u;

    // 0x13faa0: 0xe6400148  swc1        $f0, 0x148($s2)
    ctx->pc = 0x13faa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
    // 0x13faa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13faa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13faa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13faa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13faac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13faacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13fab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAB4u;
        // 0x13fab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FABCu;
}
