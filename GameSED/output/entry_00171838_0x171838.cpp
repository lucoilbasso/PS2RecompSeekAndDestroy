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

// Function: entry_00171838
// Address: 0x171838 - 0x17184c
void entry_00171838_0x171838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171838_0x171838");
#endif

    switch (ctx->pc) {
        case 0x171840u: goto label_171840;
        default: break;
    }

    ctx->pc = 0x171838u;

    // 0x171838: 0xc05d742  jal         func_175D08
    ctx->pc = 0x171838u;
    SET_GPR_U32(ctx, 31, 0x171840u);
    ctx->pc = 0x17183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171838u;
    // 0x17183c: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D08u, 0x171838u, 0x171840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171840u;
label_171840:
    // 0x171840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171844: 0x3e00008  jr          $ra
    ctx->pc = 0x171844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171844u;
        // 0x171848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17184Cu;
}
