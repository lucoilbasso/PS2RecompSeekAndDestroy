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

// Function: entry_0013b278
// Address: 0x13b278 - 0x13b2a0
void entry_0013b278_0x13b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b278_0x13b278");
#endif

    switch (ctx->pc) {
        case 0x13b28cu: goto label_13b28c;
        default: break;
    }

    ctx->pc = 0x13b278u;

    // 0x13b278: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x13b278u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x13b27c: 0xc60c0200  lwc1        $f12, 0x200($s0)
    ctx->pc = 0x13b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b280: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x13b280u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x13b284: 0xc067bea  jal         func_19EFA8
    ctx->pc = 0x13B284u;
    SET_GPR_U32(ctx, 31, 0x13B28Cu);
    ctx->pc = 0x13B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B284u;
    // 0x13b288: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EFA8u, 0x13B284u, 0x13B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B28Cu;
label_13b28c:
    // 0x13b28c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x13b28cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b290: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B290u;
    {
        const bool branch_taken_0x13b290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b290) {
            ctx->pc = 0x13B2A0u;
            return;
        }
    }
    ctx->pc = 0x13B298u;
    // 0x13b298: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13b298u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x13b29c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13b29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x13b2a0u;
}
