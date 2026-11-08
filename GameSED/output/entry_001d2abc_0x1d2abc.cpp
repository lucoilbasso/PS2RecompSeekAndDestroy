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

// Function: entry_001d2abc
// Address: 0x1d2abc - 0x1d2ac0
void entry_001d2abc_0x1d2abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2abc_0x1d2abc");
#endif

    ctx->pc = 0x1d2abcu;

    // 0x1d2abc: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->pc = 0x1d2ac0u;
}
