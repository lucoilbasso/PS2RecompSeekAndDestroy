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

// Function: entry_0018a76c
// Address: 0x18a76c - 0x18a790
void entry_0018a76c_0x18a76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a76c_0x18a76c");
#endif

    ctx->pc = 0x18a76cu;

    // 0x18a76c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18a770: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A770u;
    {
        const bool branch_taken_0x18a770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a770) {
            ctx->pc = 0x18A774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A770u;
            // 0x18a774: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A790u;
            return;
        }
    }
    ctx->pc = 0x18A778u;
    // 0x18a778: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x18a77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a784: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a788: 0xa2030157  sb          $v1, 0x157($s0)
    ctx->pc = 0x18a788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 343), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a78c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x18a78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->pc = 0x18a790u;
}
