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

// Function: entry_001104d8
// Address: 0x1104d8 - 0x1104e4
void entry_001104d8_0x1104d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001104d8_0x1104d8");
#endif

    ctx->pc = 0x1104d8u;

    // 0x1104d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1104dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1104dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1104e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1104e4u;
}
