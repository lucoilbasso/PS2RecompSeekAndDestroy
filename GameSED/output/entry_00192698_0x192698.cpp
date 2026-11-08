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

// Function: entry_00192698
// Address: 0x192698 - 0x1926a0
void entry_00192698_0x192698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192698_0x192698");
#endif

    ctx->pc = 0x192698u;

    // 0x192698: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x192698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19269c: 0x0  nop
    ctx->pc = 0x19269cu;
    // NOP
    ctx->pc = 0x1926a0u;
}
