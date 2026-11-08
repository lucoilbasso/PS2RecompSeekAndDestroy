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

// Function: PresetJobSetup__7WcWorld
// Address: 0x1888d8 - 0x188908
void PresetJobSetup__7WcWorld_0x1888d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PresetJobSetup__7WcWorld_0x1888d8");
#endif

    ctx->pc = 0x1888d8u;

    // 0x1888d8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x1888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x1888dc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1888dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1888e0: 0x246315f8  addiu       $v1, $v1, 0x15F8
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5624));
    // 0x1888e4: 0x24428950  addiu       $v0, $v0, -0x76B0
    ctx->pc = 0x1888e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
    // 0x1888e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1888e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411600u, _value); } while (0);
    // 0x1888ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1888ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1888f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115F8u, _value); } while (0);
    // 0x1888f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1888f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115FCu, _value); } while (0);
    // 0x1888f8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1888f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411604u, _value); } while (0);
    // 0x1888fc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1888fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411608u, _value); } while (0);
    // 0x188900: 0x3e00008  jr          $ra
    ctx->pc = 0x188900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188900u;
        // 0x188904: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188908u;
}
