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

// Function: entry_0016ffb0
// Address: 0x16ffb0 - 0x16ffbc
void entry_0016ffb0_0x16ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ffb0_0x16ffb0");
#endif

    ctx->pc = 0x16ffb0u;

    // 0x16ffb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16ffb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16ffb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x16ffbcu;
}
