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

// Function: entry_001d629c
// Address: 0x1d629c - 0x1d62c4
void entry_001d629c_0x1d629c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d629c_0x1d629c");
#endif

    switch (ctx->pc) {
        case 0x1d62acu: goto label_1d62ac;
        default: break;
    }

    ctx->pc = 0x1d629cu;

    // 0x1d629c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1d62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a4: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D62A4u;
    SET_GPR_U32(ctx, 31, 0x1D62ACu);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D62A4u, 0x1D62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62ACu;
label_1d62ac:
    // 0x1d62ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d62b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d62b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d62b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d62b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d62bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D62BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62BCu;
        // 0x1d62c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D62BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D62C4u;
}
