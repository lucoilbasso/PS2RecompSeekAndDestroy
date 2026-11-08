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

// Function: entry_00110624
// Address: 0x110624 - 0x110648
void entry_00110624_0x110624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110624_0x110624");
#endif

    switch (ctx->pc) {
        case 0x110630u: goto label_110630;
        default: break;
    }

    ctx->pc = 0x110624u;

    // 0x110624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110628: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x110628u;
    SET_GPR_U32(ctx, 31, 0x110630u);
    ctx->pc = 0x11062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110628u;
    // 0x11062c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951B0u, 0x110628u, 0x110630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110630u;
label_110630:
    // 0x110630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x110638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11063c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110640: 0x3e00008  jr          $ra
    ctx->pc = 0x110640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110640u;
        // 0x110644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110648u;
}
