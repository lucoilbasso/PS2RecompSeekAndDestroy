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

// Function: entry_001d2d14
// Address: 0x1d2d14 - 0x1d2d30
void entry_001d2d14_0x1d2d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d14_0x1d2d14");
#endif

    ctx->pc = 0x1d2d14u;

    // 0x1d2d14: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x1d2d18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d2d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d2d1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d2d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d2d20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d2d24: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d2d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d2c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1d2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1d2d30u;
}
