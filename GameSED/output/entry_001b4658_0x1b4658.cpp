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

// Function: entry_001b4658
// Address: 0x1b4658 - 0x1b4664
void entry_001b4658_0x1b4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4658_0x1b4658");
#endif

    ctx->pc = 0x1b4658u;

    // 0x1b4658: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1b4658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b465c: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b465cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4660: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b4664u;
}
