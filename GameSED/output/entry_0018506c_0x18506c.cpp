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

// Function: entry_0018506c
// Address: 0x18506c - 0x185070
void entry_0018506c_0x18506c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018506c_0x18506c");
#endif

    ctx->pc = 0x18506cu;

    // 0x18506c: 0x7e1100b0  sq          $s1, 0xB0($s0)
    ctx->pc = 0x18506cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 17));
    ctx->pc = 0x185070u;
}
