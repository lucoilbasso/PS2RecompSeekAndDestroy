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

// Function: entry_0019542c
// Address: 0x19542c - 0x195440
void entry_0019542c_0x19542c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019542c_0x19542c");
#endif

    ctx->pc = 0x19542cu;

    // 0x19542c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x195430: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195434: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x195434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x195438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x195438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19543c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x19543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x195440u;
}
