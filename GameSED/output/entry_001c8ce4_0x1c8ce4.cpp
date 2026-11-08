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

// Function: entry_001c8ce4
// Address: 0x1c8ce4 - 0x1c8d20
void entry_001c8ce4_0x1c8ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ce4_0x1c8ce4");
#endif

    ctx->pc = 0x1c8ce4u;

    // 0x1c8ce4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8ce8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8cec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8cf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8cf4: 0x9042bce0  lbu         $v0, -0x4320($v0)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950112)));
    // 0x1c8cf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8cfc: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c8cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8d00: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C8D00u;
    {
        const bool branch_taken_0x1c8d00 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D00u;
        // 0x1c8d04: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d00) {
            ctx->pc = 0x1C8D68u;
            return;
        }
    }
    ctx->pc = 0x1C8D08u;
    // 0x1c8d08: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1c8d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c8d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8D0Cu;
    {
        const bool branch_taken_0x1c8d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D0Cu;
        // 0x1c8d10: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d0c) {
            ctx->pc = 0x1C8D20u;
            return;
        }
    }
    ctx->pc = 0x1C8D14u;
    // 0x1c8d14: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1c8d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8d18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8D18u;
    {
        const bool branch_taken_0x1c8d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D18u;
        // 0x1c8d1c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d18) {
            ctx->pc = 0x1C8D30u;
            return;
        }
    }
    ctx->pc = 0x1C8D20u;
}
