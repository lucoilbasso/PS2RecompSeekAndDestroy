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

// Function: entry_0017ae84
// Address: 0x17ae84 - 0x17ae94
void entry_0017ae84_0x17ae84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae84_0x17ae84");
#endif

    ctx->pc = 0x17ae84u;

    // 0x17ae84: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ae88: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x17ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x17ae8c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x17ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x17ae90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ae94u;
}
