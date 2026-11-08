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

// Function: entry_001bcb40
// Address: 0x1bcb40 - 0x1bcb70
void entry_001bcb40_0x1bcb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb40_0x1bcb40");
#endif

    ctx->pc = 0x1bcb40u;

label_1bcb40:
    // 0x1bcb40: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bcb44: 0x600013  mtlo        $v1
    ctx->pc = 0x1bcb44u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1bcb48: 0x72628000  madd        $s0, $s3, $v0
    ctx->pc = 0x1bcb48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1bcb4c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1bcb4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bcb50: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1bcb50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcb54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bcb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bcb58: 0x5043ffd5  beql        $v0, $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BCB58u;
    {
        const bool branch_taken_0x1bcb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bcb58) {
            ctx->pc = 0x1BCB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCB58u;
            // 0x1bcb5c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCAB0u;
            return;
        }
    }
    ctx->pc = 0x1BCB60u;
    // 0x1bcb60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bcb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bcb64: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x1bcb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1bcb68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BCB68u;
    {
        const bool branch_taken_0x1bcb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB68u;
        // 0x1bcb6c: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb68) {
            ctx->pc = 0x1BCB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcb40;
        }
    }
    ctx->pc = 0x1BCB70u;
}
