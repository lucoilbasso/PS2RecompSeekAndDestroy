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

// Function: entry_0017cff0
// Address: 0x17cff0 - 0x17d014
void entry_0017cff0_0x17cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cff0_0x17cff0");
#endif

    switch (ctx->pc) {
        case 0x17cff8u: goto label_17cff8;
        default: break;
    }

    ctx->pc = 0x17cff0u;

    // 0x17cff0: 0xc05e0e6  jal         func_178398
    ctx->pc = 0x17CFF0u;
    SET_GPR_U32(ctx, 31, 0x17CFF8u);
    ctx->pc = 0x178398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178398u, 0x17CFF0u, 0x17CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFF8u;
label_17cff8:
    // 0x17cff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17cffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d00c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D00Cu;
        // 0x17d010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D014u;
}
