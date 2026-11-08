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

// Function: entry_001c3fbc
// Address: 0x1c3fbc - 0x1c3ff0
void entry_001c3fbc_0x1c3fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3fbc_0x1c3fbc");
#endif

    switch (ctx->pc) {
        case 0x1c3fccu: goto label_1c3fcc;
        default: break;
    }

    ctx->pc = 0x1c3fbcu;

    // 0x1c3fbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3fc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c3fc4: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3FC4u;
    SET_GPR_U32(ctx, 31, 0x1C3FCCu);
    ctx->pc = 0x1C3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FC4u;
    // 0x1c3fc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3FC4u, 0x1C3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FCCu;
label_1c3fcc:
    // 0x1c3fcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3fd0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1c3fd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3fd4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1c3fd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3fd8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c3fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fdc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c3fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fe0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c3fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3fe4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c3fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FE8u;
        // 0x1c3fec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FF0u;
}
