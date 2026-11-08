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

// Function: WActorPresetJobSetup__Fv
// Address: 0x19a9c0 - 0x19a9f0
void WActorPresetJobSetup__Fv_0x19a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WActorPresetJobSetup__Fv_0x19a9c0");
#endif

    ctx->pc = 0x19a9c0u;

    // 0x19a9c0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19a9c4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19a9c8: 0x2463deb0  addiu       $v1, $v1, -0x2150
    ctx->pc = 0x19a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958768));
    // 0x19a9cc: 0x2442a468  addiu       $v0, $v0, -0x5B98
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943848));
    // 0x19a9d0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x19a9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DEC4u, _value); } while (0);
    // 0x19a9d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19a9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19a9d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DEB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DEB0u, _value); } while (0);
    // 0x19a9dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19a9dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DEB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DEB4u, _value); } while (0);
    // 0x19a9e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19a9e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DEB8u, _value); } while (0);
    // 0x19a9e4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19a9e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DEBCu, _value); } while (0);
    // 0x19a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9E8u;
        // 0x19a9ec: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A9F0u;
}
