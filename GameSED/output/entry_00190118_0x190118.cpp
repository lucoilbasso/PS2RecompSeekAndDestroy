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

// Function: entry_00190118
// Address: 0x190118 - 0x190160
void entry_00190118_0x190118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190118_0x190118");
#endif

    switch (ctx->pc) {
        case 0x190128u: goto label_190128;
        case 0x190150u: goto label_190150;
        case 0x190158u: goto label_190158;
        default: break;
    }

    ctx->pc = 0x190118u;

    // 0x190118: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190118u;
    {
        const bool branch_taken_0x190118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190118u;
        // 0x19011c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190118) {
            ctx->pc = 0x190160u;
            return;
        }
    }
    ctx->pc = 0x190120u;
    // 0x190120: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190120u;
    SET_GPR_U32(ctx, 31, 0x190128u);
    ctx->pc = 0x190124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190120u;
    // 0x190124: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190120u, 0x190128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190128u;
label_190128:
    // 0x190128: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x19012c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x19012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x190130: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x190130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x190134: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x190134u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x190138: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x190138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x19013c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19013cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x190140: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x190144: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x190144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x190148: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190148u;
    SET_GPR_U32(ctx, 31, 0x190150u);
    ctx->pc = 0x19014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190148u;
    // 0x19014c: 0xae55008c  sw          $s5, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190148u, 0x190150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190150u;
label_190150:
    // 0x190150: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190150u;
    SET_GPR_U32(ctx, 31, 0x190158u);
    ctx->pc = 0x190154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190150u;
    // 0x190154: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190150u, 0x190158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190158u;
label_190158:
    // 0x190158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190158u;
    {
        const bool branch_taken_0x190158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190158u;
        // 0x19015c: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190158) {
            ctx->pc = 0x190188u;
            return;
        }
    }
    ctx->pc = 0x190160u;
}
