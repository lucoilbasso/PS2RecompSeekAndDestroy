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

// Function: Init__9WcMonitor
// Address: 0x177288 - 0x1772c4
void Init__9WcMonitor_0x177288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcMonitor_0x177288");
#endif

    switch (ctx->pc) {
        case 0x1772b8u: goto label_1772b8;
        default: break;
    }

    ctx->pc = 0x177288u;

    // 0x177288: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x177288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17728c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17728cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17729c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x17729cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1772a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1772a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1772a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1772a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1772a8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1772a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1772ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1772acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1772b0: 0xc05dcb2  jal         func_1772C8
    ctx->pc = 0x1772B0u;
    SET_GPR_U32(ctx, 31, 0x1772B8u);
    ctx->pc = 0x1772B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772B0u;
    // 0x1772b4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1772C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1772C8u, 0x1772B0u, 0x1772B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772B8u;
label_1772b8:
    // 0x1772b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1772b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1772BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772BCu;
        // 0x1772c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1772C4u;
}
