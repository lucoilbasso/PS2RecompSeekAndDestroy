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

// Function: entry_0018d4f8
// Address: 0x18d4f8 - 0x18d550
void entry_0018d4f8_0x18d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d4f8_0x18d4f8");
#endif

    ctx->pc = 0x18d4f8u;

    // 0x18d4f8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x18d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18d4fc: 0xc62101b0  lwc1        $f1, 0x1B0($s1)
    ctx->pc = 0x18d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d500: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d504: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18d50c: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x18d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d510: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x18d510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18d514: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18d518: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18d51c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18d520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18d524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d528: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d52c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18d52cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d530: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18d530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18d534: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18d534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18d538: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x18d538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18d53c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x18d540: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x18d540u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x18d544: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D544u;
        // 0x18d548: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D54Cu;
    // 0x18d54c: 0x0  nop
    ctx->pc = 0x18d54cu;
    // NOP
    ctx->pc = 0x18d550u;
}
