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

// Function: ApUserPadJobSetup__Fv
// Address: 0x156940 - 0x156970
void ApUserPadJobSetup__Fv_0x156940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserPadJobSetup__Fv_0x156940");
#endif

    ctx->pc = 0x156940u;

    // 0x156940: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x156944: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156948: 0x246335b0  addiu       $v1, $v1, 0x35B0
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13744));
    // 0x15694c: 0x244268e8  addiu       $v0, $v0, 0x68E8
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26856));
    // 0x156950: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x156950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2635B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635B8u, _value); } while (0);
    // 0x156954: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x156954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156958: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635B0u, _value); } while (0);
    // 0x15695c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15695cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635B4u, _value); } while (0);
    // 0x156960: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x156960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635BCu, _value); } while (0);
    // 0x156964: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x156964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635C0u, _value); } while (0);
    // 0x156968: 0x3e00008  jr          $ra
    ctx->pc = 0x156968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156968u;
        // 0x15696c: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156970u;
}
