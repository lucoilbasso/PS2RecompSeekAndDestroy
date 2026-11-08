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

// Function: entry_0016bc50
// Address: 0x16bc50 - 0x16bc98
void entry_0016bc50_0x16bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc50_0x16bc50");
#endif

    switch (ctx->pc) {
        case 0x16bc60u: goto label_16bc60;
        case 0x16bc88u: goto label_16bc88;
        case 0x16bc90u: goto label_16bc90;
        default: break;
    }

    ctx->pc = 0x16bc50u;

    // 0x16bc50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16BC50u;
    {
        const bool branch_taken_0x16bc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC50u;
        // 0x16bc54: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc50) {
            ctx->pc = 0x16BC98u;
            return;
        }
    }
    ctx->pc = 0x16BC58u;
    // 0x16bc58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16BC58u;
    SET_GPR_U32(ctx, 31, 0x16BC60u);
    ctx->pc = 0x16BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC58u;
    // 0x16bc5c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16BC58u, 0x16BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC60u;
label_16bc60:
    // 0x16bc60: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x16bc64: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16bc68: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x16bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x16bc6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x16bc6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x16bc70: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x16bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x16bc74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x16bc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x16bc78: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x16bc7c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x16bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x16bc80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC80u;
    SET_GPR_U32(ctx, 31, 0x16BC88u);
    ctx->pc = 0x16BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC80u;
    // 0x16bc84: 0xae53008c  sw          $s3, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC80u, 0x16BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC88u;
label_16bc88:
    // 0x16bc88: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC88u;
    SET_GPR_U32(ctx, 31, 0x16BC90u);
    ctx->pc = 0x16BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC88u;
    // 0x16bc8c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC88u, 0x16BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC90u;
label_16bc90:
    // 0x16bc90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16BC90u;
    {
        const bool branch_taken_0x16bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC90u;
        // 0x16bc94: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc90) {
            ctx->pc = 0x16BCC0u;
            return;
        }
    }
    ctx->pc = 0x16BC98u;
}
