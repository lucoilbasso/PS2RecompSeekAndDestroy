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

// Function: entry_001bec30
// Address: 0x1bec30 - 0x1bec60
void entry_001bec30_0x1bec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bec30_0x1bec30");
#endif

    ctx->pc = 0x1bec30u;

label_1bec30:
    // 0x1bec30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1bec34: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x1bec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x1bec38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u));
    // 0x1bec3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1bec40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bec44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BEC44u;
    {
        const bool branch_taken_0x1bec44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec44) {
            ctx->pc = 0x1BEC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bec30;
        }
    }
    ctx->pc = 0x1BEC4Cu;
    // 0x1bec4c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bec50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1bec50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bec54: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1bec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bec58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BEC58u;
    {
        const bool branch_taken_0x1bec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC58u;
        // 0x1bec5c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec58) {
            ctx->pc = 0x1BECF4u;
            return;
        }
    }
    ctx->pc = 0x1BEC60u;
}
