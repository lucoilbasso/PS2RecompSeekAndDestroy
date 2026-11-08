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

// Function: Clear__6WcView
// Address: 0x1dd658 - 0x1dd694
void Clear__6WcView_0x1dd658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__6WcView_0x1dd658");
#endif

    ctx->pc = 0x1dd658u;

    // 0x1dd658: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dd658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd65c: 0x24820190  addiu       $v0, $a0, 0x190
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1dd660: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x1dd664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dd664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd668: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x1dd668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x1dd66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd670: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1dd670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dd674: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1dd674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1dd678: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1dd678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dd67c: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x1dd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x1dd680: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1dd680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1dd684: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x1dd684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x1dd688: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dd68c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD68Cu;
        // 0x1dd690: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD694u;
}
