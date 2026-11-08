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

// Function: entry_0015c6b4
// Address: 0x15c6b4 - 0x15c6cc
void entry_0015c6b4_0x15c6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6b4_0x15c6b4");
#endif

    ctx->pc = 0x15c6b4u;

    // 0x15c6b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15c6b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15c6bc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15c6c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c6c4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x15c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x15c6c8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->pc = 0x15c6ccu;
}
