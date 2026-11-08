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

// Function: entry_0014c804
// Address: 0x14c804 - 0x14c838
void entry_0014c804_0x14c804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c804_0x14c804");
#endif

    ctx->pc = 0x14c804u;

    // 0x14c804: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14c808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c80c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14c810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c814: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14c818: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14c818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14c81c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14C81Cu;
    {
        const bool branch_taken_0x14c81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C81Cu;
        // 0x14c820: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c81c) {
            ctx->pc = 0x14C838u;
            return;
        }
    }
    ctx->pc = 0x14C824u;
    // 0x14c824: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14c828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14c82c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c82cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14c830: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14c830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14c834: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14c834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->pc = 0x14c838u;
}
