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

// Function: entry_00149dd0
// Address: 0x149dd0 - 0x149e20
void entry_00149dd0_0x149dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149dd0_0x149dd0");
#endif

    ctx->pc = 0x149dd0u;

    // 0x149dd0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149dd8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149ddc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x149ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149de0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149de4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149de8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149df0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x149df0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x149df4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149df8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149dfc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149e00: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x149E00u;
    {
        const bool branch_taken_0x149e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E00u;
        // 0x149e04: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e00) {
            ctx->pc = 0x149E20u;
            return;
        }
    }
    ctx->pc = 0x149E08u;
    // 0x149e08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149e0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149e10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149e14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149e18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149e1c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x149e20u;
}
