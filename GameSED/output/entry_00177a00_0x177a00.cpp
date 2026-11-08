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

// Function: entry_00177a00
// Address: 0x177a00 - 0x177a10
void entry_00177a00_0x177a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a00_0x177a00");
#endif

    ctx->pc = 0x177a00u;

    // 0x177a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177a0c: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x177a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
    ctx->pc = 0x177a10u;
}
