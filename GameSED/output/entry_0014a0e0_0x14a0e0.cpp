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

// Function: entry_0014a0e0
// Address: 0x14a0e0 - 0x14a124
void entry_0014a0e0_0x14a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a0e0_0x14a0e0");
#endif

    ctx->pc = 0x14a0e0u;

    // 0x14a0e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a0e4: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x14a0e8: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a0ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a0f0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x14a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x14a0f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a0f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a0fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14a100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a104: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14a104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14a108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14a108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a10c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a10cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14a110: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x14a110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14a114: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14A114u;
    {
        const bool branch_taken_0x14a114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A114u;
        // 0x14a118: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a114) {
            ctx->pc = 0x14A130u;
            return;
        }
    }
    ctx->pc = 0x14A11Cu;
    // 0x14a11c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x14a124u;
}
