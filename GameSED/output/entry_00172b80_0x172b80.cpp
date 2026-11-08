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

// Function: entry_00172b80
// Address: 0x172b80 - 0x172b88
void entry_00172b80_0x172b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172b80_0x172b80");
#endif

    ctx->pc = 0x172b80u;

    // 0x172b80: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172b84: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x172b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172b88u;
}
