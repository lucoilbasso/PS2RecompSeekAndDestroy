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

// Function: entry_0010b570
// Address: 0x10b570 - 0x10b57c
void entry_0010b570_0x10b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b570_0x10b570");
#endif

    ctx->pc = 0x10b570u;

    // 0x10b570: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10b574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b578: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    ctx->pc = 0x10b57cu;
}
