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

// Function: entry_0011b184
// Address: 0x11b184 - 0x11b1a4
void entry_0011b184_0x11b184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b184_0x11b184");
#endif

    switch (ctx->pc) {
        case 0x11b18cu: goto label_11b18c;
        default: break;
    }

    ctx->pc = 0x11b184u;

    // 0x11b184: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B184u;
    SET_GPR_U32(ctx, 31, 0x11B18Cu);
    ctx->pc = 0x11B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B184u;
    // 0x11b188: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B184u, 0x11B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B18Cu;
label_11b18c:
    // 0x11b18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b198: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b19c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B19Cu;
        // 0x11b1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1A4u;
}
