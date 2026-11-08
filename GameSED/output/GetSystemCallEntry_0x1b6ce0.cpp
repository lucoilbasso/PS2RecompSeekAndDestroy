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

// Function: GetSystemCallEntry
// Address: 0x1b6ce0 - 0x1b6d14
void GetSystemCallEntry_0x1b6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemCallEntry_0x1b6ce0");
#endif

    switch (ctx->pc) {
        case 0x1b6d04u: goto label_1b6d04;
        default: break;
    }

    ctx->pc = 0x1b6ce0u;

    // 0x1b6ce0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b6ce4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6ce8: 0x8c45aa28  lw          $a1, -0x55D8($v0)
    ctx->pc = 0x1b6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x24AA28u));
    // 0x1b6cec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b6cf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6cfc: 0xc06db12  jal         func_1B6C48
    ctx->pc = 0x1B6CFCu;
    SET_GPR_U32(ctx, 31, 0x1B6D04u);
    ctx->pc = 0x1B6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CFCu;
    // 0x1b6d00: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C48u, 0x1B6CFCu, 0x1B6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D04u;
label_1b6d04:
    // 0x1b6d04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D0Cu;
        // 0x1b6d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D14u;
}
