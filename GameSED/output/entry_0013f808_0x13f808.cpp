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

// Function: entry_0013f808
// Address: 0x13f808 - 0x13f828
void entry_0013f808_0x13f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f808_0x13f808");
#endif

    ctx->pc = 0x13f808u;

    // 0x13f808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f80c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F80Cu;
    {
        const bool branch_taken_0x13f80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F80Cu;
        // 0x13f810: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f80c) {
            ctx->pc = 0x13F828u;
            return;
        }
    }
    ctx->pc = 0x13F814u;
    // 0x13f814: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f818: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13f81c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F81Cu;
    {
        const bool branch_taken_0x13f81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f81c) {
            ctx->pc = 0x13F820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F81Cu;
            // 0x13f820: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F828u;
            return;
        }
    }
    ctx->pc = 0x13F824u;
    // 0x13f824: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13f824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13f828u;
}
