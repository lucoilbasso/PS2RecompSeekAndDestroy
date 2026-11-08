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

// Function: ApUnitPrefixJobSetup__Fv
// Address: 0x14d0e8 - 0x14d118
void ApUnitPrefixJobSetup__Fv_0x14d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitPrefixJobSetup__Fv_0x14d0e8");
#endif

    ctx->pc = 0x14d0e8u;

    // 0x14d0e8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x14d0ec: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x14d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x14d0f0: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x14d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x14d0f4: 0x2442d148  addiu       $v0, $v0, -0x2EB8
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955336));
    // 0x14d0f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x14d0f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x263588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x263588u, _value); } while (0);
    // 0x14d0fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14d0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d100: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14d100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x263580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x263580u, _value); } while (0);
    // 0x14d104: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14d104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x263584u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x263584u, _value); } while (0);
    // 0x14d108: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x14d108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26358Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26358Cu, _value); } while (0);
    // 0x14d10c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x14d10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x263590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x263590u, _value); } while (0);
    // 0x14d110: 0x3e00008  jr          $ra
    ctx->pc = 0x14D110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D110u;
        // 0x14d114: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D118u;
}
