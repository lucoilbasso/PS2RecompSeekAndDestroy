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

// Function: entry_001187ac
// Address: 0x1187ac - 0x1187b0
void entry_001187ac_0x1187ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187ac_0x1187ac");
#endif

    ctx->pc = 0x1187acu;

    // 0x1187ac: 0x2ca20011  sltiu       $v0, $a1, 0x11
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    ctx->pc = 0x1187b0u;
}
