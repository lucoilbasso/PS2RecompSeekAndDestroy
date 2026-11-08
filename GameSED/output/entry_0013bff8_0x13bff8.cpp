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

// Function: entry_0013bff8
// Address: 0x13bff8 - 0x13c004
void entry_0013bff8_0x13bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bff8_0x13bff8");
#endif

    ctx->pc = 0x13bff8u;

    // 0x13bff8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13bffc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x13c004u;
}
