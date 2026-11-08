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

// Function: entry_00124ebc
// Address: 0x124ebc - 0x124f18
void entry_00124ebc_0x124ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ebc_0x124ebc");
#endif

    switch (ctx->pc) {
        case 0x124ed8u: goto label_124ed8;
        case 0x124f08u: goto label_124f08;
        case 0x124f10u: goto label_124f10;
        default: break;
    }

    ctx->pc = 0x124ebcu;

    // 0x124ebc: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x124EBCu;
    {
        const bool branch_taken_0x124ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EBCu;
        // 0x124ec0: 0x8fb000f4  lw          $s0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ebc) {
            ctx->pc = 0x124F48u;
            return;
        }
    }
    ctx->pc = 0x124EC4u;
    // 0x124ec4: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x124ec8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x124EC8u;
    {
        const bool branch_taken_0x124ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC8u;
        // 0x124ecc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ec8) {
            ctx->pc = 0x124F18u;
            return;
        }
    }
    ctx->pc = 0x124ED0u;
    // 0x124ed0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124ED0u;
    SET_GPR_U32(ctx, 31, 0x124ED8u);
    ctx->pc = 0x124ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ED0u;
    // 0x124ed4: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124ED0u, 0x124ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ED8u;
label_124ed8:
    // 0x124ed8: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x124edc: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x124edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124ee0: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124ee4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x124ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x124ee8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x124eec: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x124eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x124ef0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x124ef4: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x124ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x124ef8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x124ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124efc: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x124efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x124f00: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124F00u;
    SET_GPR_U32(ctx, 31, 0x124F08u);
    ctx->pc = 0x124F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F00u;
    // 0x124f04: 0xae66008c  sw          $a2, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124F00u, 0x124F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124F08u;
    SET_GPR_U32(ctx, 31, 0x124F10u);
    ctx->pc = 0x124F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F08u;
    // 0x124f0c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124F08u, 0x124F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F10u;
label_124f10:
    // 0x124f10: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x124F10u;
    {
        const bool branch_taken_0x124f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F10u;
        // 0x124f14: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f10) {
            ctx->pc = 0x125034u;
            return;
        }
    }
    ctx->pc = 0x124F18u;
}
