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

// Function: default
// Address: 0x15ab7c - 0x15abe8
void ps2_default_0x15ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x15ab7c");
#endif

    ctx->pc = 0x15ab7cu;

    // 0x15ab7c: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x15ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ab80: 0x25070030  addiu       $a3, $t0, 0x30
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x15ab84: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x15ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ab88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x15ab88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x15ab8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ab8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15ab90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ab90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ab94: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15ab94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15ab98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15ab98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15ab9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15ab9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15aba0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15aba4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15aba4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15aba8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15aba8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15abac: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15abacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15abb0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x15abb4: 0xc503002c  lwc1        $f3, 0x2C($t0)
    ctx->pc = 0x15abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15abb8: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x15abb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x15abbc: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15abc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15abc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15abc4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x15abc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15abc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15abc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15abcc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15abd0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15abd0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15abd4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15abd4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15abd8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15abd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15abdc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x15abe0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15ABE0u;
    {
        const bool branch_taken_0x15abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abe0) {
            ctx->pc = 0x15AC14u;
            return;
        }
    }
    ctx->pc = 0x15ABE8u;
}
