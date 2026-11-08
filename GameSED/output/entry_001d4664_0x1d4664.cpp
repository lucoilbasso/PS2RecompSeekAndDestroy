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

// Function: entry_001d4664
// Address: 0x1d4664 - 0x1d469c
void entry_001d4664_0x1d4664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4664_0x1d4664");
#endif

    switch (ctx->pc) {
        case 0x1d4698u: goto label_1d4698;
        default: break;
    }

    ctx->pc = 0x1d4664u;

    // 0x1d4664: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x1d4664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x1d4668: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1d4668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1d466c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1d466cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x1d4670: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1d4674: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1d4674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1d4678: 0xdc83e5c0  ld          $v1, -0x1A40($a0)
    ctx->pc = 0x1d4678u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294960576)));
    // 0x1d467c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d4680: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d4680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d4684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4684u;
    {
        const bool branch_taken_0x1d4684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4684u;
        // 0x1d4688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4684) {
            ctx->pc = 0x1D469Cu;
            return;
        }
    }
    ctx->pc = 0x1D468Cu;
    // 0x1d468c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4690: 0xc075238  jal         func_1D48E0
    ctx->pc = 0x1D4690u;
    SET_GPR_U32(ctx, 31, 0x1D4698u);
    ctx->pc = 0x1D4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4690u;
    // 0x1d4694: 0x8c45e5c8  lw          $a1, -0x1A38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D48E0u, 0x1D4690u, 0x1D4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4698u;
label_1d4698:
    // 0x1d4698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d469cu;
}
