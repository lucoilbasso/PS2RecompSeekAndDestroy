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

// Function: entry_001d8d04
// Address: 0x1d8d04 - 0x1d8d50
void entry_001d8d04_0x1d8d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8d04_0x1d8d04");
#endif

    ctx->pc = 0x1d8d04u;

    // 0x1d8d04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d8d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d08: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1d8d0c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1d8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1d8d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8d14: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1d8d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1d8d18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8d1c: 0x2447ffc0  addiu       $a3, $v0, -0x40
    ctx->pc = 0x1d8d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d8d20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8d24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d8d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8d28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8d2c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d8d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d8d30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8D30u;
    {
        const bool branch_taken_0x1d8d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D30u;
        // 0x1d8d34: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d30) {
            ctx->pc = 0x1D8D50u;
            return;
        }
    }
    ctx->pc = 0x1D8D38u;
    // 0x1d8d38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d8d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d8d3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1d8d40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8d44: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d8d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d8d48: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d8d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d8d4c: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    ctx->pc = 0x1d8d50u;
}
