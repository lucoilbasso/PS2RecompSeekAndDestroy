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

// Function: entry_00121a4c
// Address: 0x121a4c - 0x121a9c
void entry_00121a4c_0x121a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121a4c_0x121a4c");
#endif

    ctx->pc = 0x121a4cu;

    // 0x121a4c: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x121a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121a50: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x121a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x121a54: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x121a58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121a60: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x121a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x121a64: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x121a68: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x121a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121a6c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x121a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121a70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x121a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x121a74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121a78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x121a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a7c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x121A7Cu;
    {
        const bool branch_taken_0x121a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A7Cu;
        // 0x121a80: 0x24622000  addiu       $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a7c) {
            ctx->pc = 0x121A9Cu;
            return;
        }
    }
    ctx->pc = 0x121A84u;
    // 0x121a84: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x121a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x121a88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x121a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x121a8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121a90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x121a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x121a98: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    ctx->pc = 0x121a9cu;
}
