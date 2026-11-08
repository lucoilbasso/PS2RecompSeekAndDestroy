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

// Function: entry_001b3d58
// Address: 0x1b3d58 - 0x1b3d84
void entry_001b3d58_0x1b3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d58_0x1b3d58");
#endif

    ctx->pc = 0x1b3d58u;

label_1b3d58:
    // 0x1b3d58: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b3d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b3d5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B3D5Cu;
    {
        const bool branch_taken_0x1b3d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D5Cu;
        // 0x1b3d60: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d5c) {
            ctx->pc = 0x1B3D88u;
            return;
        }
    }
    ctx->pc = 0x1B3D64u;
    // 0x1b3d64: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b3d68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3d6c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b3d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3d70: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b3d74: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3D74u;
    {
        const bool branch_taken_0x1b3d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d74) {
            ctx->pc = 0x1B3D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D74u;
            // 0x1b3d78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d58;
        }
    }
    ctx->pc = 0x1B3D7Cu;
    // 0x1b3d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D7Cu;
    {
        const bool branch_taken_0x1b3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D7Cu;
        // 0x1b3d80: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d7c) {
            ctx->pc = 0x1B3D8Cu;
            return;
        }
    }
    ctx->pc = 0x1B3D84u;
}
