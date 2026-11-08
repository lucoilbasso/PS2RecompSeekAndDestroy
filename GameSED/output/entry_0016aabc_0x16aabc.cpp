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

// Function: entry_0016aabc
// Address: 0x16aabc - 0x16aad8
void entry_0016aabc_0x16aabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aabc_0x16aabc");
#endif

    ctx->pc = 0x16aabcu;

    // 0x16aabc: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16AABCu;
    {
        const bool branch_taken_0x16aabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AABCu;
        // 0x16aac0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aabc) {
            ctx->pc = 0x16AB3Cu;
            return;
        }
    }
    ctx->pc = 0x16AAC4u;
    // 0x16aac4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16aac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16aac8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x16aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x16aacc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16AACCu;
    {
        const bool branch_taken_0x16aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AACCu;
        // 0x16aad0: 0x8cb40014  lw          $s4, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aacc) {
            ctx->pc = 0x16AB38u;
            return;
        }
    }
    ctx->pc = 0x16AAD4u;
    // 0x16aad4: 0x0  nop
    ctx->pc = 0x16aad4u;
    // NOP
    ctx->pc = 0x16aad8u;
}
