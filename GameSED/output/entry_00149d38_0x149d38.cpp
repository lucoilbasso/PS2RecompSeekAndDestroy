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

// Function: entry_00149d38
// Address: 0x149d38 - 0x149d80
void entry_00149d38_0x149d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d38_0x149d38");
#endif

    ctx->pc = 0x149d38u;

    // 0x149d38: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x149d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x149d3c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149d40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149d44: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x149d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149d4c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x149d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x149d50: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x149d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149d58: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149d5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149d60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149d64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149D64u;
    {
        const bool branch_taken_0x149d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D64u;
        // 0x149d68: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d64) {
            ctx->pc = 0x149D80u;
            return;
        }
    }
    ctx->pc = 0x149D6Cu;
    // 0x149d6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149d70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149d74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149d78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x149d80u;
}
