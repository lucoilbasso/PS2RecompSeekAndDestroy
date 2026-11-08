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

// Function: entry_0012204c
// Address: 0x12204c - 0x122098
void entry_0012204c_0x12204c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012204c_0x12204c");
#endif

    ctx->pc = 0x12204cu;

    // 0x12204c: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x12204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x122050: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x122050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x122054: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12205c: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x122060: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x122064: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x122064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122068: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x122068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12206c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x12206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x122070: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x122074: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x122074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122078: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x122078u;
    {
        const bool branch_taken_0x122078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122078) {
            ctx->pc = 0x12207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122078u;
            // 0x12207c: 0xc60200f0  lwc1        $f2, 0xF0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x122098u;
            return;
        }
    }
    ctx->pc = 0x122080u;
    // 0x122080: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x122080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x122084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x122088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12208c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12208cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x122094: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x122094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x122098u;
}
