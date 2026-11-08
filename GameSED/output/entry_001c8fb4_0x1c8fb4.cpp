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

// Function: entry_001c8fb4
// Address: 0x1c8fb4 - 0x1c8fec
void entry_001c8fb4_0x1c8fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8fb4_0x1c8fb4");
#endif

    ctx->pc = 0x1c8fb4u;

    // 0x1c8fb4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8fb8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8fbc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8fc4: 0x9042bde0  lbu         $v0, -0x4220($v0)
    ctx->pc = 0x1c8fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1c8fc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8fcc: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c8fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8fd0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8FD0u;
    {
        const bool branch_taken_0x1c8fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FD0u;
        // 0x1c8fd4: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8fd0) {
            ctx->pc = 0x1C8FECu;
            return;
        }
    }
    ctx->pc = 0x1C8FD8u;
    // 0x1c8fd8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8fdc: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c8fe0: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8fe4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8fe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8fe8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c8fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x1c8fecu;
}
