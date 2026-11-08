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

// Function: entry_0013914c
// Address: 0x13914c - 0x139160
void entry_0013914c_0x13914c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013914c_0x13914c");
#endif

    switch (ctx->pc) {
        case 0x139154u: goto label_139154;
        default: break;
    }

    ctx->pc = 0x13914cu;

    // 0x13914c: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x13914Cu;
    SET_GPR_U32(ctx, 31, 0x139154u);
    ctx->pc = 0x139150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13914Cu;
    // 0x139150: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x13914Cu, 0x139154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139154u;
label_139154:
    // 0x139154: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139158: 0x3e00008  jr          $ra
    ctx->pc = 0x139158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139158u;
        // 0x13915c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139160u;
}
