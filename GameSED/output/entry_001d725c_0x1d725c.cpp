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

// Function: entry_001d725c
// Address: 0x1d725c - 0x1d7280
void entry_001d725c_0x1d725c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d725c_0x1d725c");
#endif

    switch (ctx->pc) {
        case 0x1d7268u: goto label_1d7268;
        default: break;
    }

    ctx->pc = 0x1d725cu;

    // 0x1d725c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d7260: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D7260u;
    SET_GPR_U32(ctx, 31, 0x1D7268u);
    ctx->pc = 0x1D7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7260u;
    // 0x1d7264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D7260u, 0x1D7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7268u;
label_1d7268:
    // 0x1d7268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d726c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d726cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7270: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7274: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7278: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7280u;
}
