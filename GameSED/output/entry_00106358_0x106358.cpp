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

// Function: entry_00106358
// Address: 0x106358 - 0x10636c
void entry_00106358_0x106358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106358_0x106358");
#endif

    ctx->pc = 0x106358u;

    // 0x106358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10635c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106364: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10636cu;
}
