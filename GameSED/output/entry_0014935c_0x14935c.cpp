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

// Function: entry_0014935c
// Address: 0x14935c - 0x1493a8
void entry_0014935c_0x14935c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014935c_0x14935c");
#endif

    ctx->pc = 0x14935cu;

    // 0x14935c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149360: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149368: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14936c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149378: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x149378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x14937c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14937cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149380: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149384: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x149384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x149388: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x149388u;
    {
        const bool branch_taken_0x149388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149388u;
        // 0x14938c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149388) {
            ctx->pc = 0x1493A8u;
            return;
        }
    }
    ctx->pc = 0x149390u;
    // 0x149390: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149394: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149398: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14939c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14939cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1493a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1493a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1493a4: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1493a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    ctx->pc = 0x1493a8u;
}
