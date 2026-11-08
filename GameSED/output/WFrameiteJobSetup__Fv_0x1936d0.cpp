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

// Function: WFrameiteJobSetup__Fv
// Address: 0x1936d0 - 0x193700
void WFrameiteJobSetup__Fv_0x1936d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFrameiteJobSetup__Fv_0x1936d0");
#endif

    ctx->pc = 0x1936d0u;

    // 0x1936d0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1936d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1936d4: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x1936d8: 0x2463de20  addiu       $v1, $v1, -0x21E0
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958624));
    // 0x1936dc: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1936e0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1936e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DE34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE34u, _value); } while (0);
    // 0x1936e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1936e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1936e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE20u, _value); } while (0);
    // 0x1936ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1936ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE24u, _value); } while (0);
    // 0x1936f0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1936f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE28u, _value); } while (0);
    // 0x1936f4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1936f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE2Cu, _value); } while (0);
    // 0x1936f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1936F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1936FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936F8u;
        // 0x1936fc: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1936F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193700u;
}
