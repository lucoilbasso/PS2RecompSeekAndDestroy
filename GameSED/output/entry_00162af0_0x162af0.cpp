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

// Function: entry_00162af0
// Address: 0x162af0 - 0x162b08
void entry_00162af0_0x162af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162af0_0x162af0");
#endif

    ctx->pc = 0x162af0u;

    // 0x162af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162af4: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x162AF4u;
    {
        const bool branch_taken_0x162af4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x162AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AF4u;
        // 0x162af8: 0xae021a2c  sw          $v0, 0x1A2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162af4) {
            ctx->pc = 0x162B4Cu;
            return;
        }
    }
    ctx->pc = 0x162AFCu;
    // 0x162afc: 0x26110cd0  addiu       $s1, $s0, 0xCD0
    ctx->pc = 0x162afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3280));
    // 0x162b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162b04: 0x0  nop
    ctx->pc = 0x162b04u;
    // NOP
    ctx->pc = 0x162b08u;
}
