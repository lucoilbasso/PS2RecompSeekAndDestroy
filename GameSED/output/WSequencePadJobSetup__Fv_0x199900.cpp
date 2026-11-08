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

// Function: WSequencePadJobSetup__Fv
// Address: 0x199900 - 0x199930
void WSequencePadJobSetup__Fv_0x199900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequencePadJobSetup__Fv_0x199900");
#endif

    ctx->pc = 0x199900u;

    // 0x199900: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x199904: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x199908: 0x2463de80  addiu       $v1, $v1, -0x2180
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958720));
    // 0x19990c: 0x24429930  addiu       $v0, $v0, -0x66D0
    ctx->pc = 0x19990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
    // 0x199910: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x199910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DE88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE88u, _value); } while (0);
    // 0x199914: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x199914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199918: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x199918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE80u, _value); } while (0);
    // 0x19991c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19991cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE84u, _value); } while (0);
    // 0x199920: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x199920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE8Cu, _value); } while (0);
    // 0x199924: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x199924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DE90u, _value); } while (0);
    // 0x199928: 0x3e00008  jr          $ra
    ctx->pc = 0x199928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199928u;
        // 0x19992c: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199930u;
}
