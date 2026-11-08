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

// Function: entry_00149f9c
// Address: 0x149f9c - 0x149fe4
void entry_00149f9c_0x149f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f9c_0x149f9c");
#endif

    ctx->pc = 0x149f9cu;

    // 0x149f9c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149fa0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149fa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149fa8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149fac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149facu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149fb0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149fb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149fbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149fc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149fc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149fc8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149FC8u;
    {
        const bool branch_taken_0x149fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FC8u;
        // 0x149fcc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc8) {
            ctx->pc = 0x149FE4u;
            return;
        }
    }
    ctx->pc = 0x149FD0u;
    // 0x149fd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149fd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149fd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149fdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x149fe4u;
}
