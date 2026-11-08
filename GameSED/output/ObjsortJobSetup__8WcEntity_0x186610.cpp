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

// Function: ObjsortJobSetup__8WcEntity
// Address: 0x186610 - 0x186638
void ObjsortJobSetup__8WcEntity_0x186610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ObjsortJobSetup__8WcEntity_0x186610");
#endif

    ctx->pc = 0x186610u;

    // 0x186610: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x186614: 0x246315c0  addiu       $v1, $v1, 0x15C0
    ctx->pc = 0x186614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5568));
    // 0x186618: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x186618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115C0u, _value); } while (0);
    // 0x18661c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18661cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186620: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115C4u, _value); } while (0);
    // 0x186624: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x186624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115C8u, _value); } while (0);
    // 0x186628: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x186628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115CCu, _value); } while (0);
    // 0x18662c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x18662cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4115D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4115D0u, _value); } while (0);
    // 0x186630: 0x3e00008  jr          $ra
    ctx->pc = 0x186630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186630u;
        // 0x186634: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186638u;
}
