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

// Function: entry_0014ced4
// Address: 0x14ced4 - 0x14cf14
void entry_0014ced4_0x14ced4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ced4_0x14ced4");
#endif

    ctx->pc = 0x14ced4u;

    // 0x14ced4: 0xace001f8  sw          $zero, 0x1F8($a3)
    ctx->pc = 0x14ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 0));
    // 0x14ced8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14cedc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x14cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14cee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14cee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14cee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ceec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x14ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x14cef0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14cef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14cef4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14cef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14cef8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14cef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14cefc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14cf00: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14cf00u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14cf04: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14cf04u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14cf08: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14cf08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14cf0c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x14cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x14cf10: 0x24e6020c  addiu       $a2, $a3, 0x20C
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 524));
    ctx->pc = 0x14cf14u;
}
