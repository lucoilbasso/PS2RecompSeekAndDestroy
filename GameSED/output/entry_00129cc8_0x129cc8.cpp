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

// Function: entry_00129cc8
// Address: 0x129cc8 - 0x129d50
void entry_00129cc8_0x129cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129cc8_0x129cc8");
#endif

    ctx->pc = 0x129cc8u;

    // 0x129cc8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129ccc: 0x3c02503a  lui         $v0, 0x503A
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20538 << 16));
    // 0x129cd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x129cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129cd8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x129cdc: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x129cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x129ce0: 0x34842c2e  ori         $a0, $a0, 0x2C2E
    ctx->pc = 0x129ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11310);
    // 0x129ce4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129ce8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x129ce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cec: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x129cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x129cf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cf4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129cf8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x129cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d00: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x129d00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x129d04: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x129d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d10: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x129d10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129d14: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d18: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x129d18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x129d1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d20: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x129d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x129d24: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d28: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x129d28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d30: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x129d34: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129d38: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x129d38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x129d3c: 0xe4770008  swc1        $f23, 0x8($v1)
    ctx->pc = 0x129d3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129d40: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129d44: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x129d44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x129d48: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x129d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129d4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x129d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x129d50u;
}
