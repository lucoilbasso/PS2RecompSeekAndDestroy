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

// Function: entry_0015c634
// Address: 0x15c634 - 0x15c650
void entry_0015c634_0x15c634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c634_0x15c634");
#endif

    ctx->pc = 0x15c634u;

    // 0x15c634: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15c638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c63c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15c640: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x15c640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x15c644: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x15C644u;
    {
        const bool branch_taken_0x15c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C644u;
        // 0x15c648: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c644) {
            ctx->pc = 0x15C774u;
            return;
        }
    }
    ctx->pc = 0x15C64Cu;
    // 0x15c64c: 0x0  nop
    ctx->pc = 0x15c64cu;
    // NOP
    ctx->pc = 0x15c650u;
}
