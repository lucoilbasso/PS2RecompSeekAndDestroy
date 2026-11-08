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

// Function: TankInit__20ApItemGameInfomation
// Address: 0x1187e8 - 0x118820
void TankInit__20ApItemGameInfomation_0x1187e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankInit__20ApItemGameInfomation_0x1187e8");
#endif

    switch (ctx->pc) {
        case 0x118808u: goto label_118808;
        case 0x118810u: goto label_118810;
        default: break;
    }

    ctx->pc = 0x1187e8u;

    // 0x1187e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1187e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1187ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1187ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1187f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1187f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1187f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1187f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1187f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1187fc: 0xae020fec  sw          $v0, 0xFEC($s0)
    ctx->pc = 0x1187fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4076), GPR_U32(ctx, 2));
    // 0x118800: 0xc046208  jal         func_118820
    ctx->pc = 0x118800u;
    SET_GPR_U32(ctx, 31, 0x118808u);
    ctx->pc = 0x118804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118800u;
    // 0x118804: 0xae020fe8  sw          $v0, 0xFE8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118820u, 0x118800u, 0x118808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118808u;
label_118808:
    // 0x118808: 0xc046216  jal         func_118858
    ctx->pc = 0x118808u;
    SET_GPR_U32(ctx, 31, 0x118810u);
    ctx->pc = 0x11880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118808u;
    // 0x11880c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118858u, 0x118808u, 0x118810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118810u;
label_118810:
    // 0x118810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118818: 0x3e00008  jr          $ra
    ctx->pc = 0x118818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118818u;
        // 0x11881c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118820u;
}
