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

// Function: entry_0018ea94
// Address: 0x18ea94 - 0x18eaa0
void entry_0018ea94_0x18ea94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea94_0x18ea94");
#endif

    ctx->pc = 0x18ea94u;

    // 0x18ea94: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18ea98: 0xa4a30246  sh          $v1, 0x246($a1)
    ctx->pc = 0x18ea98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 582), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ea9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    ctx->pc = 0x18eaa0u;
}
