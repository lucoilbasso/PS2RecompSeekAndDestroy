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

// Function: entry_0017da28
// Address: 0x17da28 - 0x17da60
void entry_0017da28_0x17da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017da28_0x17da28");
#endif

    ctx->pc = 0x17da28u;

    // 0x17da28: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x17da2c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17da30: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x17da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17da34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17da38: 0xad630020  sw          $v1, 0x20($t3)
    ctx->pc = 0x17da38u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 3));
    // 0x17da3c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x17da40: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x17da40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da44: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x17da44u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da48: 0xa5710002  sh          $s1, 0x2($t3)
    ctx->pc = 0x17da48u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x17da4c: 0xa5600004  sh          $zero, 0x4($t3)
    ctx->pc = 0x17da4cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da50: 0xa5600018  sh          $zero, 0x18($t3)
    ctx->pc = 0x17da50u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da54: 0xa560001a  sh          $zero, 0x1A($t3)
    ctx->pc = 0x17da54u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da58: 0xa5600028  sh          $zero, 0x28($t3)
    ctx->pc = 0x17da58u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da5c: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x17da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x17da60u;
}
