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

// Function: ApUnitFrameJobSetup__Fv
// Address: 0x14d118 - 0x14d148
void ApUnitFrameJobSetup__Fv_0x14d118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitFrameJobSetup__Fv_0x14d118");
#endif

    ctx->pc = 0x14d118u;

    // 0x14d118: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x14d118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x14d11c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x14d120: 0x24633598  addiu       $v1, $v1, 0x3598
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13720));
    // 0x14d124: 0x2442c240  addiu       $v0, $v0, -0x3DC0
    ctx->pc = 0x14d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    // 0x14d128: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x14d128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2635ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635ACu, _value); } while (0);
    // 0x14d12c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14d12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d130: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14d130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x263598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x263598u, _value); } while (0);
    // 0x14d134: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14d134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26359Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26359Cu, _value); } while (0);
    // 0x14d138: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x14d138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635A0u, _value); } while (0);
    // 0x14d13c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x14d13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635A4u, _value); } while (0);
    // 0x14d140: 0x3e00008  jr          $ra
    ctx->pc = 0x14D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D140u;
        // 0x14d144: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D148u;
}
