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

// Function: entry_0015e4e0
// Address: 0x15e4e0 - 0x15e4f0
void entry_0015e4e0_0x15e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4e0_0x15e4e0");
#endif

    ctx->pc = 0x15e4e0u;

    // 0x15e4e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15e4e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15E4E4u;
    {
        const bool branch_taken_0x15e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e4) {
            ctx->pc = 0x15E550u;
            return;
        }
    }
    ctx->pc = 0x15E4ECu;
    // 0x15e4ec: 0x0  nop
    ctx->pc = 0x15e4ecu;
    // NOP
    ctx->pc = 0x15e4f0u;
}
