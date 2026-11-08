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

// Function: entry_00199b68
// Address: 0x199b68 - 0x199b84
void entry_00199b68_0x199b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b68_0x199b68");
#endif

    switch (ctx->pc) {
        case 0x199b70u: goto label_199b70;
        default: break;
    }

    ctx->pc = 0x199b68u;

    // 0x199b68: 0xc05dd1c  jal         func_177470
    ctx->pc = 0x199B68u;
    SET_GPR_U32(ctx, 31, 0x199B70u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199B68u, 0x199B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B70u;
label_199b70:
    // 0x199b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x199B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B7Cu;
        // 0x199b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B84u;
}
