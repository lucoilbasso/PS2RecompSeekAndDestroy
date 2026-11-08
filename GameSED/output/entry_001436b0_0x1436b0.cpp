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

// Function: entry_001436b0
// Address: 0x1436b0 - 0x1436f4
void entry_001436b0_0x1436b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436b0_0x1436b0");
#endif

    ctx->pc = 0x1436b0u;

    // 0x1436b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1436b4: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1436b8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1436bc: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x1436bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x1436c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1436c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1436c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1436c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1436c8: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x1436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x1436cc: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1436ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1436d0: 0x96e2000c  lhu         $v0, 0xC($s7)
    ctx->pc = 0x1436d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1436d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1436d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1436d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1436dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1436DCu;
    {
        const bool branch_taken_0x1436dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436dc) {
            ctx->pc = 0x1436E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436DCu;
            // 0x1436e0: 0xc6800014  lwc1        $f0, 0x14($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436F4u;
            return;
        }
    }
    ctx->pc = 0x1436E4u;
    // 0x1436e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1436e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1436e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1436e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1436ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1436ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1436f0: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x1436f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1436f4u;
}
