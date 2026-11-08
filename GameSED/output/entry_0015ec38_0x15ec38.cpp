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

// Function: entry_0015ec38
// Address: 0x15ec38 - 0x15ec48
void entry_0015ec38_0x15ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec38_0x15ec38");
#endif

    ctx->pc = 0x15ec38u;

    // 0x15ec38: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15ec3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EC3Cu;
    {
        const bool branch_taken_0x15ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC3Cu;
        // 0x15ec40: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec3c) {
            ctx->pc = 0x15EC50u;
            return;
        }
    }
    ctx->pc = 0x15EC44u;
    // 0x15ec44: 0x0  nop
    ctx->pc = 0x15ec44u;
    // NOP
    ctx->pc = 0x15ec48u;
}
