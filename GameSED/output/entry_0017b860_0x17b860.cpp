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

// Function: entry_0017b860
// Address: 0x17b860 - 0x17b878
void entry_0017b860_0x17b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b860_0x17b860");
#endif

    ctx->pc = 0x17b860u;

    // 0x17b860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b86c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b870: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x17b874: 0x0  nop
    ctx->pc = 0x17b874u;
    // NOP
    ctx->pc = 0x17b878u;
}
