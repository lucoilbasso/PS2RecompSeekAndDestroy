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

// Function: entry_00149d80
// Address: 0x149d80 - 0x149dd0
void entry_00149d80_0x149d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d80_0x149d80");
#endif

    ctx->pc = 0x149d80u;

    // 0x149d80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x149d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d84: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149d88: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149d90: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149d94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149d94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149d98: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149da0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149da8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149dac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149db0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149db4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149DB4u;
    {
        const bool branch_taken_0x149db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149db4) {
            ctx->pc = 0x149DD0u;
            return;
        }
    }
    ctx->pc = 0x149DBCu;
    // 0x149dbc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149dc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149dc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149dc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x149dd0u;
}
