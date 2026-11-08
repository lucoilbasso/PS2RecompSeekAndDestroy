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

// Function: entry_0010e520
// Address: 0x10e520 - 0x10e530
void entry_0010e520_0x10e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e520_0x10e520");
#endif

    ctx->pc = 0x10e520u;

    // 0x10e520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10e524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10e528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10e530u;
}
