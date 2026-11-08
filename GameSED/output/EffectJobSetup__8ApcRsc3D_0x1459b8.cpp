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

// Function: EffectJobSetup__8ApcRsc3D
// Address: 0x1459b8 - 0x1459e8
void EffectJobSetup__8ApcRsc3D_0x1459b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectJobSetup__8ApcRsc3D_0x1459b8");
#endif

    ctx->pc = 0x1459b8u;

    // 0x1459b8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1459b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1459bc: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1459c0: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x1459c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x1459c4: 0x244259e8  addiu       $v0, $v0, 0x59E8
    ctx->pc = 0x1459c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23016));
    // 0x1459c8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1459c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x410FB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x410FB4u, _value); } while (0);
    // 0x1459cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1459ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1459d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x410FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x410FA0u, _value); } while (0);
    // 0x1459d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1459d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x410FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x410FA4u, _value); } while (0);
    // 0x1459d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1459d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x410FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x410FA8u, _value); } while (0);
    // 0x1459dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1459dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x410FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x410FACu, _value); } while (0);
    // 0x1459e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1459E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459E0u;
        // 0x1459e4: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1459E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1459E8u;
}
