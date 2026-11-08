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

// Function: entry_001c84b4
// Address: 0x1c84b4 - 0x1c84f0
void entry_001c84b4_0x1c84b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c84b4_0x1c84b4");
#endif

    ctx->pc = 0x1c84b4u;

    // 0x1c84b4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c84b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c84bc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c84c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c84c4: 0x9042bbe0  lbu         $v0, -0x4420($v0)
    ctx->pc = 0x1c84c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949856)));
    // 0x1c84c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c84cc: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c84d0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C84D0u;
    {
        const bool branch_taken_0x1c84d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84D0u;
        // 0x1c84d4: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84d0) {
            ctx->pc = 0x1C84F0u;
            return;
        }
    }
    ctx->pc = 0x1C84D8u;
    // 0x1c84d8: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c84dc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c84e0: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1c84e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c84e4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C84E4u;
    {
        const bool branch_taken_0x1c84e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84E4u;
        // 0x1c84e8: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84e4) {
            ctx->pc = 0x1C85D8u;
            return;
        }
    }
    ctx->pc = 0x1C84ECu;
    // 0x1c84ec: 0x0  nop
    ctx->pc = 0x1c84ecu;
    // NOP
    ctx->pc = 0x1c84f0u;
}
