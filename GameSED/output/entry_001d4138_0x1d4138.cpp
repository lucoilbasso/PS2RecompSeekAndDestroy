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

// Function: entry_001d4138
// Address: 0x1d4138 - 0x1d4158
void entry_001d4138_0x1d4138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4138_0x1d4138");
#endif

    ctx->pc = 0x1d4138u;

    // 0x1d4138: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d413c: 0x0  nop
    ctx->pc = 0x1d413cu;
    // NOP
    // 0x1d4140: 0x0  nop
    ctx->pc = 0x1d4140u;
    // NOP
    // 0x1d4144: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D4144u;
    {
        const bool branch_taken_0x1d4144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4144u;
        // 0x1d4148: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4144) {
            ctx->pc = 0x1D4128u;
            return;
        }
    }
    ctx->pc = 0x1D414Cu;
    // 0x1d414c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4150: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4150u;
    {
        const bool branch_taken_0x1d4150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4150u;
        // 0x1d4154: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4150) {
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D4158u;
}
