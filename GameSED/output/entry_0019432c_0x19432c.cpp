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

// Function: entry_0019432c
// Address: 0x19432c - 0x194340
void entry_0019432c_0x19432c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019432c_0x19432c");
#endif

    ctx->pc = 0x19432cu;

    // 0x19432c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194330: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x194334: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x194334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x194338: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x194338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19433c: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x19433cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->pc = 0x194340u;
}
