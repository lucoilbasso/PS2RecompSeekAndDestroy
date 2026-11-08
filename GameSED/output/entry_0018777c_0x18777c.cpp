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

// Function: entry_0018777c
// Address: 0x18777c - 0x18779c
void entry_0018777c_0x18777c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018777c_0x18777c");
#endif

    switch (ctx->pc) {
        case 0x187784u: goto label_187784;
        default: break;
    }

    ctx->pc = 0x18777cu;

    // 0x18777c: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x18777Cu;
    SET_GPR_U32(ctx, 31, 0x187784u);
    ctx->pc = 0x187780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18777Cu;
    // 0x187780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x18777Cu, 0x187784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187784u;
label_187784:
    // 0x187784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18778c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187790: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187794: 0x3e00008  jr          $ra
    ctx->pc = 0x187794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187794u;
        // 0x187798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18779Cu;
}
