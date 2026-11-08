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

// Function: ApDebugConsoleInit__Fv
// Address: 0x16fc10 - 0x16fc54
void ApDebugConsoleInit__Fv_0x16fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugConsoleInit__Fv_0x16fc10");
#endif

    switch (ctx->pc) {
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc48u: goto label_16fc48;
        default: break;
    }

    ctx->pc = 0x16fc10u;

    // 0x16fc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fc18: 0xc05bd52  jal         func_16F548
    ctx->pc = 0x16FC18u;
    SET_GPR_U32(ctx, 31, 0x16FC20u);
    ctx->pc = 0x16F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F548u, 0x16FC18u, 0x16FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC20u;
label_16fc20:
    // 0x16fc20: 0xc06b44e  jal         func_1AD138
    ctx->pc = 0x16FC20u;
    SET_GPR_U32(ctx, 31, 0x16FC28u);
    ctx->pc = 0x1AD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD138u, 0x16FC20u, 0x16FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC28u;
label_16fc28:
    // 0x16fc28: 0x24047300  addiu       $a0, $zero, 0x7300
    ctx->pc = 0x16fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29440));
    // 0x16fc2c: 0x24057a80  addiu       $a1, $zero, 0x7A80
    ctx->pc = 0x16fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31360));
    // 0x16fc30: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x16fc34: 0xc06b45c  jal         func_1AD170
    ctx->pc = 0x16FC34u;
    SET_GPR_U32(ctx, 31, 0x16FC3Cu);
    ctx->pc = 0x16FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC34u;
    // 0x16fc38: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD170u, 0x16FC34u, 0x16FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC3Cu;
label_16fc3c:
    // 0x16fc3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc40: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x16FC40u;
    SET_GPR_U32(ctx, 31, 0x16FC48u);
    ctx->pc = 0x16FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC40u;
    // 0x16fc44: 0xaf829154  sw          $v0, -0x6EAC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x16FC40u, 0x16FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC48u;
label_16fc48:
    // 0x16fc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC4Cu;
        // 0x16fc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC54u;
}
