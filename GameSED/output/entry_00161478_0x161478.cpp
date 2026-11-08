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

// Function: entry_00161478
// Address: 0x161478 - 0x1614a0
void entry_00161478_0x161478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161478_0x161478");
#endif

    switch (ctx->pc) {
        case 0x161484u: goto label_161484;
        default: break;
    }

    ctx->pc = 0x161478u;

    // 0x161478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16147c: 0xc058ab0  jal         func_162AC0
    ctx->pc = 0x16147Cu;
    SET_GPR_U32(ctx, 31, 0x161484u);
    ctx->pc = 0x161480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16147Cu;
    // 0x161480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162AC0u, 0x16147Cu, 0x161484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161484u;
label_161484:
    // 0x161484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16148c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16148cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x161490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161498: 0x3e00008  jr          $ra
    ctx->pc = 0x161498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161498u;
        // 0x16149c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614A0u;
}
