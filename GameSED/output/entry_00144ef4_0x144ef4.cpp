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

// Function: entry_00144ef4
// Address: 0x144ef4 - 0x144f40
void entry_00144ef4_0x144ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144ef4_0x144ef4");
#endif

    ctx->pc = 0x144ef4u;

    // 0x144ef4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144efc: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x144f00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x144f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f04: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144f08: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144f0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144f14: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x144f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x144f18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144f1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x144F24u;
    {
        const bool branch_taken_0x144f24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144f24) {
            ctx->pc = 0x144F40u;
            return;
        }
    }
    ctx->pc = 0x144F2Cu;
    // 0x144f2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144f30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144f34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x144f40u;
}
