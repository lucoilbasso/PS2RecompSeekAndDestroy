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

// Function: entry_001839f0
// Address: 0x1839f0 - 0x183a20
void entry_001839f0_0x1839f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001839f0_0x1839f0");
#endif

    switch (ctx->pc) {
        case 0x183a00u: goto label_183a00;
        default: break;
    }

    ctx->pc = 0x1839f0u;

    // 0x1839f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1839f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1839f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839f8: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1839F8u;
    SET_GPR_U32(ctx, 31, 0x183A00u);
    ctx->pc = 0x1839FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839F8u;
    // 0x1839fc: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1839F8u, 0x183A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A00u;
label_183a00:
    // 0x183a00: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183a04: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x183a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183a08: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x183a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183a0c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x183a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183a10: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x183a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183a14: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x183a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183a18: 0x3e00008  jr          $ra
    ctx->pc = 0x183A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A18u;
        // 0x183a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A20u;
}
