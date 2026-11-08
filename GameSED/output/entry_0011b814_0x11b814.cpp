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

// Function: entry_0011b814
// Address: 0x11b814 - 0x11b824
void entry_0011b814_0x11b814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b814_0x11b814");
#endif

    ctx->pc = 0x11b814u;

    // 0x11b814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b818: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x11b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x11b81c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11b81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11b820: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x11b820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x11b824u;
}
