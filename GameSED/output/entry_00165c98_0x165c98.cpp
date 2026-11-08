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

// Function: entry_00165c98
// Address: 0x165c98 - 0x165cc0
void entry_00165c98_0x165c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165c98_0x165c98");
#endif

    ctx->pc = 0x165c98u;

    // 0x165c98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165C98u;
    {
        const bool branch_taken_0x165c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C98u;
        // 0x165c9c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c98) {
            ctx->pc = 0x165CC0u;
            return;
        }
    }
    ctx->pc = 0x165CA0u;
    // 0x165ca0: 0x86040264  lh          $a0, 0x264($s0)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x165ca4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x165ca8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x165cac: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x165CACu;
    {
        const bool branch_taken_0x165cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x165CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CACu;
        // 0x165cb0: 0xac501234  sw          $s0, 0x1234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cac) {
            ctx->pc = 0x165DBCu;
            return;
        }
    }
    ctx->pc = 0x165CB4u;
    // 0x165cb4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x165cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x165cb8: 0x50820041  beql        $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x165CB8u;
    {
        const bool branch_taken_0x165cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x165cb8) {
            ctx->pc = 0x165CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CB8u;
            // 0x165cbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC0u;
            return;
        }
    }
    ctx->pc = 0x165CC0u;
}
