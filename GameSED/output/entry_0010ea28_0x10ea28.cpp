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

// Function: entry_0010ea28
// Address: 0x10ea28 - 0x10ea34
void entry_0010ea28_0x10ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea28_0x10ea28");
#endif

    ctx->pc = 0x10ea28u;

    // 0x10ea28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ea2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x10ea34u;
}
