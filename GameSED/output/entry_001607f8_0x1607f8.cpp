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

// Function: entry_001607f8
// Address: 0x1607f8 - 0x160808
void entry_001607f8_0x1607f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001607f8_0x1607f8");
#endif

    ctx->pc = 0x1607f8u;

    // 0x1607f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1607f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1607fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1607FCu;
    {
        const bool branch_taken_0x1607fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607FCu;
        // 0x160800: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607fc) {
            ctx->pc = 0x160868u;
            return;
        }
    }
    ctx->pc = 0x160804u;
    // 0x160804: 0x0  nop
    ctx->pc = 0x160804u;
    // NOP
    ctx->pc = 0x160808u;
}
