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

// Function: entry_00118fb4
// Address: 0x118fb4 - 0x118fb8
void entry_00118fb4_0x118fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fb4_0x118fb4");
#endif

    ctx->pc = 0x118fb4u;

    // 0x118fb4: 0x2884002a  slti        $a0, $a0, 0x2A
    ctx->pc = 0x118fb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)42) ? 1 : 0);
    ctx->pc = 0x118fb8u;
}
