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

// Function: entry_001290dc
// Address: 0x1290dc - 0x129104
void entry_001290dc_0x1290dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001290dc_0x1290dc");
#endif

    ctx->pc = 0x1290dcu;

    // 0x1290dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1290DCu;
    {
        const bool branch_taken_0x1290dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290dc) {
            ctx->pc = 0x1290E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290DCu;
            // 0x1290e0: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129104u;
            return;
        }
    }
    ctx->pc = 0x1290E4u;
    // 0x1290e4: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x1290e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1290e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1290E8u;
    {
        const bool branch_taken_0x1290e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1290e8) {
            ctx->pc = 0x1290ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290E8u;
            // 0x1290ec: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129104u;
            return;
        }
    }
    ctx->pc = 0x1290F0u;
    // 0x1290f0: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x1290f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x1290f4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1290f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1290fc: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x1290fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x129100: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->pc = 0x129104u;
}
