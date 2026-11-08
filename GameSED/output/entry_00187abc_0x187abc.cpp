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

// Function: entry_00187abc
// Address: 0x187abc - 0x187ac0
void entry_00187abc_0x187abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187abc_0x187abc");
#endif

    ctx->pc = 0x187abcu;

    // 0x187abc: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x187abcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x187ac0u;
}
