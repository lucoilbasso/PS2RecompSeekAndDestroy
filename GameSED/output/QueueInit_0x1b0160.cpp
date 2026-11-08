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

// Function: QueueInit
// Address: 0x1b0160 - 0x1b0184
void QueueInit_0x1b0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueueInit_0x1b0160");
#endif

    ctx->pc = 0x1b0160u;

    // 0x1b0160: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b0160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b0164: 0x24437dc0  addiu       $v1, $v0, 0x7DC0
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32192));
    // 0x1b0168: 0xac447dc0  sw          $a0, 0x7DC0($v0)
    ctx->pc = 0x1b0168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x407DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x407DC0u, _value); } while (0);
    // 0x1b016c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1b016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0170: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b0170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0174: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1b0174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x407DC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x407DC8u, _value); } while (0);
    // 0x1b0178: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b0178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x407DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x407DC4u, _value); } while (0);
    // 0x1b017c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B017Cu;
        // 0x1b0180: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0184u;
}
