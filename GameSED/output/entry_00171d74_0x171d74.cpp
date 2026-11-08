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

// Function: entry_00171d74
// Address: 0x171d74 - 0x171d8c
void entry_00171d74_0x171d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d74_0x171d74");
#endif

    ctx->pc = 0x171d74u;

    // 0x171d74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171d78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x171d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x171d7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x171d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x171d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x171d84: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x171d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x171d8cu;
}
