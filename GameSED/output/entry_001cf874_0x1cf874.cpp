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

// Function: entry_001cf874
// Address: 0x1cf874 - 0x1cf88c
void entry_001cf874_0x1cf874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf874_0x1cf874");
#endif

    ctx->pc = 0x1cf874u;

    // 0x1cf874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf87c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cf87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf888: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cf888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x1cf88cu;
}
