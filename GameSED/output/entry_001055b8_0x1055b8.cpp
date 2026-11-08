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

// Function: entry_001055b8
// Address: 0x1055b8 - 0x1055c8
void entry_001055b8_0x1055b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055b8_0x1055b8");
#endif

    ctx->pc = 0x1055b8u;

    // 0x1055b8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1055b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1055bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1055bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1055c4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1055c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->pc = 0x1055c8u;
}
