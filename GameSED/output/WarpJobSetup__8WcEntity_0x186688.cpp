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

// Function: WarpJobSetup__8WcEntity
// Address: 0x186688 - 0x1866b8
void WarpJobSetup__8WcEntity_0x186688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WarpJobSetup__8WcEntity_0x186688");
#endif

    ctx->pc = 0x186688u;

    // 0x186688: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x186688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x18668c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x186690: 0x246315a8  addiu       $v1, $v1, 0x15A8
    ctx->pc = 0x186690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5544));
    // 0x186694: 0x244266b8  addiu       $v0, $v0, 0x66B8
    ctx->pc = 0x186694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26296));
    // 0x186698: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x186698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4115B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115B0u, _value); } while (0);
    // 0x18669c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1866a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115A8u, _value); } while (0);
    // 0x1866a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1866a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115ACu, _value); } while (0);
    // 0x1866a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1866a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115B4u, _value); } while (0);
    // 0x1866ac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1866acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115B8u, _value); } while (0);
    // 0x1866b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1866B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1866B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866B0u;
        // 0x1866b4: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1866B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1866B8u;
}
