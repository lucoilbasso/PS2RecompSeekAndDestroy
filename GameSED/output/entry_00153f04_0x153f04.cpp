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

// Function: entry_00153f04
// Address: 0x153f04 - 0x153f50
void entry_00153f04_0x153f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153f04_0x153f04");
#endif

    ctx->pc = 0x153f04u;

    // 0x153f04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x153f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153f08: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x153f0c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x153f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x153f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153f14: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x153f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x153f18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x153f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153f1c: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x153f20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153f24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x153f2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153f30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x153F30u;
    {
        const bool branch_taken_0x153f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F30u;
        // 0x153f34: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f30) {
            ctx->pc = 0x153F50u;
            return;
        }
    }
    ctx->pc = 0x153F38u;
    // 0x153f38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x153f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x153f3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x153f40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x153f44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153f48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x153f4c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x153f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x153f50u;
}
