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

// Function: entry_001933c8
// Address: 0x1933c8 - 0x1933d8
void entry_001933c8_0x1933c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933c8_0x1933c8");
#endif

    ctx->pc = 0x1933c8u;

    // 0x1933c8: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x1933c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x1933cc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1933d0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1933d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1933d4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    ctx->pc = 0x1933d8u;
}
