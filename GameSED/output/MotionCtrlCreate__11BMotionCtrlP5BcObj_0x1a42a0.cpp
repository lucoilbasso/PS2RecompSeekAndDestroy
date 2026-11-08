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

// Function: MotionCtrlCreate__11BMotionCtrlP5BcObj
// Address: 0x1a42a0 - 0x1a4304
void MotionCtrlCreate__11BMotionCtrlP5BcObj_0x1a42a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionCtrlCreate__11BMotionCtrlP5BcObj_0x1a42a0");
#endif

    switch (ctx->pc) {
        case 0x1a42b4u: goto label_1a42b4;
        default: break;
    }

    ctx->pc = 0x1a42a0u;

    // 0x1a42a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a42a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a42a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a42ac: 0xc0695f4  jal         func_1A57D0
    ctx->pc = 0x1A42ACu;
    SET_GPR_U32(ctx, 31, 0x1A42B4u);
    ctx->pc = 0x1A42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42ACu;
    // 0x1a42b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57D0u, 0x1A42ACu, 0x1A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42B4u;
label_1a42b4:
    // 0x1a42b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a42b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a42b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a42bc: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1a42bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1a42c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a42c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a42c4: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x1a42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    // 0x1a42c8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1a42c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a42cc: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x1a42ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a42d0: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x1a42d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a42d4: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x1a42d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a42d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a42dc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1a42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1a42e0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1a42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1a42e4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1a42e8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1a42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1a42ec: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1a42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1a42f0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1a42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1a42f4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1a42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1a42f8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1a42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1a42fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A42FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42FCu;
        // 0x1a4300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A42FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4304u;
}
