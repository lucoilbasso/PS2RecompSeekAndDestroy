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

// Function: entry_00160050
// Address: 0x160050 - 0x16007c
void entry_00160050_0x160050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160050_0x160050");
#endif

    ctx->pc = 0x160050u;

    // 0x160050: 0x70121068  pabsw       $v0, $s2
    ctx->pc = 0x160050u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x160054: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x160058: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x16005c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x16005Cu;
    {
        const bool branch_taken_0x16005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16005Cu;
        // 0x160060: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16005c) {
            ctx->pc = 0x160260u;
            return;
        }
    }
    ctx->pc = 0x160064u;
    // 0x160064: 0x70101068  pabsw       $v0, $s0
    ctx->pc = 0x160064u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x160068: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x16006c: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x160070: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x160070u;
    {
        const bool branch_taken_0x160070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160070u;
        // 0x160074: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160070) {
            ctx->pc = 0x160260u;
            return;
        }
    }
    ctx->pc = 0x160078u;
    // 0x160078: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x16007cu;
}
