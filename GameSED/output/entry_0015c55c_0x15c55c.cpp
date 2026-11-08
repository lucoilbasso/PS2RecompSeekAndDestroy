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

// Function: entry_0015c55c
// Address: 0x15c55c - 0x15c570
void entry_0015c55c_0x15c55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c55c_0x15c55c");
#endif

    ctx->pc = 0x15c55cu;

    // 0x15c55c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15c560: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15c564: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c568: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15c568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15c56c: 0x96e20016  lhu         $v0, 0x16($s7)
    ctx->pc = 0x15c56cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
    ctx->pc = 0x15c570u;
}
