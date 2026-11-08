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

// Function: entry_001492cc
// Address: 0x1492cc - 0x149308
void entry_001492cc_0x1492cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492cc_0x1492cc");
#endif

    ctx->pc = 0x1492ccu;

    // 0x1492cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1492ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1492d0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1492d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1492d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1492d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1492d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1492dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1492dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1492e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1492e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1492e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1492e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1492e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1492e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1492ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1492ECu;
    {
        const bool branch_taken_0x1492ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1492F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492ECu;
        // 0x1492f0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492ec) {
            ctx->pc = 0x149308u;
            return;
        }
    }
    ctx->pc = 0x1492F4u;
    // 0x1492f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1492f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1492f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1492fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1492fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149300: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x149308u;
}
