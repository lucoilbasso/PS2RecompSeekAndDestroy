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

// Function: entry_0017c000
// Address: 0x17c000 - 0x17c018
void entry_0017c000_0x17c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c000_0x17c000");
#endif

    ctx->pc = 0x17c000u;

    // 0x17c000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c00c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c010: 0x24830250  addiu       $v1, $a0, 0x250
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c014: 0x0  nop
    ctx->pc = 0x17c014u;
    // NOP
    ctx->pc = 0x17c018u;
}
