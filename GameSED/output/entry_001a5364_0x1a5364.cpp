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

// Function: entry_001a5364
// Address: 0x1a5364 - 0x1a53a0
void entry_001a5364_0x1a5364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5364_0x1a5364");
#endif

    switch (ctx->pc) {
        case 0x1a5384u: goto label_1a5384;
        default: break;
    }

    ctx->pc = 0x1a5364u;

    // 0x1a5364: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x1a5364u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a5368: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1a5368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a536c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a536cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a5370: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1a5370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a5374: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1a5374u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1a5378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a537c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A537Cu;
    SET_GPR_U32(ctx, 31, 0x1A5384u);
    ctx->pc = 0x1A5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A537Cu;
    // 0x1a5380: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A537Cu, 0x1A5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5384u;
label_1a5384:
    // 0x1a5384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a538c: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a5390: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1a5390u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5394: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5394u;
    {
        const bool branch_taken_0x1a5394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5394u;
        // 0x1a5398: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5394) {
            ctx->pc = 0x1A53A0u;
            return;
        }
    }
    ctx->pc = 0x1A539Cu;
    // 0x1a539c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1a539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    ctx->pc = 0x1a53a0u;
}
