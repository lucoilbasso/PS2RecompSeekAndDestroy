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

// Function: entry_0017ab18
// Address: 0x17ab18 - 0x17ab38
void entry_0017ab18_0x17ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab18_0x17ab18");
#endif

    ctx->pc = 0x17ab18u;

    // 0x17ab18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ab1c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x17ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17ab20: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ab24: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17ab28: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17ab2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17ab30: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x17ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17ab34: 0xac31c04c  sw          $s1, -0x3FB4($at)
    ctx->pc = 0x17ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950988), GPR_U32(ctx, 17));
    ctx->pc = 0x17ab38u;
}
