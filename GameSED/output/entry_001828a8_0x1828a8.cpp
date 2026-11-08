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

// Function: entry_001828a8
// Address: 0x1828a8 - 0x1828c4
void entry_001828a8_0x1828a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001828a8_0x1828a8");
#endif

    switch (ctx->pc) {
        case 0x1828b0u: goto label_1828b0;
        default: break;
    }

    ctx->pc = 0x1828a8u;

    // 0x1828a8: 0xc060a32  jal         func_1828C8
    ctx->pc = 0x1828A8u;
    SET_GPR_U32(ctx, 31, 0x1828B0u);
    ctx->pc = 0x1828ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828A8u;
    // 0x1828ac: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C8u, 0x1828A8u, 0x1828B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828B0u;
label_1828b0:
    // 0x1828b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1828b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1828b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1828b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1828b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1828BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828BCu;
        // 0x1828c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828C4u;
}
