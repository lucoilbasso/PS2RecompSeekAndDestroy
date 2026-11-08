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

// Function: WPadSetRepeat__FP5WcPadb
// Address: 0x1146a8 - 0x1146dc
void WPadSetRepeat__FP5WcPadb_0x1146a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSetRepeat__FP5WcPadb_0x1146a8");
#endif

    ctx->pc = 0x1146a8u;

    // 0x1146a8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1146A8u;
    {
        const bool branch_taken_0x1146a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A8u;
        // 0x1146ac: 0x2403f000  addiu       $v1, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146a8) {
            ctx->pc = 0x1146C8u;
            goto label_1146c8;
        }
    }
    ctx->pc = 0x1146B0u;
    // 0x1146b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1146b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1146b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1146b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1146b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1146bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1146BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1146C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146BCu;
        // 0x1146c0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1146C4u;
    // 0x1146c4: 0x0  nop
    ctx->pc = 0x1146c4u;
    // NOP
label_1146c8:
    // 0x1146c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1146c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1146cc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1146ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1146d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1146d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1146d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1146D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1146DCu;
}
