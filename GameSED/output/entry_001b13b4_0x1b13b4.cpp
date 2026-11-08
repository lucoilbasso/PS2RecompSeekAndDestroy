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

// Function: entry_001b13b4
// Address: 0x1b13b4 - 0x1b13d4
void entry_001b13b4_0x1b13b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b13b4_0x1b13b4");
#endif

    switch (ctx->pc) {
        case 0x1b13bcu: goto label_1b13bc;
        default: break;
    }

    ctx->pc = 0x1b13b4u;

    // 0x1b13b4: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B13B4u;
    SET_GPR_U32(ctx, 31, 0x1B13BCu);
    ctx->pc = 0x1B13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13B4u;
    // 0x1b13b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B13B4u, 0x1B13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b13c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b13c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b13c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b13c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b13c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b13c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b13cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13CCu;
        // 0x1b13d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B13CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B13D4u;
}
