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

// Function: entry_0017c5d8
// Address: 0x17c5d8 - 0x17c5fc
void entry_0017c5d8_0x17c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c5d8_0x17c5d8");
#endif

    switch (ctx->pc) {
        case 0x17c5e0u: goto label_17c5e0;
        default: break;
    }

    ctx->pc = 0x17c5d8u;

    // 0x17c5d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C5D8u;
    SET_GPR_U32(ctx, 31, 0x17C5E0u);
    ctx->pc = 0x17C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5D8u;
    // 0x17c5dc: 0x8e240830  lw          $a0, 0x830($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C5D8u, 0x17C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5E0u;
label_17c5e0:
    // 0x17c5e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c5e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17c5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c5e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17c5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c5ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17c5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c5f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5F4u;
        // 0x17c5f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5FCu;
}
