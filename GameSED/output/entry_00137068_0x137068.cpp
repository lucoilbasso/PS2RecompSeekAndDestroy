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

// Function: entry_00137068
// Address: 0x137068 - 0x137098
void entry_00137068_0x137068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137068_0x137068");
#endif

    ctx->pc = 0x137068u;

    // 0x137068: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x137068u;
    {
        const bool branch_taken_0x137068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137068u;
        // 0x13706c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137068) {
            ctx->pc = 0x1370CCu;
            return;
        }
    }
    ctx->pc = 0x137070u;
    // 0x137070: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x137070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x137074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x137078: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x137078u;
    {
        const bool branch_taken_0x137078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137078u;
        // 0x13707c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137078) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x137080u;
    // 0x137080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x137084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137084u;
    {
        const bool branch_taken_0x137084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137084u;
        // 0x137088: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137084) {
            ctx->pc = 0x137098u;
            return;
        }
    }
    ctx->pc = 0x13708Cu;
    // 0x13708c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13708Cu;
    {
        const bool branch_taken_0x13708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13708Cu;
        // 0x137090: 0x34c60020  ori         $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13708c) {
            ctx->pc = 0x1370CCu;
            return;
        }
    }
    ctx->pc = 0x137094u;
    // 0x137094: 0x0  nop
    ctx->pc = 0x137094u;
    // NOP
    ctx->pc = 0x137098u;
}
