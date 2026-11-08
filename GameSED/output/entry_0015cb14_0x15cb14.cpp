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

// Function: entry_0015cb14
// Address: 0x15cb14 - 0x15cb20
void entry_0015cb14_0x15cb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb14_0x15cb14");
#endif

    ctx->pc = 0x15cb14u;

    // 0x15cb14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15cb18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15CB18u;
    {
        const bool branch_taken_0x15cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb18) {
            ctx->pc = 0x15CB80u;
            return;
        }
    }
    ctx->pc = 0x15CB20u;
}
