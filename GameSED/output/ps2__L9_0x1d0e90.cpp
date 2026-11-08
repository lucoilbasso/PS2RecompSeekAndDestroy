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

// Function: $L9
// Address: 0x1d0e90 - 0x1d0ec0
void ps2__L9_0x1d0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L9_0x1d0e90");
#endif

    ctx->pc = 0x1d0e90u;

label_1d0e90:
    // 0x1d0e90: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0E90u;
    {
        const bool branch_taken_0x1d0e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E90u;
        // 0x1d0e94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e90) {
            ctx->pc = 0x1D0EDCu;
            return;
        }
    }
    ctx->pc = 0x1D0E98u;
    // 0x1d0e98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d0e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0e9c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d0e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d0ea0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0ea4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1d0ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0ea8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1d0eac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0EACu;
    {
        const bool branch_taken_0x1d0eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EACu;
        // 0x1d0eb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eac) {
            ctx->pc = 0x1D0E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e90;
        }
    }
    ctx->pc = 0x1D0EB4u;
    // 0x1d0eb4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d0eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0eb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0EB8u;
    {
        const bool branch_taken_0x1d0eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EB8u;
        // 0x1d0ebc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eb8) {
            ctx->pc = 0x1D0EDCu;
            return;
        }
    }
    ctx->pc = 0x1D0EC0u;
}
