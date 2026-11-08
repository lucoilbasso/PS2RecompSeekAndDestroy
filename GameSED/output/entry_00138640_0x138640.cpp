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

// Function: entry_00138640
// Address: 0x138640 - 0x138678
void entry_00138640_0x138640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138640_0x138640");
#endif

    ctx->pc = 0x138640u;

label_138640:
    // 0x138640: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x138644: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x138644u;
    {
        const bool branch_taken_0x138644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138644) {
            ctx->pc = 0x138648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138644u;
            // 0x138648: 0xaf848a2c  sw          $a0, -0x75D4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138678u;
            return;
        }
    }
    ctx->pc = 0x13864Cu;
    // 0x13864c: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x13864cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x138650: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x138650u;
    {
        const bool branch_taken_0x138650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138650) {
            ctx->pc = 0x138654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138650u;
            // 0x138654: 0xaf848a2c  sw          $a0, -0x75D4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138678u;
            return;
        }
    }
    ctx->pc = 0x138658u;
    // 0x138658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13865c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x138660: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x138664: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x138668: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x138668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13866c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x13866Cu;
    {
        const bool branch_taken_0x13866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13866Cu;
        // 0x138670: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13866c) {
            ctx->pc = 0x138640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138640;
        }
    }
    ctx->pc = 0x138674u;
    // 0x138674: 0x0  nop
    ctx->pc = 0x138674u;
    // NOP
    ctx->pc = 0x138678u;
}
