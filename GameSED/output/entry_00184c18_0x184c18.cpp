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

// Function: entry_00184c18
// Address: 0x184c18 - 0x184c48
void entry_00184c18_0x184c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c18_0x184c18");
#endif

    ctx->pc = 0x184c18u;

    // 0x184c18: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x184c1c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x184c20: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x184c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x184c24: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x184C24u;
    {
        const bool branch_taken_0x184c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C24u;
        // 0x184c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c24) {
            ctx->pc = 0x184C6Cu;
            return;
        }
    }
    ctx->pc = 0x184C2Cu;
    // 0x184c2c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x184c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184c30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x184c34: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x184C34u;
    {
        const bool branch_taken_0x184c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C34u;
        // 0x184c38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c34) {
            ctx->pc = 0x184C70u;
            return;
        }
    }
    ctx->pc = 0x184C3Cu;
    // 0x184c3c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x184c40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x184c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c44: 0x0  nop
    ctx->pc = 0x184c44u;
    // NOP
    ctx->pc = 0x184c48u;
}
