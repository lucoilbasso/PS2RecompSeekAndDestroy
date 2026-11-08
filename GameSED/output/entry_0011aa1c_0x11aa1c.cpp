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

// Function: entry_0011aa1c
// Address: 0x11aa1c - 0x11aa54
void entry_0011aa1c_0x11aa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa1c_0x11aa1c");
#endif

    switch (ctx->pc) {
        case 0x11aa38u: goto label_11aa38;
        default: break;
    }

    ctx->pc = 0x11aa1cu;

    // 0x11aa1c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x11aa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x11aa20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11aa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11aa24: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x11aa24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa28: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x11AA28u;
    {
        const bool branch_taken_0x11aa28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa28) {
            ctx->pc = 0x11AA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA28u;
            // 0x11aa2c: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AA54u;
            return;
        }
    }
    ctx->pc = 0x11AA30u;
    // 0x11aa30: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AA30u;
    SET_GPR_U32(ctx, 31, 0x11AA38u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA30u, 0x11AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA38u;
label_11aa38:
    // 0x11aa38: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11aa3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aa40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11aa40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11aa44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aa48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11aa48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11aa4c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x11aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x11aa50: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11aa54u;
}
