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

// Function: MotionJobSetup__8WcEntity
// Address: 0x186738 - 0x186768
void MotionJobSetup__8WcEntity_0x186738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionJobSetup__8WcEntity_0x186738");
#endif

    ctx->pc = 0x186738u;

    // 0x186738: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x186738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18673c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x18673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x186740: 0x24631590  addiu       $v1, $v1, 0x1590
    ctx->pc = 0x186740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x186744: 0x24425640  addiu       $v0, $v0, 0x5640
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22080));
    // 0x186748: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x186748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4115A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115A4u, _value); } while (0);
    // 0x18674c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18674cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186750: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x186750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411590u, _value); } while (0);
    // 0x186754: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411594u, _value); } while (0);
    // 0x186758: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x186758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411598u, _value); } while (0);
    // 0x18675c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18675cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41159Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41159Cu, _value); } while (0);
    // 0x186760: 0x3e00008  jr          $ra
    ctx->pc = 0x186760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186760u;
        // 0x186764: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186768u;
}
