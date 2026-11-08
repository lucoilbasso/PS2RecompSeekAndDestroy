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

// Function: ThinkJobSetup__9ApcObjRsc
// Address: 0x1045e8 - 0x104618
void ThinkJobSetup__9ApcObjRsc_0x1045e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkJobSetup__9ApcObjRsc_0x1045e8");
#endif

    ctx->pc = 0x1045e8u;

    // 0x1045e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1045e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1045ec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1045ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1045f0: 0x246305e8  addiu       $v1, $v1, 0x5E8
    ctx->pc = 0x1045f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1512));
    // 0x1045f4: 0x24424618  addiu       $v0, $v0, 0x4618
    ctx->pc = 0x1045f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17944));
    // 0x1045f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1045f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4105F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4105F0u, _value); } while (0);
    // 0x1045fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1045fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104600: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x104600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4105E8u, _value); } while (0);
    // 0x104604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x104604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4105ECu, _value); } while (0);
    // 0x104608: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x104608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4105F4u, _value); } while (0);
    // 0x10460c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x10460cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4105F8u, _value); } while (0);
    // 0x104610: 0x3e00008  jr          $ra
    ctx->pc = 0x104610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104610u;
        // 0x104614: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104618u;
}
