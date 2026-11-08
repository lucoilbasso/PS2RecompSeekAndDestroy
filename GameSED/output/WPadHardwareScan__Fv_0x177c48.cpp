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

// Function: WPadHardwareScan__Fv
// Address: 0x177c48 - 0x177c94
void WPadHardwareScan__Fv_0x177c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardwareScan__Fv_0x177c48");
#endif

    switch (ctx->pc) {
        case 0x177c6cu: goto label_177c6c;
        case 0x177c7cu: goto label_177c7c;
        default: break;
    }

    ctx->pc = 0x177c48u;

    // 0x177c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177c54: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x177c58: 0x2610e820  addiu       $s0, $s0, -0x17E0
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961184));
    // 0x177c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177c64: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C64u;
    SET_GPR_U32(ctx, 31, 0x177C6Cu);
    ctx->pc = 0x177C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C64u;
    // 0x177c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C64u, 0x177C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C6Cu;
label_177c6c:
    // 0x177c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177c70: 0x2606005c  addiu       $a2, $s0, 0x5C
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x177c74: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C74u;
    SET_GPR_U32(ctx, 31, 0x177C7Cu);
    ctx->pc = 0x177C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C74u;
    // 0x177c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C74u, 0x177C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C7Cu;
label_177c7c:
    // 0x177c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177c84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177c88: 0xaf838cb0  sw          $v1, -0x7350($gp)
    ctx->pc = 0x177c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
    // 0x177c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x177C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C8Cu;
        // 0x177c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C94u;
}
