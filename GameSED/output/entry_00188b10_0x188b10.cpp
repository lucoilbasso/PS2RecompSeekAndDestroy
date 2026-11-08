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

// Function: entry_00188b10
// Address: 0x188b10 - 0x188b14
void entry_00188b10_0x188b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b10_0x188b10");
#endif

    ctx->pc = 0x188b10u;

    // 0x188b10: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x188b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    ctx->pc = 0x188b14u;
}
