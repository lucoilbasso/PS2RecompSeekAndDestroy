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

// Function: entry_00144f8c
// Address: 0x144f8c - 0x144fdc
void entry_00144f8c_0x144f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144f8c_0x144f8c");
#endif

    ctx->pc = 0x144f8cu;

    // 0x144f8c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144f94: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x144f98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x144f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f9c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144fa0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144fa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144fa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144fac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x144facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x144fb0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144fb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144fb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144fbc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x144FBCu;
    {
        const bool branch_taken_0x144fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x144FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FBCu;
        // 0x144fc0: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fbc) {
            ctx->pc = 0x144FDCu;
            return;
        }
    }
    ctx->pc = 0x144FC4u;
    // 0x144fc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144fc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144fcc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144fd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144fd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144fd8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x144fdcu;
}
