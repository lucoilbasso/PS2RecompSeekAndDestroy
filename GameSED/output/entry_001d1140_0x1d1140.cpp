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

// Function: entry_001d1140
// Address: 0x1d1140 - 0x1d114c
void entry_001d1140_0x1d1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1140_0x1d1140");
#endif

    ctx->pc = 0x1d1140u;

    // 0x1d1140: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d1140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1144: 0x80743ba  j           func_1D0EE8
    ctx->pc = 0x1D1144u;
    ctx->pc = 0x1D1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1144u;
    // 0x1d1148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EE8u;
    _strtol_r_0x1d0ee8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D114Cu;
}
