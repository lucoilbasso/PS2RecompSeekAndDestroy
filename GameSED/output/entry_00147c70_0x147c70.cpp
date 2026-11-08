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

// Function: entry_00147c70
// Address: 0x147c70 - 0x147c90
void entry_00147c70_0x147c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c70_0x147c70");
#endif

    ctx->pc = 0x147c70u;

    // 0x147c70: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x147c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147c74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x147c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x147c78: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x147c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x147c7c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x147c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x147c80: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x147c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147c84: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x147C84u;
    {
        const bool branch_taken_0x147c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C84u;
        // 0x147c88: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c84) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147C8Cu;
    // 0x147c8c: 0x0  nop
    ctx->pc = 0x147c8cu;
    // NOP
    ctx->pc = 0x147c90u;
}
