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

// Function: entry_00144be0
// Address: 0x144be0 - 0x144c30
void entry_00144be0_0x144be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144be0_0x144be0");
#endif

    ctx->pc = 0x144be0u;

    // 0x144be0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x144be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x144be4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x144be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144be8: 0x26254030  addiu       $a1, $s1, 0x4030
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
    // 0x144bec: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x144becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x144bf0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x144bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x144bf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x144bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x144bf8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x144bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x144bfc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x144bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144c00: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x144c00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x144c04: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x144c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
    // 0x144c08: 0x26254020  addiu       $a1, $s1, 0x4020
    ctx->pc = 0x144c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16416));
    // 0x144c0c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x144c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x144c10: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x144c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x144c14: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x144c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144c18: 0xae244020  sw          $a0, 0x4020($s1)
    ctx->pc = 0x144c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16416), GPR_U32(ctx, 4));
    // 0x144c1c: 0xae22402c  sw          $v0, 0x402C($s1)
    ctx->pc = 0x144c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16428), GPR_U32(ctx, 2));
    // 0x144c20: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x144c24: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x144c28: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x144c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x144c2c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x144c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x144c30u;
}
