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

// Function: WObjectMIMeJobSetup__Fv
// Address: 0x195450 - 0x195480
void WObjectMIMeJobSetup__Fv_0x195450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectMIMeJobSetup__Fv_0x195450");
#endif

    ctx->pc = 0x195450u;

    // 0x195450: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x195454: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x195454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x195458: 0x2463de50  addiu       $v1, $v1, -0x21B0
    ctx->pc = 0x195458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958672));
    // 0x19545c: 0x24425480  addiu       $v0, $v0, 0x5480
    ctx->pc = 0x19545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21632));
    // 0x195460: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x195460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE64u, _value); } while (0);
    // 0x195464: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195468: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x195468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE50u, _value); } while (0);
    // 0x19546c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19546cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE54u, _value); } while (0);
    // 0x195470: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x195470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE58u, _value); } while (0);
    // 0x195474: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x195474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE5Cu, _value); } while (0);
    // 0x195478: 0x3e00008  jr          $ra
    ctx->pc = 0x195478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195478u;
        // 0x19547c: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195480u;
}
