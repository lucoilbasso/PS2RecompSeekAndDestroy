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

// Function: entry_0019dc28
// Address: 0x19dc28 - 0x19dc5c
void entry_0019dc28_0x19dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc28_0x19dc28");
#endif

    ctx->pc = 0x19dc28u;

    // 0x19dc28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19dc2c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc30: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dc34: 0xc78285ec  lwc1        $f2, -0x7A14($gp)
    ctx->pc = 0x19dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dc38: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19dc38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19dc3c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x19dc3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x19dc40: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19dc40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DC44u;
    {
        const bool branch_taken_0x19dc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc44) {
            ctx->pc = 0x19DC5Cu;
            return;
        }
    }
    ctx->pc = 0x19DC4Cu;
    // 0x19dc4c: 0xc78085f0  lwc1        $f0, -0x7A10($gp)
    ctx->pc = 0x19dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc50: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19dc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC54u;
    {
        const bool branch_taken_0x19dc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc54) {
            ctx->pc = 0x19DC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC54u;
            // 0x19dc58: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC5Cu;
            return;
        }
    }
    ctx->pc = 0x19DC5Cu;
}
