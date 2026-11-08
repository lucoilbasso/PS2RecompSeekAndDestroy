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

// Function: entry_0019bda8
// Address: 0x19bda8 - 0x19bdac
void entry_0019bda8_0x19bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bda8_0x19bda8");
#endif

    ctx->pc = 0x19bda8u;

    // 0x19bda8: 0x30837fff  andi        $v1, $a0, 0x7FFF
    ctx->pc = 0x19bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    ctx->pc = 0x19bdacu;
}
