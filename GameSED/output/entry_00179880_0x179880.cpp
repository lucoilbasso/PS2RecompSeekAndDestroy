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

// Function: entry_00179880
// Address: 0x179880 - 0x179884
void entry_00179880_0x179880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179880_0x179880");
#endif

    ctx->pc = 0x179880u;

    // 0x179880: 0xac8545c0  sw          $a1, 0x45C0($a0)
    ctx->pc = 0x179880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17856), GPR_U32(ctx, 5));
    ctx->pc = 0x179884u;
}
