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

// Function: entry_001a5354
// Address: 0x1a5354 - 0x1a5364
void entry_001a5354_0x1a5354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5354_0x1a5354");
#endif

    ctx->pc = 0x1a5354u;

    // 0x1a5354: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5358: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a535c: 0x24c62b00  addiu       $a2, $a2, 0x2B00
    ctx->pc = 0x1a535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11008));
    // 0x1a5360: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1a5360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1a5364u;
}
