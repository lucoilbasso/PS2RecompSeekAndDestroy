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

// Function: entry_00198a38
// Address: 0x198a38 - 0x198a84
void entry_00198a38_0x198a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a38_0x198a38");
#endif

    ctx->pc = 0x198a38u;

label_198a38:
    // 0x198a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198a3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198a40: 0x0  nop
    ctx->pc = 0x198a40u;
    // NOP
    // 0x198a44: 0x0  nop
    ctx->pc = 0x198a44u;
    // NOP
    // 0x198a48: 0x0  nop
    ctx->pc = 0x198a48u;
    // NOP
    // 0x198a4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198A4Cu;
    {
        const bool branch_taken_0x198a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a4c) {
            ctx->pc = 0x198A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198a38;
        }
    }
    ctx->pc = 0x198A54u;
    // 0x198a54: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x198a58: 0x8f849158  lw          $a0, -0x6EA8($gp)
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
    // 0x198a5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198a60: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x198a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198a68: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x198a6c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x198a70: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x198a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x198a74: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x198a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x198a78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x198a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x198a7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198a80: 0xaf849158  sw          $a0, -0x6EA8($gp)
    ctx->pc = 0x198a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938968), GPR_U32(ctx, 4));
    ctx->pc = 0x198a84u;
}
