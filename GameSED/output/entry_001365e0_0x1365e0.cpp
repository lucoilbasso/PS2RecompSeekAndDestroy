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

// Function: entry_001365e0
// Address: 0x1365e0 - 0x136620
void entry_001365e0_0x1365e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001365e0_0x1365e0");
#endif

    switch (ctx->pc) {
        case 0x1365e8u: goto label_1365e8;
        case 0x1365f4u: goto label_1365f4;
        default: break;
    }

    ctx->pc = 0x1365e0u;

    // 0x1365e0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365E0u;
    SET_GPR_U32(ctx, 31, 0x1365E8u);
    ctx->pc = 0x1365E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365E0u;
    // 0x1365e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365E0u, 0x1365E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365E8u;
label_1365e8:
    // 0x1365e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1365e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365ec: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365ECu;
    SET_GPR_U32(ctx, 31, 0x1365F4u);
    ctx->pc = 0x1365F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365ECu;
    // 0x1365f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365ECu, 0x1365F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365F4u;
label_1365f4:
    // 0x1365f4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1365f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1365f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1365fc: 0xe61400e0  swc1        $f20, 0xE0($s0)
    ctx->pc = 0x1365fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x136600: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136604u;
    {
        const bool branch_taken_0x136604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136604u;
        // 0x136608: 0xe60100e4  swc1        $f1, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136604) {
            ctx->pc = 0x136624u;
            return;
        }
    }
    ctx->pc = 0x13660Cu;
    // 0x13660c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13660cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136610: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136614: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136614u;
    {
        const bool branch_taken_0x136614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136614u;
        // 0x136618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136614) {
            ctx->pc = 0x136620u;
            return;
        }
    }
    ctx->pc = 0x13661Cu;
    // 0x13661c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13661cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136620u;
}
