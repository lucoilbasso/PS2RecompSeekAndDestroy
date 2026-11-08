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

// Function: entry_0015bc7c
// Address: 0x15bc7c - 0x15bc88
void entry_0015bc7c_0x15bc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc7c_0x15bc7c");
#endif

    ctx->pc = 0x15bc7cu;

    // 0x15bc7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15bc80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15BC80u;
    {
        const bool branch_taken_0x15bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC80u;
        // 0x15bc84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc80) {
            ctx->pc = 0x15BCE8u;
            return;
        }
    }
    ctx->pc = 0x15BC88u;
}
