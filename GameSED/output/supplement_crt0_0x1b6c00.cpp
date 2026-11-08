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

// Function: supplement_crt0
// Address: 0x1b6c00 - 0x1b6c48
void supplement_crt0_0x1b6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("supplement_crt0_0x1b6c00");
#endif

    switch (ctx->pc) {
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c34u: goto label_1b6c34;
        default: break;
    }

    ctx->pc = 0x1b6c00u;

    // 0x1b6c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b6c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b6c0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c10: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1b6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1b6c14: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b6c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b6c18: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1b6c1c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C24u);
    ctx->pc = 0x1B6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C1Cu;
    // 0x1b6c20: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B6C1Cu, 0x1B6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C24u;
label_1b6c24:
    // 0x1b6c24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b6c28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b6c2c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C34u);
    ctx->pc = 0x1B6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C2Cu;
    // 0x1b6c30: 0xac62aa40  sw          $v0, -0x55C0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B6C2Cu, 0x1B6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C34u;
label_1b6c34:
    // 0x1b6c34: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b6c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b6c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6c3c: 0xac62aa44  sw          $v0, -0x55BC($v1)
    ctx->pc = 0x1b6c3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24AA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24AA44u, _value); } while (0);
    // 0x1b6c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C40u;
        // 0x1b6c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C48u;
}
