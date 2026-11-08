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

// Function: entry_00118fac
// Address: 0x118fac - 0x118fb0
void entry_00118fac_0x118fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fac_0x118fac");
#endif

    ctx->pc = 0x118facu;

    // 0x118fac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x118fb0u;
}
