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

// Function: entry_00141c1c
// Address: 0x141c1c - 0x141c68
void entry_00141c1c_0x141c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c1c_0x141c1c");
#endif

    switch (ctx->pc) {
        case 0x141c4cu: goto label_141c4c;
        default: break;
    }

    ctx->pc = 0x141c1cu;

    // 0x141c1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x141c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141c20: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x141c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x141c24: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x141c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141c28: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x141c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x141c2c: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x141c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141c30: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x141c30u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x141c34: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x141c34u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x141c38: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x141c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x141c3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x141c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x141c40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c44: 0xc067ba2  jal         func_19EE88
    ctx->pc = 0x141C44u;
    SET_GPR_U32(ctx, 31, 0x141C4Cu);
    ctx->pc = 0x141C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C44u;
    // 0x141c48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE88u, 0x141C44u, 0x141C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C4Cu;
label_141c4c:
    // 0x141c4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x141c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x141c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x141c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x141c54: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x141c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141c58: 0x0  nop
    ctx->pc = 0x141c58u;
    // NOP
    // 0x141c5c: 0x0  nop
    ctx->pc = 0x141c5cu;
    // NOP
    // 0x141c60: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x141c60u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x141c64: 0xe60c0154  swc1        $f12, 0x154($s0)
    ctx->pc = 0x141c64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    ctx->pc = 0x141c68u;
}
