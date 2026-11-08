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

// Function: entry_00124df4
// Address: 0x124df4 - 0x124e60
void entry_00124df4_0x124df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124df4_0x124df4");
#endif

    ctx->pc = 0x124df4u;

    // 0x124df4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124df8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dfc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e00: 0x3c02403a  lui         $v0, 0x403A
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16442 << 16));
    // 0x124e04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x124e08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124e0c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x124e10: 0x3405c2c2  ori         $a1, $zero, 0xC2C2
    ctx->pc = 0x124e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49858);
    // 0x124e14: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x124e14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x124e18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e1c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x124e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x124e20: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e24: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x124e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x124e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e2c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x124e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x124e30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e34: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x124e34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x124e38: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124e38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e40: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e44: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x124e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124e48: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x124e48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x124e4c: 0xe4950008  swc1        $f21, 0x8($a0)
    ctx->pc = 0x124e4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x124e50: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x124e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x124e54: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x124e54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x124e58: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x124e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124e5c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x124e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x124e60u;
}
