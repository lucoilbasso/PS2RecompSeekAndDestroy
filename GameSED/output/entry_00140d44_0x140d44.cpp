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

// Function: entry_00140d44
// Address: 0x140d44 - 0x140d4c
void entry_00140d44_0x140d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d44_0x140d44");
#endif

    ctx->pc = 0x140d44u;

    // 0x140d44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x140d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x140d48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x140d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x140d4cu;
}
