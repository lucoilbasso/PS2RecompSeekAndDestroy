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

// Function: entry_001c8a8c
// Address: 0x1c8a8c - 0x1c8ac0
void entry_001c8a8c_0x1c8a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a8c_0x1c8a8c");
#endif

    ctx->pc = 0x1c8a8cu;

    // 0x1c8a8c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8a90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8a94: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a9c: 0x9042bce0  lbu         $v0, -0x4320($v0)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950112)));
    // 0x1c8aa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8aa4: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c8aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8aa8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AA8u;
    {
        const bool branch_taken_0x1c8aa8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA8u;
        // 0x1c8aac: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8aa8) {
            ctx->pc = 0x1C8AC0u;
            return;
        }
    }
    ctx->pc = 0x1C8AB0u;
    // 0x1c8ab0: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1c8ab4: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c8ab8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C8AB8u;
    {
        const bool branch_taken_0x1c8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AB8u;
        // 0x1c8abc: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ab8) {
            ctx->pc = 0x1C8B90u;
            return;
        }
    }
    ctx->pc = 0x1C8AC0u;
}
