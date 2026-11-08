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

// Function: entry_00112a30
// Address: 0x112a30 - 0x112a48
void entry_00112a30_0x112a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a30_0x112a30");
#endif

    ctx->pc = 0x112a30u;

    // 0x112a30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112a34: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x112a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112a38: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A38u;
    {
        const bool branch_taken_0x112a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a38) {
            ctx->pc = 0x112A48u;
            return;
        }
    }
    ctx->pc = 0x112A40u;
    // 0x112a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112A40u;
    {
        const bool branch_taken_0x112a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A40u;
        // 0x112a44: 0x8cb00260  lw          $s0, 0x260($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a40) {
            ctx->pc = 0x112A50u;
            return;
        }
    }
    ctx->pc = 0x112A48u;
}
