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

// Function: entry_0017a604
// Address: 0x17a604 - 0x17a620
void entry_0017a604_0x17a604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a604_0x17a604");
#endif

    switch (ctx->pc) {
        case 0x17a60cu: goto label_17a60c;
        default: break;
    }

    ctx->pc = 0x17a604u;

    // 0x17a604: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17A604u;
    SET_GPR_U32(ctx, 31, 0x17A60Cu);
    ctx->pc = 0x17A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A604u;
    // 0x17a608: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17A604u, 0x17A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A60Cu;
label_17a60c:
    // 0x17a60c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x17a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x17a610: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a614: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a618: 0x3e00008  jr          $ra
    ctx->pc = 0x17A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A618u;
        // 0x17a61c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A620u;
}
