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

// Function: entry_0015cfa4
// Address: 0x15cfa4 - 0x15cfb0
void entry_0015cfa4_0x15cfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfa4_0x15cfa4");
#endif

    ctx->pc = 0x15cfa4u;

    // 0x15cfa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15cfa8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15cfa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cfac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    ctx->pc = 0x15cfb0u;
}
