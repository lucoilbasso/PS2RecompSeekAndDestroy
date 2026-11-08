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

// Function: entry_0011ba84
// Address: 0x11ba84 - 0x11ba8c
void entry_0011ba84_0x11ba84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba84_0x11ba84");
#endif

    ctx->pc = 0x11ba84u;

    // 0x11ba84: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x11ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x11ba88: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11ba88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x11ba8cu;
}
