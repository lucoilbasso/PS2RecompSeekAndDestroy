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

// Function: kputs
// Address: 0x1b78e0 - 0x1b7904
void kputs_0x1b78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputs_0x1b78e0");
#endif

    switch (ctx->pc) {
        case 0x1b78f8u: goto label_1b78f8;
        default: break;
    }

    ctx->pc = 0x1b78e0u;

    // 0x1b78e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b78e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b78e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b78e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b78f0: 0xc06be24  jal         func_1AF890
    ctx->pc = 0x1B78F0u;
    SET_GPR_U32(ctx, 31, 0x1B78F8u);
    ctx->pc = 0x1B78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78F0u;
    // 0x1b78f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF890u, 0x1B78F0u, 0x1B78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78F8u;
label_1b78f8:
    // 0x1b78f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b78fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B78FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78FCu;
        // 0x1b7900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B78FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7904u;
}
