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

// Function: entry_0017ecec
// Address: 0x17ecec - 0x17ecfc
void entry_0017ecec_0x17ecec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ecec_0x17ecec");
#endif

    ctx->pc = 0x17ececu;

    // 0x17ecec: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x17ecf0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17ECF0u;
    {
        const bool branch_taken_0x17ecf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECF0u;
        // 0x17ecf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecf0) {
            ctx->pc = 0x17ECFCu;
            return;
        }
    }
    ctx->pc = 0x17ECF8u;
    // 0x17ecf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x17ecfcu;
}
