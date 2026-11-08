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

// Function: entry_0018acf4
// Address: 0x18acf4 - 0x18ad08
void entry_0018acf4_0x18acf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acf4_0x18acf4");
#endif

    ctx->pc = 0x18acf4u;

    // 0x18acf4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18acf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acf8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18acfc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18acfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad00: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18ad00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18ad04: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x18ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x18ad08u;
}
