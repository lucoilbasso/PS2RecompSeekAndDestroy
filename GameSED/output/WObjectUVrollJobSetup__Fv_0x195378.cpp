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

// Function: WObjectUVrollJobSetup__Fv
// Address: 0x195378 - 0x1953a8
void WObjectUVrollJobSetup__Fv_0x195378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectUVrollJobSetup__Fv_0x195378");
#endif

    ctx->pc = 0x195378u;

    // 0x195378: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x195378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19537c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x19537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x195380: 0x2463de38  addiu       $v1, $v1, -0x21C8
    ctx->pc = 0x195380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958648));
    // 0x195384: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
    // 0x195388: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x195388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DE4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE4Cu, _value); } while (0);
    // 0x19538c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19538cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195390: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x195390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE38u, _value); } while (0);
    // 0x195394: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x195394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE3Cu, _value); } while (0);
    // 0x195398: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x195398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE40u, _value); } while (0);
    // 0x19539c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19539cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE44u, _value); } while (0);
    // 0x1953a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1953A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A0u;
        // 0x1953a4: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953A8u;
}
