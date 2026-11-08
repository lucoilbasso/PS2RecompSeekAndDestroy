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

// Function: entry_00126a20
// Address: 0x126a20 - 0x126adc
void entry_00126a20_0x126a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a20_0x126a20");
#endif

    ctx->pc = 0x126a20u;

    // 0x126a20: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a28: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a2c: 0x3c024242  lui         $v0, 0x4242
    ctx->pc = 0x126a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16962 << 16));
    // 0x126a30: 0x34424242  ori         $v0, $v0, 0x4242
    ctx->pc = 0x126a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16962);
    // 0x126a34: 0x3c03802a  lui         $v1, 0x802A
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32810 << 16));
    // 0x126a38: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x126a3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x126a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x126a40: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x126a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x126a44: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x126a44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x126a48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a4c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x126a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x126a50: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a54: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x126a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a5c: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x126a5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x126a60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a64: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x126a64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x126a68: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x126a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a6c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a70: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x126a74: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x126a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x126a80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x126a84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x126a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a88: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x126a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x126a8c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a90: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x126a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x126a94: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a98: 0xe4b50004  swc1        $f21, 0x4($a1)
    ctx->pc = 0x126a98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x126a9c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126aa4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126aa8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x126aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126aac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x126aacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x126ab0: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x126ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126ab4: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x126ab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x126ab8: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x126ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x126abc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x126abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126ac0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x126ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x126ac4: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x126ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x126ac8: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x126ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x126acc: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x126accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x126ad0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x126ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126ad4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x126ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x126ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x126adcu;
}
