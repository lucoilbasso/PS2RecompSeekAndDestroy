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

// Function: BrzierVectorSetUp__17BBrzierVectorWorkPvfi
// Address: 0x1aa0b0 - 0x1aa0d4
void BrzierVectorSetUp__17BBrzierVectorWorkPvfi_0x1aa0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierVectorSetUp__17BBrzierVectorWorkPvfi_0x1aa0b0");
#endif

    ctx->pc = 0x1aa0b0u;

    // 0x1aa0b0: 0xac8500dc  sw          $a1, 0xDC($a0)
    ctx->pc = 0x1aa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 5));
    // 0x1aa0b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1aa0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0b8: 0xe48c0048  swc1        $f12, 0x48($a0)
    ctx->pc = 0x1aa0b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1aa0bc: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x1aa0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
    // 0x1aa0c0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1aa0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1aa0c4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1aa0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1aa0c8: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1aa0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1aa0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0CCu;
        // 0x1aa0d0: 0xac8000e0  sw          $zero, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA0D4u;
}
