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

// Function: entry_001463c0
// Address: 0x1463c0 - 0x14645c
void entry_001463c0_0x1463c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001463c0_0x1463c0");
#endif

    ctx->pc = 0x1463c0u;

    // 0x1463c0: 0x70a210e8  pminw       $v0, $a1, $v0
    ctx->pc = 0x1463c0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x1463c4: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1463c8: 0x2403e71d  addiu       $v1, $zero, -0x18E3
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294960925));
    // 0x1463cc: 0x70a318c8  pmaxw       $v1, $a1, $v1
    ctx->pc = 0x1463ccu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1463d0: 0x32800  sll         $a1, $v1, 0
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1463d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1463d8: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1463d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1463dc: 0x2446f640  addiu       $a2, $v0, -0x9C0
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1463e0: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x1463e4: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1463e8: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1463ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1463f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1463f4: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x1463f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1463f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1463fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1463fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146400: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146408: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x146408u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x14640c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14640cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146410: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146414: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x146414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146418: 0x0  nop
    ctx->pc = 0x146418u;
    // NOP
    // 0x14641c: 0x0  nop
    ctx->pc = 0x14641cu;
    // NOP
    // 0x146420: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x146420u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x146424: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x146424u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x146428: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x146428u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x14642c: 0x8e0204e8  lw          $v0, 0x4E8($s0)
    ctx->pc = 0x14642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x146430: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146434: 0x21023  negu        $v0, $v0
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x146438: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x146438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x14643c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14643Cu;
    {
        const bool branch_taken_0x14643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14643Cu;
        // 0x146440: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14643c) {
            ctx->pc = 0x14645Cu;
            return;
        }
    }
    ctx->pc = 0x146444u;
    // 0x146444: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x146448: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14644c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x14644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x146450: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x146450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x146454: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146458: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x146458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x14645cu;
}
