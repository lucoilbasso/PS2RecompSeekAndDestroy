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

// Function: TankFrameJobSetup__7ApcTank
// Address: 0x156020 - 0x156050
void TankFrameJobSetup__7ApcTank_0x156020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankFrameJobSetup__7ApcTank_0x156020");
#endif

    ctx->pc = 0x156020u;

    // 0x156020: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x156020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x156024: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x156024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x156028: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x15602c: 0x24426080  addiu       $v0, $v0, 0x6080
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
    // 0x156030: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x156030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411008u, _value); } while (0);
    // 0x156034: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x156034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156038: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411000u, _value); } while (0);
    // 0x15603c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15603cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411004u, _value); } while (0);
    // 0x156040: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x156040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41100Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41100Cu, _value); } while (0);
    // 0x156044: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x156044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411010u, _value); } while (0);
    // 0x156048: 0x3e00008  jr          $ra
    ctx->pc = 0x156048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156048u;
        // 0x15604c: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156050u;
}
