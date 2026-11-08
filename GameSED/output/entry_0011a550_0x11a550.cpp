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

// Function: entry_0011a550
// Address: 0x11a550 - 0x11a558
void entry_0011a550_0x11a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a550_0x11a550");
#endif

    ctx->pc = 0x11a550u;

    // 0x11a550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11a554: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x11a554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    ctx->pc = 0x11a558u;
}
