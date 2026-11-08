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

// Function: entry_0012ba28
// Address: 0x12ba28 - 0x12baa0
void entry_0012ba28_0x12ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ba28_0x12ba28");
#endif

    ctx->pc = 0x12ba28u;

    // 0x12ba28: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x12ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12ba2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ba2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba30: 0xfc560008  sd          $s6, 0x8($v0)
    ctx->pc = 0x12ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 22));
    // 0x12ba34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12ba3c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12ba3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba40: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x12ba40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ba44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba50: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba58: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12ba58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12ba5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba60: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12ba64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba68: 0xe4750000  swc1        $f21, 0x0($v1)
    ctx->pc = 0x12ba68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12ba6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12ba70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba74: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ba74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ba78: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12ba78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ba7c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ba80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ba84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12ba88: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x12ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x12ba8c: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x12ba8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12ba90: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x12ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba94: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x12ba94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ba98: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12ba98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12ba9c: 0xe4b50000  swc1        $f21, 0x0($a1)
    ctx->pc = 0x12ba9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->pc = 0x12baa0u;
}
