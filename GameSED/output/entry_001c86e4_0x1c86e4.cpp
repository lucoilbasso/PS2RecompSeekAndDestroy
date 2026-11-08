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

// Function: entry_001c86e4
// Address: 0x1c86e4 - 0x1c8728
void entry_001c86e4_0x1c86e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c86e4_0x1c86e4");
#endif

    ctx->pc = 0x1c86e4u;

    // 0x1c86e4: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1c86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c86e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c86ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c86f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c86f4: 0x9042bbe0  lbu         $v0, -0x4420($v0)
    ctx->pc = 0x1c86f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949856)));
    // 0x1c86f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c86fc: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8700: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8700u;
    {
        const bool branch_taken_0x1c8700 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8700u;
        // 0x1c8704: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8700) {
            ctx->pc = 0x1C8728u;
            return;
        }
    }
    ctx->pc = 0x1C8708u;
    // 0x1c8708: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1c8708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c870c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C870Cu;
    {
        const bool branch_taken_0x1c870c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C870Cu;
        // 0x1c8710: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c870c) {
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C8714u;
    // 0x1c8714: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1c8714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8718: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C8718u;
    {
        const bool branch_taken_0x1c8718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8718u;
        // 0x1c871c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8718) {
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C8720u;
    // 0x1c8720: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C8720u;
    {
        const bool branch_taken_0x1c8720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8720u;
        // 0x1c8724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8720) {
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C8728u;
}
