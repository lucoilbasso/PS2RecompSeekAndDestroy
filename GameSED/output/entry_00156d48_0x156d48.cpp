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

// Function: entry_00156d48
// Address: 0x156d48 - 0x156d84
void entry_00156d48_0x156d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d48_0x156d48");
#endif

    ctx->pc = 0x156d48u;

    // 0x156d48: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x156d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x156d4c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156d50: 0x244735e0  addiu       $a3, $v0, 0x35E0
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156d54: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2635ECu));
    // 0x156d58: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156d60: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x156d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d68: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x156d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x156d6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x156D6Cu;
    {
        const bool branch_taken_0x156d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d6c) {
            ctx->pc = 0x156DE8u;
            return;
        }
    }
    ctx->pc = 0x156D74u;
    // 0x156d74: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x156d74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156d78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x156d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x156d7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156D7Cu;
    {
        const bool branch_taken_0x156d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D7Cu;
        // 0x156d80: 0x2c4500fa  sltiu       $a1, $v0, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d7c) {
            ctx->pc = 0x156DA8u;
            return;
        }
    }
    ctx->pc = 0x156D84u;
}
