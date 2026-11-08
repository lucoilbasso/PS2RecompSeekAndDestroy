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

// Function: entry_00106190
// Address: 0x106190 - 0x1061a4
void entry_00106190_0x106190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106190_0x106190");
#endif

    ctx->pc = 0x106190u;

    // 0x106190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106194: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x106194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106198: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10619c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10619cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1061a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1061a4u;
}
