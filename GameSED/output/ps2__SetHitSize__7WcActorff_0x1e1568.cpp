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

// Function: _SetHitSize__7WcActorff
// Address: 0x1e1568 - 0x1e159c
void ps2__SetHitSize__7WcActorff_0x1e1568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetHitSize__7WcActorff_0x1e1568");
#endif

    ctx->pc = 0x1e1568u;

    // 0x1e1568: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x1e156c: 0xe48c00e0  swc1        $f12, 0xE0($a0)
    ctx->pc = 0x1e156cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1e1570: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1e1570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e1574: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1574u;
    {
        const bool branch_taken_0x1e1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1574u;
        // 0x1e1578: 0xe48d00e4  swc1        $f13, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1574) {
            ctx->pc = 0x1E1594u;
            goto label_1e1594;
        }
    }
    ctx->pc = 0x1E157Cu;
    // 0x1e157c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e157cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1580: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x1e1580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1584: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1584u;
    {
        const bool branch_taken_0x1e1584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1584u;
        // 0x1e1588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1584) {
            ctx->pc = 0x1E1590u;
            goto label_1e1590;
        }
    }
    ctx->pc = 0x1E158Cu;
    // 0x1e158c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e158cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1590:
    // 0x1e1590: 0xac8200d8  sw          $v0, 0xD8($a0)
    ctx->pc = 0x1e1590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
label_1e1594:
    // 0x1e1594: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E159Cu;
}
