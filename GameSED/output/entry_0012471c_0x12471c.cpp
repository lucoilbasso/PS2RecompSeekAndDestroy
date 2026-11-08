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

// Function: entry_0012471c
// Address: 0x12471c - 0x12472c
void entry_0012471c_0x12471c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012471c_0x12471c");
#endif

    ctx->pc = 0x12471cu;

    // 0x12471c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124720: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x124720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124724: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x124728: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x12472cu;
}
