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

// Function: entry_001c953c
// Address: 0x1c953c - 0x1c9574
void entry_001c953c_0x1c953c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c953c_0x1c953c");
#endif

    ctx->pc = 0x1c953cu;

    // 0x1c953c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9540: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9544: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c954c: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c954cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c9550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9554: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c9554u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9558: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9558u;
        // 0x1c955c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C9574u;
            return;
        }
    }
    ctx->pc = 0x1C9560u;
    // 0x1c9560: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9564: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c9568: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c956c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c9570: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c9570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    ctx->pc = 0x1c9574u;
}
