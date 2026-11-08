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

// Function: entry_00172fc4
// Address: 0x172fc4 - 0x172fc8
void entry_00172fc4_0x172fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172fc4_0x172fc4");
#endif

    ctx->pc = 0x172fc4u;

    // 0x172fc4: 0x7a903  sra         $s5, $a3, 4
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 4));
    ctx->pc = 0x172fc8u;
}
