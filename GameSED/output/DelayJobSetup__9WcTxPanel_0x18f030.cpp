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

// Function: DelayJobSetup__9WcTxPanel
// Address: 0x18f030 - 0x18f060
void DelayJobSetup__9WcTxPanel_0x18f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelayJobSetup__9WcTxPanel_0x18f030");
#endif

    ctx->pc = 0x18f030u;

    // 0x18f030: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18f034: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18f038: 0x24631be8  addiu       $v1, $v1, 0x1BE8
    ctx->pc = 0x18f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7144));
    // 0x18f03c: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x18f040: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x18f040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411BFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411BFCu, _value); } while (0);
    // 0x18f044: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18f044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f048: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18f048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411BE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411BE8u, _value); } while (0);
    // 0x18f04c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18f04cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411BECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411BECu, _value); } while (0);
    // 0x18f050: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18f050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411BF0u, _value); } while (0);
    // 0x18f054: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18f054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411BF4u, _value); } while (0);
    // 0x18f058: 0x3e00008  jr          $ra
    ctx->pc = 0x18F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F058u;
        // 0x18f05c: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F060u;
}
