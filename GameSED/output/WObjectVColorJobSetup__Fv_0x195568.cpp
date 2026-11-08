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

// Function: WObjectVColorJobSetup__Fv
// Address: 0x195568 - 0x195598
void WObjectVColorJobSetup__Fv_0x195568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectVColorJobSetup__Fv_0x195568");
#endif

    ctx->pc = 0x195568u;

    // 0x195568: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19556c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x19556cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x195570: 0x2463de68  addiu       $v1, $v1, -0x2198
    ctx->pc = 0x195570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958696));
    // 0x195574: 0x24425598  addiu       $v0, $v0, 0x5598
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21912));
    // 0x195578: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x195578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DE7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE7Cu, _value); } while (0);
    // 0x19557c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19557cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195580: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x195580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE68u, _value); } while (0);
    // 0x195584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x195584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE6Cu, _value); } while (0);
    // 0x195588: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x195588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE70u, _value); } while (0);
    // 0x19558c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19558cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE74u, _value); } while (0);
    // 0x195590: 0x3e00008  jr          $ra
    ctx->pc = 0x195590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195590u;
        // 0x195594: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195598u;
}
