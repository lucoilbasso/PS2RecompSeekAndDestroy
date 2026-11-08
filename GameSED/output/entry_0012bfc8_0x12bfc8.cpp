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

// Function: entry_0012bfc8
// Address: 0x12bfc8 - 0x12bfe4
void entry_0012bfc8_0x12bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bfc8_0x12bfc8");
#endif

    switch (ctx->pc) {
        case 0x12bfd0u: goto label_12bfd0;
        default: break;
    }

    ctx->pc = 0x12bfc8u;

    // 0x12bfc8: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x12BFC8u;
    SET_GPR_U32(ctx, 31, 0x12BFD0u);
    ctx->pc = 0x12BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFC8u;
    // 0x12bfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x12BFC8u, 0x12BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFD0u;
label_12bfd0:
    // 0x12bfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFDCu;
        // 0x12bfe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFE4u;
}
