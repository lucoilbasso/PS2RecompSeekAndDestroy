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

// Function: entry_0017e468
// Address: 0x17e468 - 0x17e484
void entry_0017e468_0x17e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e468_0x17e468");
#endif

    switch (ctx->pc) {
        case 0x17e470u: goto label_17e470;
        default: break;
    }

    ctx->pc = 0x17e468u;

    // 0x17e468: 0xc05f922  jal         func_17E488
    ctx->pc = 0x17E468u;
    SET_GPR_U32(ctx, 31, 0x17E470u);
    ctx->pc = 0x17E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E468u;
    // 0x17e46c: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E488u, 0x17E468u, 0x17E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E470u;
label_17e470:
    // 0x17e470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E47Cu;
        // 0x17e480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E484u;
}
