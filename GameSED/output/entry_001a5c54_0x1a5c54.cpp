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

// Function: entry_001a5c54
// Address: 0x1a5c54 - 0x1a5c90
void entry_001a5c54_0x1a5c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c54_0x1a5c54");
#endif

    ctx->pc = 0x1a5c54u;

    // 0x1a5c54: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a5c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a5c58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5C58u;
    {
        const bool branch_taken_0x1a5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C58u;
        // 0x1a5c5c: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c58) {
            ctx->pc = 0x1A5C90u;
            return;
        }
    }
    ctx->pc = 0x1A5C60u;
    // 0x1a5c60: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a5c64: 0x26c4fb30  addiu       $a0, $s6, -0x4D0
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a5c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5c6c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1a5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a5c70: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5c74: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a5c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5c7c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1a5c80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a5c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a5c84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5C84u;
    {
        const bool branch_taken_0x1a5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C84u;
        // 0x1a5c88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c84) {
            ctx->pc = 0x1A5CD4u;
            return;
        }
    }
    ctx->pc = 0x1A5C8Cu;
    // 0x1a5c8c: 0x0  nop
    ctx->pc = 0x1a5c8cu;
    // NOP
    ctx->pc = 0x1a5c90u;
}
