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

// Function: entry_001d1380
// Address: 0x1d1380 - 0x1d1398
void entry_001d1380_0x1d1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1380_0x1d1380");
#endif

    ctx->pc = 0x1d1380u;

    // 0x1d1380: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1d1380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1d1384: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1d1384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1d1388: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d138c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d1390: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x1d1390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x1d1394: 0x0  nop
    ctx->pc = 0x1d1394u;
    // NOP
    ctx->pc = 0x1d1398u;
}
