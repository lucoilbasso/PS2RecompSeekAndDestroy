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

// Function: entry_001987ac
// Address: 0x1987ac - 0x19881c
void entry_001987ac_0x1987ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001987ac_0x1987ac");
#endif

    ctx->pc = 0x1987acu;

    // 0x1987ac: 0xc4c00180  lwc1        $f0, 0x180($a2)
    ctx->pc = 0x1987acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1987b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1987b4: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x1987b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
    // 0x1987b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1987b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1987bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1987c0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x1987c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x1987c4: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1987c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x1987c8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1987cc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x1987d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1987d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1987d4: 0xc4c0017c  lwc1        $f0, 0x17C($a2)
    ctx->pc = 0x1987d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987d8: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x1987d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x1987dc: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1987dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1987e0: 0xfe0301d0  sd          $v1, 0x1D0($s0)
    ctx->pc = 0x1987e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 3));
    // 0x1987e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1987e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1987e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1987ec: 0xfe0401d8  sd          $a0, 0x1D8($s0)
    ctx->pc = 0x1987ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 4));
    // 0x1987f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1987f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1987f4: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1987F4u;
    {
        const bool branch_taken_0x1987f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987F4u;
        // 0x1987f8: 0xe6000218  swc1        $f0, 0x218($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987f4) {
            ctx->pc = 0x19881Cu;
            return;
        }
    }
    ctx->pc = 0x1987FCu;
    // 0x1987fc: 0x260201e0  addiu       $v0, $s0, 0x1E0
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x198800: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x198804: 0x3c04302e  lui         $a0, 0x302E
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12334 << 16));
    // 0x198808: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x19880c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198810: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x198814: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x198814u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x198818: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x198818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x19881cu;
}
