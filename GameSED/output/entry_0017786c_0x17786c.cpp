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

// Function: entry_0017786c
// Address: 0x17786c - 0x177890
void entry_0017786c_0x17786c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017786c_0x17786c");
#endif

    ctx->pc = 0x17786cu;

    // 0x17786c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x17786cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x177870: 0xa1020010  sb          $v0, 0x10($t0)
    ctx->pc = 0x177870u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x177874: 0x90e30039  lbu         $v1, 0x39($a3)
    ctx->pc = 0x177874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 57)));
    // 0x177878: 0xa1030011  sb          $v1, 0x11($t0)
    ctx->pc = 0x177878u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x17787c: 0x90e2003a  lbu         $v0, 0x3A($a3)
    ctx->pc = 0x17787cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 58)));
    // 0x177880: 0xa1020012  sb          $v0, 0x12($t0)
    ctx->pc = 0x177880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x177884: 0x90e3003b  lbu         $v1, 0x3B($a3)
    ctx->pc = 0x177884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 59)));
    // 0x177888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177888u;
    {
        const bool branch_taken_0x177888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177888u;
        // 0x17788c: 0xa1030013  sb          $v1, 0x13($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177888) {
            ctx->pc = 0x1778A4u;
            return;
        }
    }
    ctx->pc = 0x177890u;
}
