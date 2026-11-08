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

// Function: entry_0015cd68
// Address: 0x15cd68 - 0x15cd78
void entry_0015cd68_0x15cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd68_0x15cd68");
#endif

    ctx->pc = 0x15cd68u;

    // 0x15cd68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15cd6c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15cd70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15cd74: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x15cd78u;
}
