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

// Function: entry_00194b7c
// Address: 0x194b7c - 0x194bec
void entry_00194b7c_0x194b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194b7c_0x194b7c");
#endif

    ctx->pc = 0x194b7cu;

    // 0x194b7c: 0xc6e00180  lwc1        $f0, 0x180($s7)
    ctx->pc = 0x194b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194b84: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x194b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x194b88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x194b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x194b8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194b90: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x194b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x194b94: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x194b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x194b98: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x194b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x194b9c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x194ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194ba4: 0xc6e0017c  lwc1        $f0, 0x17C($s7)
    ctx->pc = 0x194ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ba8: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x194ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x194bac: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x194bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x194bb0: 0xfe2301d0  sd          $v1, 0x1D0($s1)
    ctx->pc = 0x194bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 3));
    // 0x194bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194bbc: 0xfe2401d8  sd          $a0, 0x1D8($s1)
    ctx->pc = 0x194bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 4));
    // 0x194bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194bc4: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x194BC4u;
    {
        const bool branch_taken_0x194bc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0xe6200218  swc1        $f0, 0x218($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bc4) {
            ctx->pc = 0x194BECu;
            return;
        }
    }
    ctx->pc = 0x194BCCu;
    // 0x194bcc: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x194bd0: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x194bd4: 0x3c04302e  lui         $a0, 0x302E
    ctx->pc = 0x194bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12334 << 16));
    // 0x194bd8: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x194bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x194bdc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x194bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x194be0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x194be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x194be4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x194be4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x194be8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x194be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x194becu;
}
