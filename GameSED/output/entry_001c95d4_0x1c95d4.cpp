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

// Function: entry_001c95d4
// Address: 0x1c95d4 - 0x1c9608
void entry_001c95d4_0x1c95d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c95d4_0x1c95d4");
#endif

    ctx->pc = 0x1c95d4u;

    // 0x1c95d4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c95d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c95dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c95e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c95e4: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c95e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c95e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c95ec: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c95f0: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C95F0u;
    {
        const bool branch_taken_0x1c95f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95F0u;
        // 0x1c95f4: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95f0) {
            ctx->pc = 0x1C9608u;
            return;
        }
    }
    ctx->pc = 0x1C95F8u;
    // 0x1c95f8: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1c95fc: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c95fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9600: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C9600u;
    {
        const bool branch_taken_0x1c9600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9600u;
        // 0x1c9604: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9600) {
            ctx->pc = 0x1C96D8u;
            return;
        }
    }
    ctx->pc = 0x1C9608u;
}
