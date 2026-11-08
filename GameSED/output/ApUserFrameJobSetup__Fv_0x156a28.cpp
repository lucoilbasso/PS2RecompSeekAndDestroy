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

// Function: ApUserFrameJobSetup__Fv
// Address: 0x156a28 - 0x156a58
void ApUserFrameJobSetup__Fv_0x156a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserFrameJobSetup__Fv_0x156a28");
#endif

    ctx->pc = 0x156a28u;

    // 0x156a28: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156a2c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x156a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x156a30: 0x246335c8  addiu       $v1, $v1, 0x35C8
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13768));
    // 0x156a34: 0x24426618  addiu       $v0, $v0, 0x6618
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26136));
    // 0x156a38: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x156a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2635DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635DCu, _value); } while (0);
    // 0x156a3c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x156a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635C8u, _value); } while (0);
    // 0x156a44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x156a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635CCu, _value); } while (0);
    // 0x156a48: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x156a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635D0u, _value); } while (0);
    // 0x156a4c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x156a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635D4u, _value); } while (0);
    // 0x156a50: 0x3e00008  jr          $ra
    ctx->pc = 0x156A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A50u;
        // 0x156a54: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A58u;
}
