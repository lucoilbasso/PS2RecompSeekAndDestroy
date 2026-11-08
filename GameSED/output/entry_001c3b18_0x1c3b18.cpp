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

// Function: entry_001c3b18
// Address: 0x1c3b18 - 0x1c3b48
void entry_001c3b18_0x1c3b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3b18_0x1c3b18");
#endif

    ctx->pc = 0x1c3b18u;

    // 0x1c3b18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3b1c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1c3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1c3b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b24: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1c3b28: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3b2c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1c3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1c3b30: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3b34: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c3b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1c3b38: 0x4012  mflo        $t0
    ctx->pc = 0x1c3b38u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c3b3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c3b40: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1c3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1c3b44: 0x0  nop
    ctx->pc = 0x1c3b44u;
    // NOP
    ctx->pc = 0x1c3b48u;
}
