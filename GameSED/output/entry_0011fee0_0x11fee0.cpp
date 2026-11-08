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

// Function: entry_0011fee0
// Address: 0x11fee0 - 0x11ff30
void entry_0011fee0_0x11fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fee0_0x11fee0");
#endif

    ctx->pc = 0x11fee0u;

    // 0x11fee0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11fee4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x11fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x11fee8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x11feec: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x11feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x11fef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11fef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fefc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11fefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ff00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11ff00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ff04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x11ff04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11ff08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11ff0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x11ff0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ff10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x11ff10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x11ff14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x11ff14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ff18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x11ff18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x11ff1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ff1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff20: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x11ff20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x11ff24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ff24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff28: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x11ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ff2c: 0x0  nop
    ctx->pc = 0x11ff2cu;
    // NOP
    ctx->pc = 0x11ff30u;
}
