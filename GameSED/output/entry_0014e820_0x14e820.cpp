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

// Function: entry_0014e820
// Address: 0x14e820 - 0x14e854
void entry_0014e820_0x14e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e820_0x14e820");
#endif

    ctx->pc = 0x14e820u;

    // 0x14e820: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e824: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x14e824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x14e828: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x14e828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x14e82c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14e830: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x14e834: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14e838: 0xa4620016  sh          $v0, 0x16($v1)
    ctx->pc = 0x14e838u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x14e83c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14e840: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14e840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14e844: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14e848: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x14e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x14e84c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x14e850: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x14e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x14e854u;
}
