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

// Function: FrameJobSetup__7WcWorld
// Address: 0x1888a8 - 0x1888d8
void FrameJobSetup__7WcWorld_0x1888a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameJobSetup__7WcWorld_0x1888a8");
#endif

    ctx->pc = 0x1888a8u;

    // 0x1888a8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x1888ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1888acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1888b0: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x1888b4: 0x24428908  addiu       $v0, $v0, -0x76F8
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936840));
    // 0x1888b8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1888b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411618u, _value); } while (0);
    // 0x1888bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1888bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1888c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411610u, _value); } while (0);
    // 0x1888c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1888c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411614u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411614u, _value); } while (0);
    // 0x1888c8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1888c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41161Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41161Cu, _value); } while (0);
    // 0x1888cc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1888ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411620u, _value); } while (0);
    // 0x1888d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1888D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1888D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888D0u;
        // 0x1888d4: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1888D8u;
}
