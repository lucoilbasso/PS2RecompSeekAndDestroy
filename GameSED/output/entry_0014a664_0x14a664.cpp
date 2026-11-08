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

// Function: entry_0014a664
// Address: 0x14a664 - 0x14a6b0
void entry_0014a664_0x14a664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a664_0x14a664");
#endif

    switch (ctx->pc) {
        case 0x14a698u: goto label_14a698;
        default: break;
    }

    ctx->pc = 0x14a664u;

    // 0x14a664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a668: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14a668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a66c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14a670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a674: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14a678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a67c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x14a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x14a680: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14a684: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x14a688: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x14a688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x14a68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a690: 0xc05250a  jal         func_149428
    ctx->pc = 0x14A690u;
    SET_GPR_U32(ctx, 31, 0x14A698u);
    ctx->pc = 0x14A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A690u;
    // 0x14a694: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x14A690u, 0x14A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A698u;
label_14a698:
    // 0x14a698: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a69c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A69Cu;
    {
        const bool branch_taken_0x14a69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A69Cu;
        // 0x14a6a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a69c) {
            ctx->pc = 0x14A6BCu;
            return;
        }
    }
    ctx->pc = 0x14A6A4u;
    // 0x14a6a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x14a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a6a8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6A8u;
    {
        const bool branch_taken_0x14a6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a6a8) {
            ctx->pc = 0x14A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6A8u;
            // 0x14a6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6C0u;
            return;
        }
    }
    ctx->pc = 0x14A6B0u;
}
