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

// Function: entry_0010bfe8
// Address: 0x10bfe8 - 0x10bff0
void entry_0010bfe8_0x10bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bfe8_0x10bfe8");
#endif

    ctx->pc = 0x10bfe8u;

    // 0x10bfe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10bfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x10bff0u;
}
