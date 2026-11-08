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

// Function: entry_0014ccd4
// Address: 0x14ccd4 - 0x14ccf4
void entry_0014ccd4_0x14ccd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ccd4_0x14ccd4");
#endif

    ctx->pc = 0x14ccd4u;

    // 0x14ccd4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14ccd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ccdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cce0: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x14cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x14cce4: 0x920301ab  lbu         $v1, 0x1AB($s0)
    ctx->pc = 0x14cce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14cce8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14cce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ccec: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14CCECu;
    {
        const bool branch_taken_0x14ccec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ccec) {
            ctx->pc = 0x14CCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCECu;
            // 0x14ccf0: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CC90u;
            return;
        }
    }
    ctx->pc = 0x14CCF4u;
}
